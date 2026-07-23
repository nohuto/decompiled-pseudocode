/*
 * XREFs of MiPerformSafePdeWrite @ 0x1403C6678
 * Callers:
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403B1724 (MiGetWsAndMakePageTablesNx.c)
 *     MiValidVirtualizationFault @ 0x14046CD22 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

struct _KTHREAD *__fastcall MiPerformSafePdeWrite(__int64 a1, unsigned __int64 a2, signed __int64 a3, char a4)
{
  unsigned __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  int v10; // edi
  struct _KTHREAD *v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  signed __int64 v14; // rcx
  struct _KTHREAD *result; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  _BYTE v19[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v19, 0, sizeof(v19));
  v7 = (__int64)(a2 << 25) >> 16;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v16 = a3 | 0x20;
    if ( (a4 & 1) == 0 )
      v16 = a3;
    v17 = v16 | 0x8000000000000000uLL;
    if ( (a4 & 2) == 0 )
      v17 = v16;
    v18 = v17 | 4;
    if ( (a4 & 4) == 0 )
      v18 = v17;
    return MiWriteValidPteNewProtection(a2, v18);
  }
  else
  {
    v8 = a4 & 1;
    v9 = a4 & 2;
    v10 = a4 & 4;
    do
    {
      v11 = (struct _KTHREAD *)a3;
      v12 = a3 | 0x20;
      if ( !v8 )
        v12 = a3;
      v13 = v12 | 0x8000000000000000uLL;
      if ( !v9 )
        v13 = v12;
      v14 = v13 | 4;
      if ( !v10 )
        v14 = v13;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      result = (struct _KTHREAD *)_InterlockedCompareExchange64((volatile signed __int64 *)a2, v14, a3);
      a3 = (signed __int64)result;
    }
    while ( result != v11 );
  }
  return result;
}
