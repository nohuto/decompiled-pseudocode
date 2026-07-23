/*
 * XREFs of sub_140935320 @ 0x140935320
 * Callers:
 *     NtSetQuotaInformationFile @ 0x14093A0A0 (NtSetQuotaInformationFile.c)
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     sub_1403198A0 @ 0x1403198A0 (sub_1403198A0.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_1406BF8BC @ 0x1406BF8BC (sub_1406BF8BC.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     IoCheckQuotaBufferValidity @ 0x1409360F0 (IoCheckQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

signed int __fastcall sub_140935320(void *a1, unsigned __int64 a2, char *a3, ULONG a4, char a5)
{
  size_t v5; // rbx
  struct _KEVENT *v9; // r15
  KPROCESSOR_MODE v10; // si
  __int64 v11; // rcx
  signed int result; // eax
  struct _FILE_OBJECT *v13; // r14
  bool v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ebx
  struct _KEVENT *Pool2; // rax
  __int64 v22; // rdx
  IRP *v23; // rax
  IRP *Irp; // rsi
  char v25; // di
  struct _IO_STATUS_BLOCK *v26; // rax
  struct _KEVENT *v27; // rcx
  __int64 v28; // rax
  ULONG Flags; // ecx
  _FILE_QUOTA_INFORMATION *v30; // rdi
  int v31; // eax
  PMDL Mdl; // rcx
  char v33; // bl
  char v34; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  _DWORD *v37; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+60h] [rbp-58h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v40; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v42; // [rsp+80h] [rbp-38h] BYREF

  v5 = a4;
  Object = 0LL;
  v9 = 0LL;
  P = 0LL;
  v42 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = *((_BYTE *)CurrentThread + 562);
  v34 = v10;
  if ( v10 )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v11 = a2;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a4] > 0x7FFFFFFF0000LL || &a3[a4] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = sub_1402AC790(a1, 2u, v10, &Object, 0LL);
  if ( result >= 0 )
  {
    v13 = (struct _FILE_OBJECT *)Object;
    v37 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v14 = (*((_DWORD *)Object + 20) & 4) != 0;
      v15 = KeGetCurrentThread();
      --*((_WORD *)v15 + 242);
      v16 = (volatile __int32 *)Object;
      v17 = sub_140347C10((__int64)Object + 128, 0LL);
      a5 = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        LOBYTE(v19) = v14;
        LOBYTE(v18) = v10;
        v13 = (struct _FILE_OBJECT *)Object;
        v20 = sub_140709FAC((volatile signed __int32 *)Object, v18, v19, v17, &a5);
      }
      else
      {
        if ( v17 )
          *(_BYTE *)(v17 + 18) = 1;
        v13 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v20 = 0;
      }
      if ( !a5 )
      {
        a5 = 1;
        v5 = a4;
        goto LABEL_22;
      }
    }
    else
    {
      Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 538996553LL);
      v9 = Pool2;
      P = Pool2;
      if ( Pool2 )
      {
        KeInitializeEvent(Pool2, SynchronizationEvent, 0);
        a5 = 0;
LABEL_22:
        sub_1402AABB0((__int64)v13);
        DeviceObject = IoGetRelatedDeviceObject(v13);
        LOBYTE(v22) = DeviceObject->StackSize;
        v23 = (IRP *)sub_1402AACA0((__int64)DeviceObject, v22, 0LL);
        Irp = v23;
        v40 = v23;
        if ( !v23 )
        {
          if ( (*v37 & 2) == 0 )
            ExFreePoolWithTag(v9, 0);
          sub_140933BA4((volatile __int32 *)&v13->Type, 0LL);
          return -1073741670;
        }
        v23->Tail.Overlay.OriginalFileObject = v13;
        v23->Tail.Overlay.Thread = CurrentThread;
        v25 = v34;
        v23->RequestorMode = v34;
        if ( a5 )
        {
          v23->AllocationFlags |= 2u;
          v26 = (struct _IO_STATUS_BLOCK *)a2;
          v27 = 0LL;
        }
        else
        {
          v23->Flags = 4;
          v26 = (struct _IO_STATUS_BLOCK *)&v42;
          v27 = v9;
        }
        Irp->UserEvent = v27;
        Irp->UserIosb = v26;
        Irp->Overlay.AllocationSize.QuadPart = 0LL;
        v28 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
        v37 = (_DWORD *)v28;
        *(_BYTE *)v28 = 26;
        *(_QWORD *)(v28 + 48) = v13;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          ErrorOffset = 0;
          if ( (_DWORD)v5 )
          {
            v30 = (_FILE_QUOTA_INFORMATION *)ExAllocatePool2(97LL, v5, 1112764233LL);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v30;
            memmove(v30, a3, v5);
            LODWORD(v5) = a4;
            v31 = IoCheckQuotaBufferValidity(v30, a4, &ErrorOffset);
            if ( v31 < 0 )
            {
              *(_DWORD *)a2 = v31;
              *(_QWORD *)(a2 + 8) = ErrorOffset;
              RtlRaiseStatus(v31);
            }
            Irp->Flags |= 0x30u;
            v25 = v34;
            v28 = (__int64)v37;
            goto LABEL_39;
          }
          Irp->AssociatedIrp.MasterIrp = 0LL;
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( (_DWORD)v5 )
          {
            Mdl = IoAllocateMdl(a3, v5, 0, 1u, Irp);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            sub_1403198A0(Mdl, v34, 0, (__int64)DeviceObject, *(unsigned __int8 *)v37);
            v28 = (__int64)v37;
          }
          goto LABEL_39;
        }
        Irp->UserBuffer = a3;
LABEL_39:
        *(_DWORD *)(v28 + 8) = v5;
        v33 = a5;
        result = sub_140731680(DeviceObject, Irp, v13, 0, v25, a5, 2u);
        if ( !v33 )
          return sub_1406BF8BC(result, v9, Irp, v25, (unsigned int *)&v42, (_OWORD *)a2);
        return result;
      }
      v20 = -1073741670;
    }
    ObfDereferenceObject(v13);
    return v20;
  }
  return result;
}
