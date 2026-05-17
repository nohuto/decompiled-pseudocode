/*
 * XREFs of RtlExtendedMagicDivide @ 0x18007BE70
 * Callers:
 *     RtlTimeToSecondsSince1980 @ 0x18007BDE0 (RtlTimeToSecondsSince1980.c)
 *     RtlTimeToSecondsSince1970 @ 0x18007BE30 (RtlTimeToSecondsSince1970.c)
 *     TimeToDaysAndFraction @ 0x1800F07DC (TimeToDaysAndFraction.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlExtendedMagicDivide(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rdx

  v3 = (unsigned __int64)((abs64(a1) * (unsigned __int128)a2) >> 64) >> a3;
  if ( a1 < 0 )
    return -(__int64)v3;
  return v3;
}
