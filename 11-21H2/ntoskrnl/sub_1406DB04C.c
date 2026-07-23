/*
 * XREFs of sub_1406DB04C @ 0x1406DB04C
 * Callers:
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_1408104FC @ 0x1408104FC (sub_1408104FC.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     SeSetSecurityDescriptorInfo @ 0x1407258E0 (SeSetSecurityDescriptorInfo.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406DB04C(__int64 a1, DWORD *a2, void *a3, POOL_TYPE a4, PGENERIC_MAPPING a5)
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
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(&Resource, 1u);
    v11 = *(volatile signed __int64 **)(a1 + 272);
    if ( v11 && _InterlockedExchangeAdd64(v11 - 3, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite(&Resource);
    sub_1402F9540((__int64)CurrentThread);
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v11;
    v12 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, a4, GenericMapping);
    if ( v12 < 0 )
      break;
    v12 = ObLogSecurityDescriptor(ObjectsSecurityDescriptor);
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
    if ( v12 < 0 )
      goto LABEL_13;
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(&Resource, 1u);
    if ( *(volatile signed __int64 **)(a1 + 272) == v11 )
    {
      *(_QWORD *)(a1 + 272) = 0LL;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~0x800u;
      ExReleaseResourceLite(&Resource);
      sub_1402F9540((__int64)CurrentThread);
      v13 = 2LL;
LABEL_9:
      ObDereferenceSecurityDescriptor(v11, v13);
      return (unsigned int)v12;
    }
    ExReleaseResourceLite(&Resource);
    sub_1402F9540((__int64)CurrentThread);
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
