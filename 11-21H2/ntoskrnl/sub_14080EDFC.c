/*
 * XREFs of sub_14080EDFC @ 0x14080EDFC
 * Callers:
 *     sub_1406A97F0 @ 0x1406A97F0 (sub_1406A97F0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14080EDFC(__int16 *a1, _OWORD *a2)
{
  __int16 v2; // r8
  _WORD *v3; // rax
  __int16 v4; // ax
  _WORD *v5; // r8

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (_WORD *)*((_QWORD *)a1 + 1);
    if ( *v3 == 92 )
    {
      *((_QWORD *)a1 + 1) = v3 + 1;
      a1[1] -= 2;
      *a1 = v2 - 2;
    }
  }
  *a2 = *(_OWORD *)a1;
  v4 = *a1;
  if ( *a1 )
  {
    v5 = (_WORD *)*((_QWORD *)a1 + 1);
    do
    {
      if ( *v5 == 92 )
        break;
      ++v5;
      v4 = *a1 - 2;
      *((_QWORD *)a1 + 1) = v5;
      *a1 = v4;
    }
    while ( v4 );
  }
  *(_WORD *)a2 -= v4;
  a1[1] -= *(_WORD *)a2;
  return *(_WORD *)a2 != 0;
}
