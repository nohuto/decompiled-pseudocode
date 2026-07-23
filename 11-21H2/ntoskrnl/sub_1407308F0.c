/*
 * XREFs of sub_1407308F0 @ 0x1407308F0
 * Callers:
 *     sub_1406AE644 @ 0x1406AE644 (sub_1406AE644.c)
 *     sub_1406AEA14 @ 0x1406AEA14 (sub_1406AEA14.c)
 *     NtFsControlFile @ 0x1406B02C0 (NtFsControlFile.c)
 *     NtDeviceIoControlFile @ 0x140730880 (NtDeviceIoControlFile.c)
 *     sub_1407DE480 @ 0x1407DE480 (sub_1407DE480.c)
 *     sub_1407E0048 @ 0x1407E0048 (sub_1407E0048.c)
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_1402A34C8 @ 0x1402A34C8 (sub_1402A34C8.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     sub_1402AAB50 @ 0x1402AAB50 (sub_1402AAB50.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC790 @ 0x1402AC790 (sub_1402AC790.c)
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     sub_1403198A0 @ 0x1403198A0 (sub_1403198A0.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140417880 @ 0x140417880 (sub_140417880.c)
 *     sub_1404178E8 @ 0x1404178E8 (sub_1404178E8.c)
 *     sub_1404179B0 @ 0x1404179B0 (sub_1404179B0.c)
 *     sub_140417A7C @ 0x140417A7C (sub_140417A7C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_140659D84 @ 0x140659D84 (sub_140659D84.c)
 *     sub_14066119C @ 0x14066119C (sub_14066119C.c)
 *     sub_1406E8D8C @ 0x1406E8D8C (sub_1406E8D8C.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     SeCaptureSubjectContextEx @ 0x14072A390 (SeCaptureSubjectContextEx.c)
 *     sub_1407305B0 @ 0x1407305B0 (sub_1407305B0.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     IoSetIoCompletion @ 0x1407D55B0 (IoSetIoCompletion.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 */

