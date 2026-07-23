/*
 * XREFs of sub_1403AAD84 @ 0x1403AAD84
 * Callers:
 *     sub_140506CA4 @ 0x140506CA4 (sub_140506CA4.c)
 *     sub_1405071C4 @ 0x1405071C4 (sub_1405071C4.c)
 *     sub_140509EE4 @ 0x140509EE4 (sub_140509EE4.c)
 *     sub_140A53828 @ 0x140A53828 (sub_140A53828.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403AAD84(__int64 a1, int a2)
{
  __int64 v4; // rdx

  if ( (unsigned __int8)sub_1403AAE50() == 1 && byte_140D016E8 )
    v4 = (unsigned int)(16 * a2 - 1073733631);
  else
    v4 = (unsigned int)(4 * a2 + 1025);
  return sub_14042A5E0(a1, v4);
}
