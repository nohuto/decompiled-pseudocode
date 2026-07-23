/*
 * XREFs of _strnicmp @ 0x1403E1240
 * Callers:
 *     sub_140757FFC @ 0x140757FFC (sub_140757FFC.c)
 *     sub_14091FEFC @ 0x14091FEFC (sub_14091FEFC.c)
 *     sub_140B0D360 @ 0x140B0D360 (sub_140B0D360.c)
 *     sub_140B0D514 @ 0x140B0D514 (sub_140B0D514.c)
 *     sub_140B18FFC @ 0x140B18FFC (sub_140B18FFC.c)
 *     sub_140B2CF90 @ 0x140B2CF90 (sub_140B2CF90.c)
 * Callees:
 *     sub_1403E11DC @ 0x1403E11DC (sub_1403E11DC.c)
 */

int __cdecl strnicmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  return sub_1403E11DC((unsigned __int8 *)Str1, (unsigned __int8 *)Str2, MaxCount);
}
