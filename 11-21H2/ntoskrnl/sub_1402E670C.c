/*
 * XREFs of sub_1402E670C @ 0x1402E670C
 * Callers:
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_14025868C @ 0x14025868C (sub_14025868C.c)
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 *     sub_14027A1F0 @ 0x14027A1F0 (sub_14027A1F0.c)
 *     sub_1402E4474 @ 0x1402E4474 (sub_1402E4474.c)
 *     sub_1402E57FC @ 0x1402E57FC (sub_1402E57FC.c)
 *     sub_1402E599C @ 0x1402E599C (sub_1402E599C.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     MmPrefetchVirtualAddresses @ 0x1406EBFB0 (MmPrefetchVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     sub_14033D720 @ 0x14033D720 (sub_14033D720.c)
 */

__int64 __fastcall sub_1402E670C(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1384);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return sub_14033D720(a1);
}
