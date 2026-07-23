/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x1406C66B0
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1406C6650 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     sub_1402AAB50 @ 0x1402AAB50 (sub_1402AAB50.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14055A55C @ 0x14055A55C (sub_14055A55C.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtNotifyChangeDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass)
{
  PVOID v12; // r14
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE v14; // r15
  __int64 v15; // rcx
  ULONG v16; // r12d
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v18; // rbx
  int v19; // edi
  struct _KTHREAD *v20; // rax
  volatile __int32 *v21; // rbx
  __int64 v22; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  IRP *v27; // rdi
  __int64 v28; // rsi
  DIRECTORY_NOTIFY_INFORMATION_CLASS v29; // ecx
  ULONG Flags; // eax
  __int64 Pool2; // rax
  PMDL Mdl; // rcx
  __int64 v33; // r8
  char v34; // al
  char v35[8]; // [rsp+40h] [rbp-48h] BYREF
  PVOID v36; // [rsp+48h] [rbp-40h] BYREF
  PVOID v37; // [rsp+50h] [rbp-38h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  PIO_APC_ROUTINE v39; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v40; // [rsp+A8h] [rbp+20h]

  v40 = ApcContext;
  v39 = ApcRoutine;
  v36 = 0LL;
  v12 = 0LL;
  v37 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v14 = *((_BYTE *)CurrentThread + 562);
  if ( v14 )
  {
    v15 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = Length;
    if ( Length )
      ProbeForWrite(Buffer, Length, 4u);
    if ( (CompletionFilter & 0xFFFFF000) != 0 || !CompletionFilter )
      return -1073741811;
  }
  else
  {
    v16 = Length;
  }
  result = sub_1402AC790(FileHandle, 1u, v14, &v36, 0LL);
  if ( result >= 0 )
  {
    v18 = (struct _FILE_OBJECT *)v36;
    if ( *((_QWORD *)v36 + 22) && ((unsigned __int64)v39 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v19 = -1073741811;
LABEL_26:
      ObfDereferenceObject(v18);
      return v19;
    }
    if ( Event )
    {
      Object = 0LL;
      v19 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, v14, &Object, 0LL);
      v12 = Object;
      v37 = Object;
      if ( v19 < 0 )
        goto LABEL_26;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (v18->Flags & 2) != 0 )
    {
      v20 = KeGetCurrentThread();
      --*((_WORD *)v20 + 242);
      v21 = (volatile __int32 *)v36;
      v22 = sub_140347C10((__int64)v36 + 128, 0LL);
      v35[0] = 0;
      if ( _InterlockedExchange(v21 + 29, 1) )
      {
        v18 = (struct _FILE_OBJECT *)v36;
        v19 = sub_140709FAC(v36, (__int64)v35);
      }
      else
      {
        if ( v22 )
          *(_BYTE *)(v22 + 18) = 1;
        v18 = (struct _FILE_OBJECT *)v36;
        ObfReferenceObject(v36);
        v19 = 0;
      }
      if ( v35[0] )
      {
        if ( v12 )
          ObfDereferenceObject(v12);
        goto LABEL_26;
      }
      v35[0] = 1;
    }
    else
    {
      v35[0] = 0;
      if ( v14 )
        sub_1402AAB50((unsigned int **)&IoStatusBlock, (__int64 *)&v39, 0);
    }
    sub_1402AABB0((__int64)v18);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v18);
    LOBYTE(v24) = v35[0] ^ 1;
    LOBYTE(v25) = RelatedDeviceObject->StackSize;
    v26 = sub_1402AACA0((__int64)RelatedDeviceObject, v25, v24);
    v27 = (IRP *)v26;
    Object = (PVOID)v26;
    if ( !v26 )
    {
      sub_140933BA4(v18, v12);
      return -1073741670;
    }
    *(_QWORD *)(v26 + 192) = v18;
    *(_QWORD *)(v26 + 152) = CurrentThread;
    *(_BYTE *)(v26 + 64) = v14;
    *(_QWORD *)(v26 + 80) = v12;
    *(_QWORD *)(v26 + 72) = IoStatusBlock;
    *(_QWORD *)(v26 + 88) = v39;
    *(_QWORD *)(v26 + 96) = v40;
    v28 = *(_QWORD *)(v26 + 184);
    *(_BYTE *)(v28 - 72) = 12;
    v29 = DirectoryNotifyInformationClass;
    *(_BYTE *)(v28 - 71) = (DirectoryNotifyInformationClass == DirectoryNotifyExtendedInformation) + 2;
    *(_QWORD *)(v28 - 24) = v18;
    if ( !v16 )
      goto LABEL_42;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      Pool2 = ExAllocatePool2(65LL, v16, 1112764233LL);
      v27->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
      if ( !Pool2 )
      {
        sub_140658670((volatile __int32 *)&v18->Type, v27, v12, 0LL, (v18->Flags & 2) != 0);
        return -1073741670;
      }
      v27->Flags = 112;
      v29 = DirectoryNotifyInformationClass;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v16, 0, 1u, v27);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      sub_14055A55C(Mdl, v14, v33, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v28 - 72));
      v29 = DirectoryNotifyInformationClass;
      goto LABEL_42;
    }
    v27->UserBuffer = Buffer;
LABEL_42:
    *(_DWORD *)(v28 - 64) = v16;
    *(_DWORD *)(v28 - 56) = CompletionFilter;
    if ( *(_BYTE *)(v28 - 71) == 3 )
      *(_DWORD *)(v28 - 48) = v29;
    *(_BYTE *)(v28 - 70) = 0;
    v34 = *(_BYTE *)(v28 - 70);
    if ( WatchTree )
      v34 = 1;
    *(_BYTE *)(v28 - 70) = v34;
    return sub_140731680(RelatedDeviceObject, v27, v14, v35[0], 2);
  }
  return result;
}
