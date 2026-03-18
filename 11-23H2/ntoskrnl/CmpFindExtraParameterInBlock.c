/*
 * XREFs of CmpFindExtraParameterInBlock @ 0x14068E720
 * Callers:
 *     VrpPreOpenOrCreate @ 0x14068CFD8 (VrpPreOpenOrCreate.c)
 *     VrpPostOpenOrCreate @ 0x14068DF0C (VrpPostOpenOrCreate.c)
 *     CmRetrieveExtraParameter @ 0x14068E6DC (CmRetrieveExtraParameter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpFindExtraParameterInBlock(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // r9
  __int64 v5; // r10

  for ( i = (_QWORD *)*a1; ; i = (_QWORD *)*i )
  {
    if ( i == a1 )
      return 3221225524LL;
    v5 = i[2] - *a2;
    if ( !v5 )
      v5 = i[3] - a2[1];
    if ( !v5 )
      break;
  }
  *a3 = i;
  return 0LL;
}
