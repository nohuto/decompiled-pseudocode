/*
 * XREFs of sub_14026DA80 @ 0x14026DA80
 * Callers:
 *     sub_1406F40E0 @ 0x1406F40E0 (sub_1406F40E0.c)
 *     sub_14097629C @ 0x14097629C (sub_14097629C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14026DA80(__int64 a1)
{
  __int64 v1; // rcx

  v1 = (a1 << 16) | 0x400;
  if ( !qword_140C50780 )
    return v1;
  if ( (qword_140C50780 & v1) != 0 )
    return v1 | 0x10;
  return v1 | qword_140C50780;
}
