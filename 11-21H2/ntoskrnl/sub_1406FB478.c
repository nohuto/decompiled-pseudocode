/*
 * XREFs of sub_1406FB478 @ 0x1406FB478
 * Callers:
 *     NtMapViewOfSection @ 0x1406FB000 (NtMapViewOfSection.c)
 *     sub_1407E6C40 @ 0x1407E6C40 (sub_1407E6C40.c)
 *     sub_14097AD20 @ 0x14097AD20 (sub_14097AD20.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x14023BD00 (RtlFindMostSignificantBit.c)
 */

__int64 __fastcall sub_1406FB478(ULONGLONG *a1)
{
  ULONGLONG v1; // rax
  unsigned __int64 v4; // rax

  v1 = *a1;
  if ( *a1 && (v1 < 0x20 ? (v4 = v1 + 32) : (v4 = 63 - RtlFindMostSignificantBit(*a1)), *a1 = v4, v4 > 0x35) )
    return 3221225485LL;
  else
    return 0LL;
}
