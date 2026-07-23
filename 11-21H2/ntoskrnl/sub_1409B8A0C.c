/*
 * XREFs of sub_1409B8A0C @ 0x1409B8A0C
 * Callers:
 *     sub_1409B8B20 @ 0x1409B8B20 (sub_1409B8B20.c)
 * Callees:
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 */

char __fastcall sub_1409B8A0C(__int64 a1)
{
  _WORD *v2; // rcx
  __int64 v3; // r11
  unsigned int v4; // edx
  __int64 v5; // r8
  unsigned __int16 v6; // ax
  unsigned int v7; // eax
  unsigned int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  if ( !a1 )
    return 0;
  v2 = *(_WORD **)a1;
  if ( !v2 )
    return 0;
  if ( (int)sub_1402E0AC4(v2, 0xFFFFuLL, &v11) < 0 )
    return 0;
  if ( v11 == v3 )
    return 0;
  if ( *(_WORD *)(a1 + 10) != (_WORD)v3 )
    return 0;
  if ( (*(_DWORD *)(a1 + 12) & 0xFFC0) != 0 )
    return 0;
  v4 = *(_DWORD *)(a1 + 16);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 )
    return 0;
  v6 = *(_WORD *)(a1 + 8);
  if ( !v6 )
    return 0;
  if ( v6 > 2u )
  {
    switch ( v6 )
    {
      case 3u:
        v10 = v3;
        while ( *(_QWORD *)(v5 + 8LL * v10) != v3 )
        {
          if ( ++v10 >= v4 )
            return 1;
        }
        break;
      case 5u:
        v9 = v3;
        while ( *(_QWORD *)(v5 + 16LL * v9) != v3 && *(_DWORD *)(v5 + 16LL * v9 + 8) != (_DWORD)v3 )
        {
          if ( ++v9 >= v4 )
            return 1;
        }
        break;
      case 6u:
        while ( *(_QWORD *)(v5 + 8LL * (unsigned int)v3) <= 1uLL )
        {
          LODWORD(v3) = v3 + 1;
          if ( (unsigned int)v3 >= v4 )
            return 1;
        }
        break;
      case 0x10u:
        v7 = v3;
        do
        {
          if ( *(_QWORD *)(v5 + 16LL * v7) == v3 )
          {
            if ( *(_DWORD *)(v5 + 16LL * v7 + 8) != (_DWORD)v3 )
              return 0;
          }
          else if ( *(_DWORD *)(v5 + 16LL * v7 + 8) == (_DWORD)v3 )
          {
            return 0;
          }
          ++v7;
        }
        while ( v7 < v4 );
        return 1;
    }
    return 0;
  }
  return 1;
}
