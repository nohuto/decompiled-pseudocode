/*
 * XREFs of sub_14071E8F0 @ 0x14071E8F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A4000 @ 0x1402A4000 (sub_1402A4000.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140675814 @ 0x140675814 (sub_140675814.c)
 *     sub_1406DB04C @ 0x1406DB04C (sub_1406DB04C.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1407213B0 (SeQuerySecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     sub_1408104FC @ 0x1408104FC (sub_1408104FC.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     sub_1409C6C98 @ 0x1409C6C98 (sub_1409C6C98.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14071E8F0(
        struct _FILE_OBJECT *Object,
        int a2,
        DWORD *a3,
        UNICODE_STRING *a4,
        PULONG Length,
        int a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8,
        char a9)
{
  _QWORD *p_Type; // r14
  struct _FILE_OBJECT *v13; // rbx
  struct _KTHREAD *v14; // r14
  unsigned __int8 v15; // di
  ULONG Flags; // eax
  bool v17; // r15
  struct _KTHREAD *v18; // rax
  __int64 v19; // r9
  unsigned int FinalStatus; // edi
  char v21; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v23; // rax
  IRP *v24; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG *v27; // rax
  PULONG v28; // r14
  struct _KTHREAD *v29; // rax
  NTSTATUS v30; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v33; // rdi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  ULONG *v35; // r8
  DWORD *v36; // rcx
  _DWORD *v37; // rax
  void *v38; // rbx
  struct _KTHREAD *v39; // rdi
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  __int64 v41; // [rsp+40h] [rbp-58h]
  __int128 v42; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+8h] BYREF
  DWORD *v45; // [rsp+B0h] [rbp+18h]

  v45 = a3;
  v41 = 0LL;
  if ( Object->Type == 3 )
    p_Type = &Object->Type;
  else
    p_Type = &Object->DeviceObject->Type;
  v13 = 0LL;
  if ( Object->Type != 3 )
    v13 = Object;
  if ( !v13 || !v13->FileName.Length && !v13->RelatedFileObject || (v13->Flags & 0x800) != 0 )
  {
    switch ( a2 )
    {
      case 3:
        FinalStatus = 0;
        if ( !v13 || (v13->Flags & 0x100) == 0 )
        {
          FinalStatus = ObLogSecurityDescriptor(a4);
          if ( (FinalStatus & 0x80000000) == 0 )
          {
            ExFreePoolWithTag(a4, 0);
            CurrentThread = KeGetCurrentThread();
            --*((_WORD *)CurrentThread + 242);
            ExAcquireResourceExclusiveLite(&Resource, 1u);
            if ( p_Type[34] )
              *(_DWORD *)(p_Type[39] + 32LL) &= ~0x800u;
            p_Type[34] = v41;
            ExReleaseResourceLite(&Resource);
            sub_1402F9540((__int64)CurrentThread);
          }
        }
        return FinalStatus;
      case 0:
        v37 = sub_1402A4000((__int64)p_Type);
        v38 = v37;
        if ( v37 )
        {
          FinalStatus = sub_1408104FC(p_Type, v37, a3, a4, a7, a8);
          ObfDereferenceObject(v38);
        }
        else
        {
          FinalStatus = sub_1406DB04C((__int64)p_Type, a3, a4, a7, a8);
        }
        sub_140675814((__int64)p_Type);
        return FinalStatus;
      case 1:
        v33 = KeGetCurrentThread();
        --*((_WORD *)v33 + 242);
        ExAcquireResourceSharedLite(&Resource, 1u);
        SecurityDescriptor = (PSECURITY_DESCRIPTOR)p_Type[34];
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor
          && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&Resource);
        sub_1402F9540((__int64)v33);
        v35 = Length;
        v36 = a3;
        goto LABEL_51;
    }
    return 0;
  }
  if ( a2 == 2 )
    return 0;
  v42 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = KeGetCurrentThread();
  v15 = *((_BYTE *)v14 + 562);
  ObfReferenceObject(v13);
  Flags = v13->Flags;
  if ( (Flags & 2) != 0 )
  {
    v17 = (Flags & 4) != 0;
    v18 = KeGetCurrentThread();
    --*((_WORD *)v18 + 242);
    v19 = sub_140347C10((__int64)&v13->Lock, 0LL);
    LOBYTE(v44) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v13->Busy, 1) )
    {
      FinalStatus = sub_140709FAC((volatile signed __int32 *)&v13->Type, v15, v17, v19, &v44);
    }
    else
    {
      if ( v19 )
        *(_BYTE *)(v19 + 18) = 1;
      ObfReferenceObject(v13);
      FinalStatus = 0;
    }
    if ( (_BYTE)v44 )
    {
      ObfDereferenceObject(v13);
      return FinalStatus;
    }
    v21 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v21 = 0;
  }
  if ( (v13->Flags & 0x4000000) == 0 )
    KeResetEvent(&v13->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v13);
  v23 = sub_1402AACA0(
          (__int64)RelatedDeviceObject,
          (unsigned __int8)RelatedDeviceObject->StackSize,
          (unsigned __int8)v21 ^ 1u);
  v24 = (IRP *)v23;
  if ( v23 )
  {
    *(_QWORD *)(v23 + 192) = v13;
    *(_QWORD *)(v23 + 152) = v14;
    *(_BYTE *)(v23 + 64) = a9;
    if ( (v13->Flags & 2) != 0 )
    {
      *(_BYTE *)(v23 + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(v23 + 16) = 4;
      p_Event = &Event;
    }
    v24->UserEvent = p_Event;
    v24->UserIosb = (PIO_STATUS_BLOCK)&v42;
    v24->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v24->Tail.Overlay.CurrentStackLocation;
    v27 = v45;
    v28 = Length;
    if ( a2 == 1 )
    {
      CurrentStackLocation[-1].MajorFunction = 20;
      CurrentStackLocation[-1].Parameters.Read.Length = *v27;
      CurrentStackLocation[-1].Parameters.Create.Options = *v28;
      v24->UserBuffer = a4;
    }
    else
    {
      CurrentStackLocation[-1].MajorFunction = 21;
      CurrentStackLocation[-1].Parameters.Read.Length = *v27;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a4;
    }
    CurrentStackLocation[-1].FileObject = v13;
    sub_1402AE1B0((__int64)v24);
    v29 = KeGetCurrentThread();
    ++*((_QWORD *)v29 + 114);
    __incgsdword(0x2EE4u);
    v30 = IofCallDriver(RelatedDeviceObject, v24);
    FinalStatus = v30;
    if ( v21 )
    {
      if ( v30 == 259 )
      {
        KeWaitForSingleObject(&v13->Event, Executive, 0, 0, 0LL);
        FinalStatus = v13->FinalStatus;
      }
      sub_1402AD350((volatile __int32 *)&v13->Type);
    }
    else if ( v30 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v42;
    }
    if ( FinalStatus != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( FinalStatus == -2147483643 )
          FinalStatus = -1073741789;
        *v28 = DWORD2(v42);
      }
      return FinalStatus;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) != 0 )
      {
        v39 = KeGetCurrentThread();
        --*((_WORD *)v39 + 242);
        ExAcquireResourceSharedLite(&Resource, 1u);
        SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor
          && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&Resource);
        sub_1402F9540((__int64)v39);
        v35 = v28;
        v36 = v45;
LABEL_51:
        FinalStatus = SeQuerySecurityDescriptorInfo(v36, a4, v35, &ObjectsSecurityDescriptor);
        if ( SecurityDescriptor )
          ObDereferenceSecurityDescriptor(ObjectsSecurityDescriptor, 1LL);
        return FinalStatus;
      }
      return (unsigned int)sub_1409C6C98(a4, v28, v45);
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  sub_140933BA4(v13, 0LL);
  return 3221225626LL;
}