NTSTATUS sub_1407308F0(void *a1, void *a2, __int64 a3, void *a4, unsigned __int64 a5, int a6, char *Src, ...)
{
  int v8; // r13d
  __int64 v9; // r14
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // r15
  KPROCESSOR_MODE v12; // si
  __int64 v13; // rdx
  char v14; // bl
  char v15; // al
  char v16; // bl
  __int64 v17; // rcx
  unsigned int v18; // r12d
  unsigned int v19; // r15d
  NTSTATUS result; // eax
  int v21; // ebx
  struct _FILE_OBJECT *v22; // rdi
  struct _KPROCESS *ThreadProcess; // rax
  int v24; // eax
  ULONG *p_Flags; // rbx
  bool v26; // si
  struct _KTHREAD *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // ebx
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v32; // rbx
  __int64 v33; // rdx
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  char *v35; // rcx
  __int64 v36; // rbx
  char v37; // si
  _DWORD *v38; // rcx
  int v39; // r9d
  PVOID v40; // rbx
  int v41; // eax
  int v42; // ecx
  IRP *v43; // rax
  IRP *Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char v46; // r8
  int v47; // ebx
  __int64 v48; // rcx
  struct _IRP *v49; // rax
  PMDL Mdl; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  struct _IRP *Pool2; // rax
  _DWORD *p_ThreadListEntry; // rax
  unsigned __int8 v55; // [rsp+50h] [rbp-E8h]
  char v56; // [rsp+51h] [rbp-E7h]
  char IsSandboxedToken; // [rsp+52h] [rbp-E6h]
  char v58; // [rsp+53h] [rbp-E5h]
  _DWORD Object[3]; // [rsp+54h] [rbp-E4h] BYREF
  unsigned int v60; // [rsp+60h] [rbp-D8h]
  PVOID v61; // [rsp+68h] [rbp-D0h]
  int v62; // [rsp+70h] [rbp-C8h]
  PVOID P; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v64; // [rsp+80h] [rbp-B8h]
  PVOID v65; // [rsp+90h] [rbp-A8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-A0h]
  PIRP FastIoDeviceControl; // [rsp+A0h] [rbp-98h]
  int v68; // [rsp+A8h] [rbp-90h]
  __int64 v69; // [rsp+B0h] [rbp-88h] BYREF
  PETHREAD Thread; // [rsp+B8h] [rbp-80h]
  struct _OBJECT_HANDLE_INFORMATION v71; // [rsp+C0h] [rbp-78h] BYREF
  PVOID v72; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v73; // [rsp+D0h] [rbp-68h] BYREF
  ULONG *v74; // [rsp+D8h] [rbp-60h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v77; // [rsp+150h] [rbp+18h] BYREF
  void *v78; // [rsp+158h] [rbp+20h]
  size_t Size; // [rsp+178h] [rbp+40h] BYREF
  va_list Sizea; // [rsp+178h] [rbp+40h]
  char *Address; // [rsp+180h] [rbp+48h]
  SIZE_T Length; // [rsp+188h] [rbp+50h]
  __int64 v83; // [rsp+190h] [rbp+58h]
  va_list va1; // [rsp+198h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(Sizea, Src);
  Size = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v83 = va_arg(va1, _QWORD);
  v78 = a4;
  v77 = a3;
  v8 = a6;
  v68 = a6;
  v9 = 0LL;
  *(_QWORD *)&Object[1] = 0LL;
  v61 = 0LL;
  v71 = 0LL;
  v64 = 0LL;
  v10 = a6 & 3;
  v60 = v10;
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  v12 = *((_BYTE *)CurrentThread + 562);
  v55 = v12;
  if ( (unsigned int)sub_140417880() )
  {
    if ( !v12 )
    {
LABEL_26:
      v18 = Length;
      v19 = Size;
      goto LABEL_27;
    }
    if ( !(_BYTE)v83 && !sub_140417A7C(v8) )
    {
      v13 = *((_QWORD *)CurrentThread + 23);
      v14 = *(_DWORD *)(v13 + 2928);
      v15 = v14 & 4;
      v16 = v14 & 2;
      if ( v16 || v15 )
      {
        sub_140659D84((v16 != 0) + 1, v13);
        if ( v16 )
          return -1073741790;
      }
      v10 = v60;
    }
  }
  if ( !v12 )
    goto LABEL_26;
  v17 = a5;
  if ( a5 >= 0x7FFFFFFF0000LL )
    v17 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v17 = *(_DWORD *)v17;
  if ( v10 )
  {
    v18 = Length;
  }
  else if ( Address )
  {
    v18 = Length;
    ProbeForWrite(Address, (unsigned int)Length, 1u);
  }
  else
  {
    v18 = 0;
    LODWORD(Length) = 0;
  }
  if ( v10 == 3 )
  {
    v19 = Size;
  }
  else if ( Src )
  {
    v19 = Size;
    if ( (_DWORD)Size
      && ((unsigned __int64)&Src[(unsigned int)Size] > 0x7FFFFFFF0000LL || &Src[(unsigned int)Size] < Src) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v19 = 0;
    LODWORD(Size) = 0;
  }
LABEL_27:
  result = sub_1402AC790(a1, 0, v12, (PVOID *)&Object[1], &v71);
  v21 = result;
  if ( result < 0 )
    return result;
  v22 = *(struct _FILE_OBJECT **)&Object[1];
  if ( *(_QWORD *)(*(_QWORD *)&Object[1] + 176LL) && (v77 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(*(PVOID *)&Object[1]);
    return -1073741811;
  }
  if ( v12
    && (unsigned __int16)v8 >> 14
    && (((unsigned __int16)v8 >> 14) & v71.GrantedAccess) != (unsigned __int16)v8 >> 14 )
  {
    ObfDereferenceObject(*(PVOID *)&Object[1]);
    return -1073741790;
  }
  if ( v8 == 606820 || v8 == 623208 )
  {
    v21 = sub_1406E8D8C(*(struct _FILE_OBJECT **)&Object[1], v8);
    if ( v21 < 0 )
      goto LABEL_40;
  }
  else if ( v8 == 590892 )
  {
    v21 = sub_1402A34C8(*(__int64 *)&Object[1], 16, 1);
    if ( v21 < 0 )
      goto LABEL_40;
  }
  if ( a2 )
  {
    v72 = 0LL;
    v21 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v12, &v72, 0LL);
    v61 = v72;
    if ( v21 >= 0 )
    {
      KeResetEvent((PRKEVENT)v72);
      goto LABEL_45;
    }
LABEL_40:
    ObfDereferenceObject(v22);
    return v21;
  }
LABEL_45:
  v65 = 0LL;
  P = 0LL;
  IsSandboxedToken = 0;
  v58 = 0;
  if ( v12 && (v8 == 589988 && v19 >= 4 || v8 == 590860 && v19 >= 0x24) )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    ThreadProcess = PsGetThreadProcess(Thread);
    SeCaptureSubjectContextEx(Thread, ThreadProcess, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
    BYTE1(Object[0]) = IsSandboxedToken;
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v62 = 0;
      v24 = v8 == 590860 ? *((_DWORD *)Src + 8) : *(_DWORD *)Src;
      v62 = v24;
      if ( v21 < 0 )
        goto LABEL_58;
      if ( v24 == -1610612733 )
      {
        v58 = 1;
        v21 = sub_14066119C(v8, Src, v19, v18, &P, (unsigned int *)Sizea);
        v19 = Size;
        v65 = P;
      }
      if ( v21 < 0 )
      {
LABEL_58:
        if ( v61 )
          ObfDereferenceObject(v61);
        goto LABEL_40;
      }
    }
  }
  p_Flags = &v22->Flags;
  v74 = &v22->Flags;
  if ( (v22->Flags & 2) != 0 )
  {
    v26 = (v22->Flags & 4) != 0;
    v27 = KeGetCurrentThread();
    --*((_WORD *)v27 + 242);
    v28 = *(_QWORD *)&Object[1];
    v29 = sub_140347C10(*(_QWORD *)&Object[1] + 128LL, 0LL);
    LOBYTE(Object[0]) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v28 + 116), 1) )
    {
      v22 = *(struct _FILE_OBJECT **)&Object[1];
      v30 = sub_140709FAC(*(volatile signed __int32 **)&Object[1], v55, v26, v29, Object);
    }
    else
    {
      if ( v29 )
        *(_BYTE *)(v29 + 18) = 1;
      v22 = *(struct _FILE_OBJECT **)&Object[1];
      ObfReferenceObject(*(PVOID *)&Object[1]);
      v30 = 0;
    }
    if ( LOBYTE(Object[0]) )
    {
      if ( v61 )
        ObfDereferenceObject(v61);
      if ( P )
        ExFreePoolWithTag(P, 0);
      ObfDereferenceObject(v22);
      return v30;
    }
    v56 = 1;
    v18 = Length;
    v19 = Size;
    v65 = P;
    p_Flags = v74;
  }
  else
  {
    v56 = 0;
    if ( v12 )
      sub_1402AAB50((unsigned int **)&a5, &v77, 0);
  }
  if ( (*p_Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v22->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v22);
  v32 = AttachedDevice;
  DeviceObject = AttachedDevice;
  if ( (_BYTE)v83 )
  {
    sub_1407305B0((unsigned __int64)AttachedDevice, v8);
    if ( !IsSandboxedToken )
    {
      FastIoDispatch = v32->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoDeviceControl = (PIRP)FastIoDispatch->FastIoDeviceControl;
        if ( FastIoDeviceControl )
        {
          if ( v55 && Address )
          {
            if ( v60 == 1 )
            {
              if ( v18 )
              {
                v35 = &Address[v18];
                if ( (unsigned __int64)v35 > 0x7FFFFFFF0000LL || v35 < Address )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
            }
            else if ( v60 == 2 )
            {
              ProbeForWrite(Address, v18, 1u);
            }
          }
          if ( v8 == 589856 )
          {
            _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
            v18 = Length;
            v19 = Size;
            v22 = *(struct _FILE_OBJECT **)&Object[1];
            v65 = P;
          }
          if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(v32->DriverObject) )
            v36 = sub_140A8A9AC();
          else
            v36 = 0LL;
          LOBYTE(v33) = 1;
          v37 = sub_14042A5E0(v22, v33);
          if ( v36 )
            sub_140A8A8D4(v36, FastIoDeviceControl);
          if ( v37 )
          {
            v69 = 0LL;
            v73 = 0LL;
            LOBYTE(a6) = 0;
            if ( (v77 & 1) != 0 )
            {
              v38 = (_DWORD *)a5;
              *(_DWORD *)(a5 + 4) = DWORD2(v64);
              *v38 = v64;
            }
            else
            {
              *(_OWORD *)a5 = v64;
            }
            v39 = v64;
            if ( v22->CompletionContext
              && ((v22->Flags & 0x2000000) == 0 || (v64 & 0xC0000000) == 0x80000000)
              && (v64 & 0xC0000000) != 0xC0000000 )
            {
              sub_1404179B0((ULONG_PTR)v22, &a6, &v69, &v73);
              v39 = v64;
              v9 = v69;
            }
            if ( a2 )
            {
              if ( (v22->Flags & 0x8000000) == 0 || v9 && (v39 & 0xC0000000) == 0x80000000 )
              {
                v40 = v61;
                KeSetEvent((PRKEVENT)v61, 0, 0);
              }
              else
              {
                v40 = v61;
              }
              ObfDereferenceObject(v40);
              v39 = v64;
            }
            if ( v56 )
            {
              sub_1402AD350((volatile __int32 *)&v22->Type);
              v39 = v64;
            }
            if ( v9 && v78 )
            {
              v41 = IoSetIoCompletion(v9, v73, (_DWORD)v78, v39, *((__int64 *)&v64 + 1), 1);
              v42 = v64;
              if ( v41 < 0 )
                v42 = -1073741670;
              if ( (v42 & 0xC0000000) == 0x80000000 )
                v42 = 259;
              LODWORD(v64) = v42;
            }
            if ( (_BYTE)a6 )
              sub_1404178E8((ULONG_PTR)v22);
            ObfDereferenceObject(v22);
            return v64;
          }
        }
      }
    }
  }
  sub_1402AABB0((__int64)v22);
  v43 = (IRP *)sub_1402AACA0((__int64)DeviceObject, (unsigned __int8)DeviceObject->StackSize, (unsigned __int8)v56 ^ 1u);
  Irp = v43;
  FastIoDeviceControl = v43;
  if ( v43 )
  {
    v43->Tail.Overlay.OriginalFileObject = v22;
    v43->Tail.Overlay.Thread = Thread;
    v43->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v43->RequestorMode = v55;
    v43->PendingReturned = 0;
    v43->Cancel = 0;
    v43->CancelRoutine = 0LL;
    v43->UserEvent = (PKEVENT)v61;
    v43->UserIosb = (PIO_STATUS_BLOCK)a5;
    v43->Overlay.AllocationSize.QuadPart = v77;
    v43->Overlay.AsynchronousParameters.UserApcContext = v78;
    CurrentStackLocation = v43->Tail.Overlay.CurrentStackLocation;
    v46 = v83;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v83 != 0) + 13;
    CurrentStackLocation[-1].FileObject = v22;
    CurrentStackLocation[-1].Parameters.Read.Length = v18;
    CurrentStackLocation[-1].Parameters.Create.Options = v19;
    v47 = a6;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
    v43->MdlAddress = 0LL;
    v43->AssociatedIrp.MasterIrp = 0LL;
    if ( (DeviceObject->Flags & 0x80000) != 0 && !IsSandboxedToken )
      goto LABEL_137;
    if ( !v60 )
    {
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( v19 || v18 )
      {
        if ( v65 )
        {
          v43->AssociatedIrp.MasterIrp = (struct _IRP *)v65;
        }
        else
        {
          v51 = v18;
          if ( v19 > v18 )
            v51 = v19;
          v52 = 105LL;
          if ( !v46 )
            v52 = 97LL;
          Pool2 = (struct _IRP *)ExAllocatePool2(v52, v51, 1112764233LL);
          Irp->AssociatedIrp.MasterIrp = Pool2;
          if ( Src )
            memmove(Pool2, Src, v19);
        }
        Irp->Flags = 48;
        Irp->UserBuffer = Address;
        if ( v18 )
          Irp->Flags = 112;
      }
      else
      {
        v43->Flags = 0;
        v43->UserBuffer = 0LL;
      }
      if ( v19 < v18 )
        memset((char *)Irp->AssociatedIrp.MasterIrp + v19, 0, v18 - v19);
      goto LABEL_162;
    }
    if ( v60 <= 2 )
    {
      v43->Flags = 0;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( v19 && Src )
      {
        v48 = 105LL;
        if ( !v46 )
          v48 = 97LL;
        v49 = (struct _IRP *)ExAllocatePool2(v48, v19, 1112764233LL);
        Irp->AssociatedIrp.MasterIrp = v49;
        memmove(v49, Src, v19);
        Irp->Flags = 48;
        v47 = a6;
      }
      if ( v18 )
      {
        Mdl = IoAllocateMdl(Address, v18, 0, 1u, Irp);
        Irp->MdlAddress = Mdl;
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        LOBYTE(v9) = v60 != 1;
        sub_1403198A0(Mdl, v55, v9, (__int64)DeviceObject, *(_DWORD *)&CurrentStackLocation[-1].MajorFunction);
      }
      goto LABEL_162;
    }
    if ( v60 == 3 )
    {
LABEL_137:
      v43->Flags = 0;
      v43->UserBuffer = Address;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
    }
LABEL_162:
    CurrentStackLocation[-1].Flags |= v71.GrantedAccess & 1 | (unsigned __int8)(2 * (v71.GrantedAccess & 2));
    if ( !(_BYTE)v83 )
      Irp->Flags |= 0x800u;
    if ( v47 == 589856 )
    {
      _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
      v22 = *(struct _FILE_OBJECT **)&Object[1];
    }
    if ( !IsSandboxedToken || v58 )
      return sub_140731680(DeviceObject, Irp, v55, v56, 2);
    p_ThreadListEntry = &Irp->AssociatedIrp.MasterIrp->ThreadListEntry;
    if ( v68 != 590860 )
      p_ThreadListEntry = &Irp->AssociatedIrp.MasterIrp->Type;
    if ( *p_ThreadListEntry != -1610612733 )
      return sub_140731680(DeviceObject, Irp, v55, v56, 2);
    sub_140658670((volatile __int32 *)&v22->Type, Irp, v61, 0LL, (*v74 & 2) != 0);
    return -1073741811;
  }
  sub_140933BA4(v22, v61);
  if ( v65 )
    ExFreePoolWithTag(v65, 0);
  return -1073741670;
}
