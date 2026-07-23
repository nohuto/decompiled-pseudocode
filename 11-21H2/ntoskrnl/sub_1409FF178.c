/*
 * XREFs of sub_1409FF178 @ 0x1409FF178
 * Callers:
 *     sub_1409FD4A0 @ 0x1409FD4A0 (sub_1409FD4A0.c)
 *     sub_1409FDC88 @ 0x1409FDC88 (sub_1409FDC88.c)
 *     sub_1409FF2C4 @ 0x1409FF2C4 (sub_1409FF2C4.c)
 *     sub_1409FF6B0 @ 0x1409FF6B0 (sub_1409FF6B0.c)
 *     sub_140A01A20 @ 0x140A01A20 (sub_140A01A20.c)
 * Callees:
 *     sub_1409FD474 @ 0x1409FD474 (sub_1409FD474.c)
 */

__int64 __fastcall sub_1409FF178(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  unsigned __int64 v4; // r10
  unsigned int v5; // r9d
  _WORD *i; // rcx
  unsigned __int64 v7; // r10
  char v8; // al
  _WORD *v9; // rax
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  int v15; // r9d

  if ( a1 > a2 )
    return 3221225485LL;
  v2 = a1 + 12;
  if ( a1 + 12 > a2 )
    return 3221225485LL;
  v3 = *(unsigned int *)(a1 + 4);
  if ( (unsigned int)v3 < 0xC )
    return 3221225485LL;
  v4 = a1 + v3;
  if ( a1 + v3 < a1 )
    return 3221225485LL;
  if ( v4 > a2 )
    return 3221225485LL;
  if ( *(_DWORD *)a1 != 1 )
    return 3221225485LL;
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 - 1 > 4 )
    return 3221225485LL;
  if ( v4 < a2 )
    a2 = a1 + v3;
  if ( !v5 )
    return 3221225485LL;
  if ( v5 <= 2 )
  {
    v14 = sub_1409FD474((_WORD *)(a1 + 12), a2);
    v15 = -1;
  }
  else
  {
    if ( v5 != 3 )
    {
      if ( v5 == 4 )
      {
        for ( i = (_WORD *)(a1 + 16); v2 + 4 <= a2; i = (_WORD *)(v2 + 4) )
        {
          if ( *(unsigned __int16 *)(v2 + 2) < 4u )
            break;
          v7 = v2 + *(unsigned __int16 *)(v2 + 2);
          if ( v7 > a2 )
            break;
          v8 = *(_BYTE *)v2 & 0x7F;
          if ( v8 == 127 )
            return 0LL;
          if ( v8 == 4 && *(_BYTE *)(v2 + 1) == 4 )
          {
            v9 = i;
            if ( (unsigned __int64)i >= v7 )
              break;
            while ( *v9 )
            {
              if ( (unsigned __int64)++v9 >= v7 )
                return 3221225485LL;
            }
            if ( (unsigned int)(v9 - i) == -1 )
              break;
          }
          v2 += (*(unsigned __int8 *)(v2 + 3) << 8) | (unsigned __int64)*(unsigned __int8 *)(v2 + 2);
        }
      }
      return 3221225485LL;
    }
    v11 = sub_1409FD474((_WORD *)(a1 + 12), a2);
    if ( v11 == -1 )
      return 3221225485LL;
    v14 = sub_1409FD474((_WORD *)(v13 + 2 * (v11 + 1LL)), v12);
  }
  if ( v14 == v15 )
    return 3221225485LL;
  return 0LL;
}
