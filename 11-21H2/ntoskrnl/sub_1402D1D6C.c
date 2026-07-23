/*
 * XREFs of sub_1402D1D6C @ 0x1402D1D6C
 * Callers:
 *     sub_1402D1D14 @ 0x1402D1D14 (sub_1402D1D14.c)
 *     RtlTimeToSecondsSince1970 @ 0x1405E3FA0 (RtlTimeToSecondsSince1970.c)
 *     RtlTimeToSecondsSince1980 @ 0x1405E3FE0 (RtlTimeToSecondsSince1980.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1402D1D6C(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rdx

  v3 = (unsigned __int64)((abs64(a1) * (unsigned __int128)a2) >> 64) >> a3;
  if ( a1 < 0 )
    return -(__int64)v3;
  return v3;
}
