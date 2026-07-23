/*
 * XREFs of sub_14034412C @ 0x14034412C
 * Callers:
 *     sub_1402B7AE0 @ 0x1402B7AE0 (sub_1402B7AE0.c)
 * Callees:
 *     sub_14021087C @ 0x14021087C (sub_14021087C.c)
 */

__int64 __fastcall sub_14034412C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 i; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax

  if ( dword_140D06AC0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL)
       - ((*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) >> 1) & 0x5555555555555555LL);
    if ( (unsigned int)((0x101010101010101LL
                       * (((v8 & 0x3333333333333333LL)
                         + ((v8 >> 2) & 0x3333333333333333LL)
                         + (((v8 & 0x3333333333333333LL) + ((v8 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < dword_140D06AC0 )
      return 0LL;
    v9 = *(_QWORD *)(a1 + 200);
    v10 = *(_QWORD *)(a1 + 34912);
    if ( v9 != v10 )
    {
      v11 = v10 & ~v9;
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 40LL) & v11) == 0 )
      {
        _BitScanForward64(&v12, v11);
        if ( (*(_DWORD *)(qword_140D088C0[dword_140D105E0[64 * *(unsigned __int8 *)(a1 + 208) + (int)v12]] + 236) & 0x400) == 0 )
          return 0LL;
      }
    }
  }
  v2 = 0LL;
  for ( i = a1 + 32560; ; i = v7 + 392 )
  {
    v4 = *(_QWORD *)(i + 8);
    if ( (v4 & 1) != 0 )
    {
      if ( v4 == 1 )
        return v2;
      v5 = v4 ^ (i | 1);
    }
    else
    {
      v5 = *(_QWORD *)(i + 8);
    }
    if ( !v5 )
      break;
    v7 = v5 - 88;
    v2 = sub_14021087C(a1, v5 - 88, 0);
    if ( v2 )
      break;
  }
  return v2;
}
