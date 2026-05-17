/*
 * XREFs of RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800D73E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800448E4 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

__int64 __fastcall RtlDosLongPathNameToRelativeNtPathName_U_WithStatus(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  return RtlpDosPathNameToRelativeNtPathName_U(6, a1, a2, a3, a4);
}
