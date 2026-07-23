/*
 * XREFs of sub_14057F4C8 @ 0x14057F4C8
 * Callers:
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_1405C0828 @ 0x1405C0828 (sub_1405C0828.c)
 *     sub_1405C14D4 @ 0x1405C14D4 (sub_1405C14D4.c)
 *     sub_1405C2A4C @ 0x1405C2A4C (sub_1405C2A4C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14057F4C8(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (v1 >> 12) & 0x7F;
  if ( v2 )
    return (unsigned int)(v2 - 1);
  if ( (v1 & 0x200000) == 0 && (v2 = (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) >> 20) & 0x7F) != 0 )
    return (unsigned int)(v2 - 1);
  else
    return *(unsigned int *)(qword_140D088C0[*((unsigned int *)KeGetCurrentThread() + 147)] + 33364);
}
