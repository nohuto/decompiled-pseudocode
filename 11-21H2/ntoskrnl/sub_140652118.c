/*
 * XREFs of sub_140652118 @ 0x140652118
 * Callers:
 *     sub_14065241C @ 0x14065241C (sub_14065241C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_140930250 @ 0x140930250 (sub_140930250.c)
 */

__int64 __fastcall sub_140652118(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // rbx

  *a3 = 0LL;
  v5 = sub_14042A5E0(a1, 6LL);
  if ( v5 >= 0 )
  {
    v6 = 0;
    v7 = sub_140930250(0LL);
    if ( v7 )
    {
      while ( 1 )
      {
        v5 = sub_14042A5E0(a1, 2954240LL);
        if ( ((v5 + 0x80000000) & 0x80000000) == 0 && v5 != -2147483643 )
          break;
        if ( *(_DWORD *)(v7 + 4) <= v6 )
        {
          *(_DWORD *)(v7 + 4) = v6;
          v5 = sub_14042A5E0(a1, 6LL);
          if ( v5 >= 0 )
          {
            *a3 = v7;
            return (unsigned int)v5;
          }
          break;
        }
        v6 = *(_DWORD *)(v7 + 4);
        sub_1406D9550(v7);
        v7 = sub_140930250(v6);
        if ( !v7 )
          return (unsigned int)-1073741670;
      }
      sub_1406D9550(v7);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
