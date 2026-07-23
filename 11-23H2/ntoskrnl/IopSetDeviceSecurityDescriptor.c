/*
 * XREFs of IopSetDeviceSecurityDescriptor @ 0x14069E6A4
 * Callers:
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptors @ 0x14069E604 (IopSetDeviceSecurityDescriptors.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 *     SeSetSecurityDescriptorInfo @ 0x14069E810 (SeSetSecurityDescriptorInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x140728C50 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140728EC0 (ObLogSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptor(__int64 a1, DWORD *a2, void *a3, POOL_TYPE a4, PGENERIC_MAPPING a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  GENERIC_MAPPING *GenericMapping; // r13
  volatile signed __int64 *v11; // rbx
  NTSTATUS v12; // ebp
  __int64 v13; // rdx
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+70h] [rbp+8h] BYREF

  ObjectsSecurityDescriptor = 0LL;
  CurrentThread = KeGetCurrentThread();
  GenericMapping = a5;
  while ( 1 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
    v11 = *(volatile signed __int64 **)(a1 + 272);
    if ( v11 && _InterlockedExchangeAdd64(v11 - 3, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite(&IopSecurityResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v11;
    v12 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, a4, GenericMapping);
    if ( v12 < 0 )
      break;
    v12 = ObLogSecurityDescriptor(ObjectsSecurityDescriptor);
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
    if ( v12 < 0 )
      goto LABEL_13;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
    if ( *(volatile signed __int64 **)(a1 + 272) == v11 )
    {
      *(_QWORD *)(a1 + 272) = 0LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~0x800u;
      ExReleaseResourceLite(&IopSecurityResource);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v13 = 2LL;
LABEL_9:
      ObDereferenceSecurityDescriptor(v11, v13);
      return (unsigned int)v12;
    }
    ExReleaseResourceLite(&IopSecurityResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ObDereferenceSecurityDescriptor(v11, 1LL);
    ObDereferenceSecurityDescriptor(0LL, 1LL);
  }
  if ( v11 )
  {
LABEL_13:
    v13 = 1LL;
    goto LABEL_9;
  }
  return (unsigned int)v12;
}
