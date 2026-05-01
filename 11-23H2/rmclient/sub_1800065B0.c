/*
 * XREFs of sub_1800065B0 @ 0x1800065B0
 * Callers:
 *     sub_1800128FC @ 0x1800128FC (sub_1800128FC.c)
 *     sub_180012CD4 @ 0x180012CD4 (sub_180012CD4.c)
 *     sub_180014FB0 @ 0x180014FB0 (sub_180014FB0.c)
 *     sub_18001599C @ 0x18001599C (sub_18001599C.c)
 *     CreateActivityCoordinatorPolicy @ 0x180015E90 (CreateActivityCoordinatorPolicy.c)
 *     sub_1800161E4 @ 0x1800161E4 (sub_1800161E4.c)
 *     RmConnectProcessManager @ 0x18001C300 (RmConnectProcessManager.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_1800065B0(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
