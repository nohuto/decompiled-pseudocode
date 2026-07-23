/*
 * XREFs of sub_1407A4C90 @ 0x1407A4C90
 * Callers:
 *     sub_14024DB60 @ 0x14024DB60 (sub_14024DB60.c)
 *     sub_1405B2088 @ 0x1405B2088 (sub_1405B2088.c)
 *     sub_1406E2C14 @ 0x1406E2C14 (sub_1406E2C14.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 *     sub_1407A4A8C @ 0x1407A4A8C (sub_1407A4A8C.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_14096D8A8 @ 0x14096D8A8 (sub_14096D8A8.c)
 * Callees:
 *     sub_14022A470 @ 0x14022A470 (sub_14022A470.c)
 *     sub_14030EBF4 @ 0x14030EBF4 (sub_14030EBF4.c)
 */

__int64 __fastcall sub_1407A4C90(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v8; // r10
  unsigned __int64 v9; // r13
  unsigned int v10; // r9d
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbp
  unsigned int v13; // r12d
  unsigned __int64 i; // rdi
  int v15; // ecx
  char v16; // dl
  bool v17; // cc
  __int64 result; // rax
  unsigned __int64 v19; // rcx

  v8 = 4096LL;
  if ( (*(_DWORD *)(a1 + 48) & 0xA00000) == 0xA00000 )
    v8 = sub_14030EBF4(a1) << 12;
  v9 = a2 + a3 - 1;
  v10 = 0;
  v11 = a2 & ~(v8 - 1);
  v12 = (~(v8 - 1) & (v8 + v9)) - 1;
  if ( v11 < (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12
    || v12 > (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) )
  {
    return 3221225541LL;
  }
  v13 = a4 < 0x55 ? a4 : 0;
  for ( i = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 64) == 2 )
    {
      v15 = *(_DWORD *)(i + 8);
      if ( ((v15 & 0x40) == 0 || a5 == 1)
        && v11 <= *(_QWORD *)(i + 16)
        && v12 >= (*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFF000uLL) )
      {
        if ( a4 >= 0x55 && (v15 & 8) != 0 )
          return 3221225541LL;
        if ( (v15 & 0x100) != 0 && (*(_DWORD *)(a1 + 48) & 0xA200000) == 0x8200000 )
        {
          if ( (a4 | 0x10) != 0x11
            || (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) == a2 >> 12
            || (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) == v9 >> 12 )
          {
            return 3221225541LL;
          }
        }
        else if ( (v15 & 4) != 0 )
        {
          if ( a4 < 0x55 )
          {
            v19 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
            if ( (v19 == 2147352576 || v19 == qword_140C50678 && qword_140C50678)
              && (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 1) == 0 )
            {
              return 3221225541LL;
            }
            result = sub_14022A470(a1, a2, v9, a4, 1);
            v10 = result;
            if ( (int)result < 0 )
              return result;
          }
        }
        else
        {
          if ( (v13 & 0xFFFFFFF8) == 0x10 )
            return 3221225541LL;
          v16 = *((_BYTE *)qword_1400161F0 + (v13 & 7));
          if ( (v15 & 1) != 0 )
          {
            v17 = v16 < 10;
            goto LABEL_16;
          }
          if ( (v15 & 2) != 0 )
          {
            v17 = v16 < 11;
LABEL_16:
            if ( v17 )
              return 3221225541LL;
          }
        }
      }
    }
  }
  return v10;
}
