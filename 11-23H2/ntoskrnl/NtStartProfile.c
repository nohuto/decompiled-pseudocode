/*
 * XREFs of NtStartProfile @ 0x140A048B0
 * Callers:
 *     <none>
 * Callees:
 *     MmSizeOfMdl @ 0x140206EA0 (MmSizeOfMdl.c)
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     KeStartProfile @ 0x14057441C (KeStartProfile.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     KeInitializeProfile @ 0x1409750A4 (KeInitializeProfile.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtStartProfile(HANDLE ProfileHandle)
{
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  _QWORD *v3; // rbx
  NTSTATUS started; // edi
  SIZE_T v5; // rax
  __int64 Pool2; // rax
  void *v7; // rsi
  struct _MDL *v8; // r15
  __int64 v9; // r10
  __int64 v10; // r8
  PVOID v11; // r14
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  PVOID P; // [rsp+90h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ProfileHandle, 1u, ExProfileObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&ExpProfileStateMutex, Executive, 0, 0, 0LL);
    v3 = Object;
    if ( *((_QWORD *)Object + 6) )
    {
      started = -1073741640;
LABEL_8:
      KeReleaseMutex(&ExpProfileStateMutex, 0);
LABEL_9:
      ObfDereferenceObject(v3);
      return started;
    }
    if ( ExpCurrentProfileUsage == KeQueryActiveProcessorCountEx(0xFFFFu) << 13 )
    {
      started = -1073741613;
      goto LABEL_8;
    }
    v5 = MmSizeOfMdl((PVOID)v3[3], *((unsigned int *)v3 + 8));
    Pool2 = ExAllocatePool2(64LL, v5 + 616, 1718579792LL);
    v7 = (void *)Pool2;
    P = (PVOID)Pool2;
    if ( !Pool2 )
    {
      started = -1073741670;
      goto LABEL_8;
    }
    v8 = (struct _MDL *)(Pool2 + 616);
    v3[7] = Pool2 + 616;
    v3[5] = Pool2;
    v9 = *((unsigned int *)v3 + 8);
    v10 = v3[3];
    *(_QWORD *)(Pool2 + 616) = 0LL;
    *(_WORD *)(Pool2 + 624) = 8 * ((((unsigned __int64)(v10 & 0xFFF) + v9 + 4095) >> 12) + 6);
    *(_WORD *)(Pool2 + 626) = 0;
    *(_QWORD *)(Pool2 + 648) = v10 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(Pool2 + 660) = v10 & 0xFFF;
    *(_DWORD *)(Pool2 + 656) = v9;
    MmProbeAndLockPages((PMDL)(Pool2 + 616), PreviousMode, IoWriteAccess);
    v11 = MmMapLockedPagesSpecifyCache((PMDL)v3[7], 0, MmCached, 0LL, 0, 0x40000010u);
    if ( !v11 )
    {
      started = -1073741670;
LABEL_13:
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      MmUnlockPages(v8);
      ExFreePoolWithTag(v7, 0);
      goto LABEL_9;
    }
    KeInitializeProfile(
      (__int64)v7,
      *v3,
      (__int64)v11,
      v3[1],
      v3[2],
      *((_DWORD *)v3 + 9),
      *((_DWORD *)v3 + 16),
      *((_DWORD *)v3 + 17),
      (unsigned __int16 *)v3 + 36);
    started = KeStartProfile((ULONG_PTR)v7);
    if ( started < 0 )
      goto LABEL_13;
    v3[6] = v11;
    ++ExpCurrentProfileUsage;
    KeReleaseMutex(&ExpProfileStateMutex, 0);
    ObfDereferenceObject(v3);
    return 0;
  }
  return result;
}
