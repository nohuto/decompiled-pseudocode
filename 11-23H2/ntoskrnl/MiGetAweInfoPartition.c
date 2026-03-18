/*
 * XREFs of MiGetAweInfoPartition @ 0x14064A858
 * Callers:
 *     MiFreePhysicalPageChain @ 0x14064A170 (MiFreePhysicalPageChain.c)
 *     MiGetAweVadPartition @ 0x14064A960 (MiGetAweVadPartition.c)
 *     MiAllocateAweInfo @ 0x140A4002C (MiAllocateAweInfo.c)
 *     MiAllocateFastAwePages @ 0x140A401A4 (MiAllocateFastAwePages.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40358 (MiAllocateUserPhysicalPages.c)
 *     MiCreateAweInfoBitMap @ 0x140A41540 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140A41778 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x140A41A90 (MiDeleteAweInfoPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A42320 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweInfoPartition(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
    return *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  else
    return *(_QWORD *)(qword_140C673C8 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
}
