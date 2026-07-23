/*
 * XREFs of sub_1403B822C @ 0x1403B822C
 * Callers:
 *     sub_140A54AB0 @ 0x140A54AB0 (sub_140A54AB0.c)
 * Callees:
 *     sub_1403DA174 @ 0x1403DA174 (sub_1403DA174.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int16 sub_1403B822C()
{
  unsigned int v0; // ebx
  unsigned int i; // esi
  unsigned __int8 j; // bp
  unsigned __int8 k; // di
  int v4; // eax
  bool v5; // zf
  _WORD v7[32]; // [rsp+30h] [rbp-68h] BYREF

  memset(v7, 0, sizeof(v7));
  v0 = 0;
  for ( i = 0; i <= 0xFF; ++i )
  {
    for ( j = 0; j < 0x20u; ++j )
    {
      for ( k = 0; k < 8u; ++k )
      {
        v0 = j & 0x1F | v0 & 0xFFFFFF00 | (32 * (k & 7));
        v4 = sub_14042A5E0(i, v0);
        if ( v4 && (LOWORD(v4) = v7[0] - 1, (unsigned __int16)(v7[0] - 1) <= 0xFFFDu) )
        {
          v4 = sub_14042A5E0(i, v0);
          if ( !v4 )
            continue;
          LOWORD(v4) = sub_1403DA174(0LL, i, v0, v7, 0LL);
          if ( k )
            continue;
          v5 = SLOBYTE(v7[7]) >= 0;
        }
        else
        {
          v5 = k == 0;
        }
        if ( v5 )
          break;
      }
    }
  }
  return v4;
}
