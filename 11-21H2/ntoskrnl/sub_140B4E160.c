/*
 * XREFs of sub_140B4E160 @ 0x140B4E160
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_1402A03B0 @ 0x1402A03B0 (sub_1402A03B0.c)
 */

__int64 sub_140B4E160()
{
  return sub_1402A03B0(
           &stru_140CE1C40,
           Allocate,
           (__int64 (__fastcall *)(ULONG_PTR))SeFreePrivileges,
           1,
           0,
           0x138uLL,
           1651199299,
           0,
           0);
}
