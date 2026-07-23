/*
 * XREFs of sub_1409C52E0 @ 0x1409C52E0
 * Callers:
 *     sub_1409C0EC0 @ 0x1409C0EC0 (sub_1409C0EC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409C52E0(__int64 a1, _QWORD *a2)
{
  bool v3; // zf
  __int16 v5; // cx
  __int16 v6; // ax
  __int16 v7; // dx
  __int16 v9; // dx

  v3 = *(_DWORD *)a1 == -1069947632;
  *a2 = 0LL;
  if ( !v3 )
    return 3221226050LL;
  if ( (*(_WORD *)(a1 + 4) & 7) != 0 )
  {
    switch ( *(_WORD *)(a1 + 4) & 7 )
    {
      case 1:
        v5 = 13;
        break;
      case 2:
        v5 = 14;
        break;
      case 3:
        v5 = 16;
        break;
      case 4:
        v5 = 18;
        break;
      case 5:
        v5 = 20;
        break;
      case 6:
        v5 = 22;
        break;
      case 7:
        v5 = 24;
        break;
      default:
        return 3221226050LL;
    }
  }
  else
  {
    v5 = 12;
  }
  *(_WORD *)a2 = v5;
  if ( ((*(unsigned __int16 *)(a1 + 4) >> 3) & 1) != 0 )
  {
    if ( ((*(unsigned __int16 *)(a1 + 4) >> 3) & 1) != 1 )
      return 3221226050LL;
    v6 = 128;
  }
  else
  {
    v6 = 96;
  }
  *(_WORD *)a2 = v5 | v6;
  v7 = *(_WORD *)(a1 + 4);
  if ( (v7 & 0x30) != 0 )
    return 3221225474LL;
  v9 = v7 & 0xFFCF;
  *(_WORD *)(a1 + 4) = v9;
  *(_WORD *)a2 = *(_WORD *)a2 & 0x80FF | v9 & 0x4000 | (4 * (v9 & 0xFC0));
  if ( (v9 & 0x3000) == 0 && v9 >= 0 )
    return 0LL;
  return 3221226050LL;
}
