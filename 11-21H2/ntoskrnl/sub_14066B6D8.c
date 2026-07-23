/*
 * XREFs of sub_14066B6D8 @ 0x14066B6D8
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x14066B5D0 (RtlFormatCurrentUserKeyPath.c)
 *     sub_140A084FC @ 0x140A084FC (sub_140A084FC.c)
 *     sub_140A1B9F0 @ 0x140A1B9F0 (sub_140A1B9F0.c)
 * Callees:
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 */

__int64 __fastcall sub_14066B6D8(unsigned __int8 *a1, _DWORD *a2)
{
  int v4; // edx

  if ( RtlValidSid(a1) != 1 )
    return 3221225592LL;
  if ( a1[2] || (v4 = 28, a1[3]) )
    v4 = 36;
  *a2 = v4 + 22 * a1[1];
  return 0LL;
}
