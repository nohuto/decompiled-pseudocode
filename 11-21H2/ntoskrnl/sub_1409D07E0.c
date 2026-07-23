/*
 * XREFs of sub_1409D07E0 @ 0x1409D07E0
 * Callers:
 *     sub_1409D0A60 @ 0x1409D0A60 (sub_1409D0A60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409D07E0(_WORD *a1, _DWORD *a2)
{
  bool v3; // zf
  __int64 v4; // r8
  __int64 result; // rax
  __int16 v6; // cx

  v3 = *a1 == 32;
  *a2 = 0;
  if ( !v3 )
  {
    LODWORD(v4) = 0;
    do
    {
      result = (unsigned int)v4;
      v6 = a1[(unsigned int)v4];
      if ( v6 == 41 )
        break;
      if ( v6 == 125 )
        break;
      if ( v6 == asc_14004190C[0] )
        break;
      if ( v6 == asc_140041914[0] )
        break;
      if ( v6 == 44 )
        break;
      if ( !v6 )
        break;
      v4 = (unsigned int)(v4 + 1);
      *a2 = v4;
    }
    while ( a1[v4] != 32 );
  }
  return result;
}
