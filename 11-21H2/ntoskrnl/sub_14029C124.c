/*
 * XREFs of sub_14029C124 @ 0x14029C124
 * Callers:
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14029C124(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 8)) != 0 )
    return *(_QWORD *)(v2 + 528);
  else
    return *((_QWORD *)qword_140D06C40 + 1);
}
