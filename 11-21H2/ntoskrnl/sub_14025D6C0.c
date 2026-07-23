/*
 * XREFs of sub_14025D6C0 @ 0x14025D6C0
 * Callers:
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_1403DC188 @ 0x1403DC188 (sub_1403DC188.c)
 *     sub_14045C52A @ 0x14045C52A (sub_14045C52A.c)
 * Callees:
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14025D6C0(__int64 a1, volatile signed __int64 *a2, signed __int64 a3, char a4)
{
  unsigned __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  int v10; // edi
  signed __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  signed __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  _BYTE v19[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v19, 0, sizeof(v19));
  v7 = (__int64)((_QWORD)a2 << 25) >> 16;
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
    return sub_14033DBC0(a2, v18);
  }
  else
  {
    v8 = a4 & 1;
    v9 = a4 & 2;
    v10 = a4 & 4;
    do
    {
      v11 = a3;
      v12 = a3 | 0x20;
      if ( !v8 )
        v12 = a3;
      v13 = v12 | 0x8000000000000000uLL;
      if ( !v9 )
        v13 = v12;
      v14 = v13 | 4;
      if ( !v10 )
        v14 = v13;
      if ( (dword_140D06880 & 0x4000000) != 0 )
        _mm_lfence();
      result = _InterlockedCompareExchange64(a2, v14, a3);
      a3 = result;
    }
    while ( result != v11 );
  }
  return result;
}
