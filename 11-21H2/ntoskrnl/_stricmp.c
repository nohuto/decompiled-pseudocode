/*
 * XREFs of _stricmp @ 0x1403E1190
 * Callers:
 *     HalGetEnvironmentVariable @ 0x140508580 (HalGetEnvironmentVariable.c)
 *     HalSetEnvironmentVariable @ 0x140508720 (HalSetEnvironmentVariable.c)
 *     sub_140A7BE54 @ 0x140A7BE54 (sub_140A7BE54.c)
 *     sub_140A82B0C @ 0x140A82B0C (sub_140A82B0C.c)
 *     sub_140AA8D9C @ 0x140AA8D9C (sub_140AA8D9C.c)
 *     sub_140B0D470 @ 0x140B0D470 (sub_140B0D470.c)
 *     sub_140B1789C @ 0x140B1789C (sub_140B1789C.c)
 *     sub_140B18FFC @ 0x140B18FFC (sub_140B18FFC.c)
 * Callees:
 *     sub_1403E113C @ 0x1403E113C (sub_1403E113C.c)
 */

int __cdecl stricmp(const char *Str1, const char *Str2)
{
  return sub_1403E113C((unsigned __int8 *)Str1, (unsigned __int8 *)Str2);
}
