/*
 * XREFs of sub_14051BC80 @ 0x14051BC80
 * Callers:
 *     sub_140507040 @ 0x140507040 (sub_140507040.c)
 *     sub_140509960 @ 0x140509960 (sub_140509960.c)
 *     sub_140A61640 @ 0x140A61640 (sub_140A61640.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14051BC80(__int64 a1, int a2)
{
  __int64 v4; // rdx

  if ( sub_1403AAE50() == 1 && byte_140D016E8 )
    v4 = (unsigned int)(16 * a2 - 1073733629);
  else
    v4 = (unsigned int)(4 * a2 + 1027);
  return sub_14042A5E0(a1, v4);
}
