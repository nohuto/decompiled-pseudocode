/*
 * XREFs of MiZeroLargePage @ 0x1402EC08C
 * Callers:
 *     MiZeroAndReleasePages @ 0x1402D3030 (MiZeroAndReleasePages.c)
 *     MiGetLargePage @ 0x1402D7A80 (MiGetLargePage.c)
 *     MiZeroAndConvertPage @ 0x1406500A4 (MiZeroAndConvertPage.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1406671AC (MiAllocateLargeProcessPagesFromCache.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A4438C (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x140217E84 (MiMakeProtectionPfnCompatible.c)
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     MiGetUltraMapping @ 0x1402D1A10 (MiGetUltraMapping.c)
 *     MiInitializePageColorBase @ 0x1402E1690 (MiInitializePageColorBase.c)
 *     MiDeleteUltraThreadContext @ 0x1402E92A4 (MiDeleteUltraThreadContext.c)
 *     MiWriteLargePte @ 0x1402EC26C (MiWriteLargePte.c)
 *     MiCreateUltraThreadContext @ 0x1402EC3F0 (MiCreateUltraThreadContext.c)
 *     MiZeroPhysicalPage @ 0x14033905C (MiZeroPhysicalPage.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeZeroPages @ 0x140423F80 (KeZeroPages.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall MiZeroLargePage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbp
  unsigned __int64 v7; // r15
  ULONG_PTR v8; // r14
  unsigned int v9; // edi
  int ProtectionPfnCompatible; // esi
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 UltraMapping; // rbx
  __int64 v17; // r9
  __int128 v18; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v19[128]; // [rsp+40h] [rbp-C8h] BYREF

  v4 = a3;
  v18 = 0LL;
  memset(v19, 0, sizeof(v19));
  v7 = MiLargePageSizes[v4];
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( v8 <= qword_140C65CA0 && ((*(_QWORD *)(16 * ((a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v9 = 4;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a2);
  }
  else
  {
    v9 = 4;
    ProtectionPfnCompatible = 4;
  }
  v11 = 0;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
      v9 = 2;
  }
  else
  {
    v9 = 1;
  }
  v12 = MiSearchNumaNodeTable(v8);
  MiInitializePageColorBase(0LL, *((_DWORD *)v12 + 2) + 1, (__int64)&v18);
  result = MiCreateUltraThreadContext(v19, &v18, v9, 0LL);
  if ( (_DWORD)result )
  {
    v15 = 32LL * (unsigned int)v4;
    UltraMapping = MiGetUltraMapping((unsigned __int64 *)&v19[v15], v4, v7, 0);
    if ( (_DWORD)v4 == 2 )
    {
      UltraMapping = MiGetUltraMapping((unsigned __int64 *)&v19[v15], 2u, v7, 0);
      v17 = ProtectionPfnCompatible | 0xA0000000;
    }
    else
    {
      v17 = ProtectionPfnCompatible | 0xA0000000;
      if ( (unsigned int)v4 <= 1 )
        v17 = ProtectionPfnCompatible | 0xA4000000;
    }
    MiWriteLargePte(UltraMapping, v8, (unsigned int)v4, v17);
    KeZeroPages(UltraMapping, v7 << 12);
    MiWriteLargePte(UltraMapping, v8, (unsigned int)v4, 0LL);
    return MiDeleteUltraThreadContext((__int64)v19);
  }
  else if ( v7 )
  {
    result = 0LL;
    do
    {
      MiZeroPhysicalPage(v14, result + v8, 0LL, a4);
      result = ++v11;
    }
    while ( v11 < v7 );
  }
  return result;
}
