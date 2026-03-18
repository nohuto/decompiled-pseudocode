/*
 * XREFs of MmUnsecureVirtualMemory @ 0x1406B0260
 * Callers:
 *     RtlFileMapFree @ 0x1402F7C50 (RtlFileMapFree.c)
 *     DifMmUnsecureVirtualMemoryWrapper @ 0x1405E7D00 (DifMmUnsecureVirtualMemoryWrapper.c)
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A268 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A858 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x14071ECE0 (AlpcViewDestroyProcedure.c)
 *     WbFreeMemoryBlock @ 0x1407644EC (WbFreeMemoryBlock.c)
 *     AlpcpRestoreWriteAccess @ 0x1407C2F10 (AlpcpRestoreWriteAccess.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409794DC (AlpcpForceUnlinkSecureView.c)
 *     VmUnsecureBackingMemory @ 0x1409DCD20 (VmUnsecureBackingMemory.c)
 *     VmpLockMemoryForPin @ 0x1409DD208 (VmpLockMemoryForPin.c)
 *     VmpUnlockMemoryForPin @ 0x1409DD7E0 (VmpUnlockMemoryForPin.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A45B60 (MmStoreAllocateVirtualMemory.c)
 *     AslpFilePartialViewFree @ 0x140A59D18 (AslpFilePartialViewFree.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x1402159D4 (MiObtainReferencedSecureVad.c)
 *     MiRemoveSecureEntry @ 0x1402172F0 (MiRemoveSecureEntry.c)
 *     MiUnlockAndDereferenceVad @ 0x140274A90 (MiUnlockAndDereferenceVad.c)
 */

void __stdcall MmUnsecureVirtualMemory(HANDLE SecureHandle)
{
  _QWORD *v1; // rbx
  ULONG_PTR v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  char *v5; // rdi
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v1 = (_QWORD *)((unsigned __int64)SecureHandle ^ qword_140C65A40 ^ (__int64)KeGetCurrentThread()->ApcState.Process);
  v2 = MiObtainReferencedSecureVad((ULONG_PTR)v1, &v6);
  v5 = (char *)v2;
  if ( v2 )
  {
    MiRemoveSecureEntry(v2, v1, v3, v4);
    MiUnlockAndDereferenceVad(v5);
  }
}
