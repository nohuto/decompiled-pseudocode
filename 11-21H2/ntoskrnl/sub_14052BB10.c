/*
 * XREFs of sub_14052BB10 @ 0x14052BB10
 * Callers:
 *     sub_14052AF40 @ 0x14052AF40 (sub_14052AF40.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14052BB10(__int16 *a1)
{
  __int64 v1; // r8
  __int16 v2; // dx
  unsigned int v3; // r9d
  __int64 v4; // rax
  unsigned int v5; // r9d
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rax

  v1 = 0LL;
  v2 = *a1;
  v3 = *((unsigned __int8 *)KeGetCurrentPrcb() + 64);
  switch ( *((_BYTE *)a1 + 7) )
  {
    case 0:
      v7 = (unsigned __int8)v2;
      if ( v3 != 15 )
        v7 = ((*a1 & 0xF00 | ((unsigned __int64)(a1[3] & 3) << 16)) << 24) | (unsigned __int8)*a1;
      v6 = (*((unsigned __int8 *)a1 + 2) | ((*((_BYTE *)a1 + 5) & 1 | (32
                                                                     * (a1[2] & 1 | (2LL * (*((_BYTE *)a1 + 3) & 0xF))))) << 10) | 0x300) << 8;
      return v6 | v7;
    case 1:
      v8 = v2 & 0xF00;
      if ( v3 > 0x16 )
        v8 |= (unsigned __int64)(*a1 & 0x3000) << 23;
      return (v8 << 24) | (unsigned __int8)v2 | ((unsigned __int64)*((unsigned __int8 *)a1 + 2) << 8);
    case 2:
      v4 = (unsigned __int8)v2;
      v5 = v3 - 22;
      if ( v5 )
      {
        if ( v5 == 1 )
          v6 = 0xFF0F000000000000uLL;
        else
          v6 = 0x300C00000000000LL;
      }
      else
      {
        v6 = (unsigned __int64)(*a1 & 0xF00) << 24;
      }
      v7 = v4 | ((unsigned __int64)*((unsigned __int8 *)a1 + 2) << 8);
      return v6 | v7;
  }
  return v1;
}
