/*
 * XREFs of sub_1403AADFC @ 0x1403AADFC
 * Callers:
 *     sub_140A53828 @ 0x140A53828 (sub_140A53828.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403AADFC(__int64 a1, int a2)
{
  __int64 v4; // rdx

  if ( (unsigned __int8)sub_1403AAE50() == 1 && byte_140D016E8 )
    v4 = (unsigned int)(16 * a2 - 1073733632);
  else
    v4 = (unsigned int)(4 * a2 + 1024);
  return sub_14042A5E0(a1, v4);
}
