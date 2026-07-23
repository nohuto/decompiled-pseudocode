/*
 * XREFs of sub_14073A450 @ 0x14073A450
 * Callers:
 *     NtCopyFileChunk @ 0x1406588A0 (NtCopyFileChunk.c)
 *     NtReadFile @ 0x14073A320 (NtReadFile.c)
 *     sub_140938198 @ 0x140938198 (sub_140938198.c)
 * Callees:
 *     sub_14022B4B0 @ 0x14022B4B0 (sub_14022B4B0.c)
 *     sub_140232B24 @ 0x140232B24 (sub_140232B24.c)
 *     sub_14025E7A8 @ 0x14025E7A8 (sub_14025E7A8.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_1402AAB50 @ 0x1402AAB50 (sub_1402AAB50.c)
 *     sub_1402AABB0 @ 0x1402AABB0 (sub_1402AABB0.c)
 *     sub_1402AACA0 @ 0x1402AACA0 (sub_1402AACA0.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     sub_1402AC870 @ 0x1402AC870 (sub_1402AC870.c)
 *     sub_1402AD350 @ 0x1402AD350 (sub_1402AD350.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140417D50 @ 0x140417D50 (sub_140417D50.c)
 *     sub_140418218 @ 0x140418218 (sub_140418218.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14065863C @ 0x14065863C (sub_14065863C.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     sub_140731680 @ 0x140731680 (sub_140731680.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A8A8D4 @ 0x140A8A8D4 (sub_140A8A8D4.c)
 *     sub_140A8A9AC @ 0x140A8A9AC (sub_140A8A9AC.c)
 */

__int64 __fastcall sub_14073A450(
        struct _FILE_OBJECT *Object,
        HANDLE a2,
        __int64 a3,
        void *a4,
        _OWORD *a5,
        struct _IRP *Address,
        SIZE_T Length,
        __int64 a8,
        ULONG *a9,
        PVOID a10,
        struct _IO_STATUS_BLOCK *a11,
        int a12,
        _OWORD *a13)
{
  __int64 v15; // r13
  char v16; // al
  struct _KEVENT *v17; // rsi
  PVOID v18; // r15
  KPROCESSOR_MODE v19; // bl
  char v20; // r12
  PDEVICE_OBJECT v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rbx
  ULONG v24; // r13d
  __int64 v26; // r15
  int v27; // r11d
  int SectorSize; // r8d
  unsigned int v29; // ecx
  unsigned int v30; // r9d
  int v31; // ebx
  int v32; // ebx
  struct _KTHREAD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  struct _FILE_OBJECT *v36; // rcx
  __int64 v37; // r15
  __int64 v38; // rbx
  char v39; // al
  __int64 v40; // rax
  IRP *Irp; // rbx
  PVOID v42; // r15
  struct _IO_STACK_LOCATION *v43; // r15
  ULONG Flags; // eax
  __int64 v45; // rax
  struct _MDL *v46; // rax
  char v47; // si
  struct _DEVICE_OBJECT *v48; // r10
  IRP *v49; // rsi
  char v50; // r12
  struct _KEVENT *v51; // r15
  struct _IRP *v52; // r13
  KPROCESSOR_MODE v53; // bl
  IRP *RelatedDeviceObject; // r11
  __int64 v55; // rcx
  __int64 v56; // rbx
  bool v57; // zf
  __int64 v58; // r12
  unsigned int v59; // r10d
  int v60; // r8d
  unsigned int v61; // ecx
  unsigned int v62; // r9d
  PIRP v63; // rbx
  int v64; // ebx
  struct _KTHREAD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // r8
  __int64 v68; // r12
  __int64 v69; // rbx
  char v70; // al
  __int64 v71; // rax
  PVOID v72; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  NTSTATUS Status; // eax
  __int64 Pool2; // rax
  struct _MDL *Mdl; // r9
  KPROCESSOR_MODE v77; // dl
  _OWORD *v78; // rbx
  int v79; // ecx
  unsigned __int8 v80; // [rsp+50h] [rbp-B8h]
  char v81; // [rsp+50h] [rbp-B8h]
  _BYTE v82[15]; // [rsp+51h] [rbp-B7h] BYREF
  PDEVICE_OBJECT v83; // [rsp+60h] [rbp-A8h]
  PIRP FastIoDispatch; // [rsp+68h] [rbp-A0h]
  int v85; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER v86; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER CurrentByteOffset; // [rsp+80h] [rbp-88h] BYREF
  ULONG v88; // [rsp+88h] [rbp-80h]
  ULONG v89; // [rsp+8Ch] [rbp-7Ch]
  PVOID v90; // [rsp+90h] [rbp-78h]
  PVOID v91; // [rsp+98h] [rbp-70h] BYREF
  __int128 v92; // [rsp+A0h] [rbp-68h]
  int v93; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *StartVa; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-48h]
  HANDLE Handle; // [rsp+118h] [rbp+10h]
  __int64 v97; // [rsp+120h] [rbp+18h] BYREF
  void *v98; // [rsp+128h] [rbp+20h]

  v98 = a4;
  v97 = a3;
  Handle = a2;
  v15 = (__int64)a13;
  if ( dword_140C0959C == 1 || dword_140C0959C && (v16 = sub_14065863C(), a2 = Handle, v16) )
  {
    v49 = 0LL;
    *(_QWORD *)&v82[7] = 0LL;
    v85 = 0;
    v50 = 0;
    v51 = 0LL;
    v90 = 0LL;
    v89 = 0;
    CurrentByteOffset.QuadPart = 0LL;
    if ( a10 && (a3 || a2 || Object->CompletionContext) )
    {
      v31 = -1073741811;
      v52 = Address;
      goto LABEL_239;
    }
    CurrentThread = KeGetCurrentThread();
    v53 = *((_BYTE *)CurrentThread + 562);
    v82[1] = v53;
    if ( (Object->Flags & 2) != 0 && a12 >= 0 )
      v50 = 1;
    v81 = v50;
    LODWORD(v83) = a12 & 0x40000000;
    v82[2] = (a12 & 0x40000000) == 0;
    RelatedDeviceObject = (IRP *)IoGetRelatedDeviceObject(Object);
    FastIoDispatch = RelatedDeviceObject;
    if ( !v53 || a10 )
    {
      v58 = a8;
      if ( a8 )
        CurrentByteOffset = *(LARGE_INTEGER *)a8;
      v59 = Length;
      v52 = Address;
      if ( a9 )
        v89 = *a9;
    }
    else
    {
      v55 = (__int64)a5;
      v56 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
        v55 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v55 = *(_DWORD *)v55;
      sub_1402AAB50((unsigned int **)&a5, &v97, v50);
      v57 = v15 == 0;
      v52 = Address;
      if ( v57 )
        ProbeForWrite(Address, (unsigned int)Length, 1u);
      if ( Object->CompletionContext && (v97 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        v85 = -1073741811;
        v31 = -1073741811;
        goto LABEL_239;
      }
      v58 = a8;
      if ( a8 )
      {
        if ( (a8 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        CurrentByteOffset = *(LARGE_INTEGER *)a8;
      }
      if ( a9 )
      {
        if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
          v56 = (__int64)a9;
        v89 = *(_DWORD *)v56;
      }
      v59 = Length;
      RelatedDeviceObject = FastIoDispatch;
      v53 = v82[1];
    }
    if ( !v53 || (Object->Flags & 8) == 0 )
      goto LABEL_160;
    v60 = *((unsigned __int16 *)&RelatedDeviceObject[1].Overlay.AllocationSize + 4);
    if ( (_WORD)v60 )
    {
      v61 = *((unsigned __int16 *)&RelatedDeviceObject[1].Overlay.AllocationSize + 4);
      v62 = v61;
      if ( ((v60 - 1) & v59) != 0 )
        goto LABEL_152;
    }
    else
    {
      v61 = 0;
    }
    v62 = v61;
    if ( (*(_DWORD *)(&RelatedDeviceObject->Tail.CompletionKey + 4) & (unsigned int)v52) == 0 )
    {
LABEL_156:
      if ( v58 && (_WORD)v60 && ((v61 - 1) & CurrentByteOffset.LowPart) != 0 )
      {
        v31 = -1073741811;
        goto LABEL_238;
      }
LABEL_160:
      if ( Handle )
      {
        v91 = 0LL;
        v31 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, v53, &v91, 0LL);
        v51 = (struct _KEVENT *)v91;
        v90 = v91;
        v85 = v31;
        if ( v31 < 0 )
          goto LABEL_238;
        KeResetEvent((PRKEVENT)v91);
      }
      v63 = FastIoDispatch;
      StartVa = (struct _KTHREAD *)FastIoDispatch->MdlAddress[1].StartVa;
      if ( v81 )
      {
        v64 = Object->Flags & 4;
        v65 = KeGetCurrentThread();
        --*((_WORD *)v65 + 242);
        v66 = sub_140347C10((__int64)&Object->Lock, 0LL);
        v82[0] = 0;
        if ( _InterlockedExchange((volatile __int32 *)&Object->Busy, 1) )
        {
          LOBYTE(v67) = v64 != 0;
          v31 = sub_140709FAC((volatile signed __int32 *)&Object->Type, v82[1], v67, v66, v82);
        }
        else
        {
          if ( v66 )
            *(_BYTE *)(v66 + 18) = 1;
          ObfReferenceObject(Object);
          v31 = 0;
        }
        if ( v82[0] )
        {
          if ( v51 )
            ObfDereferenceObject(v51);
          goto LABEL_238;
        }
        if ( !v58 || CurrentByteOffset.QuadPart == -2 )
          CurrentByteOffset = Object->CurrentByteOffset;
        if ( Object->PrivateCacheMap && !a13 )
        {
          v92 = 0LL;
          v68 = *((_QWORD *)StartVa + 2);
          if ( CurrentByteOffset.HighPart < 0 )
          {
            if ( v51 )
              ObfDereferenceObject(v51);
            sub_1402AD350((volatile __int32 *)&Object->Type);
            v31 = -1073741811;
            goto LABEL_238;
          }
          if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying((struct _DRIVER_OBJECT *)FastIoDispatch->MdlAddress) )
            v69 = sub_140A8A9AC();
          else
            v69 = 0LL;
          v70 = sub_14042A5E0(Object, &CurrentByteOffset);
          v82[0] = v70;
          if ( v69 )
          {
            sub_140A8A8D4(v69, v68);
            v70 = v82[0];
          }
          if ( v70 && (!(_DWORD)v92 || (_DWORD)v92 == -2147483643 || (_DWORD)v92 == -1073741807) )
          {
            sub_140232B24();
            sub_14022B4B0(DWORD2(v92), 0LL);
            *a5 = v92;
            v50 = v81;
            if ( Handle )
            {
              if ( (Object->Flags & 0x8000000) == 0 )
                KeSetEvent(v51, 0, 0);
              ObfDereferenceObject(v51);
            }
            sub_1402AD350((volatile __int32 *)&Object->Type);
            v31 = v92;
            goto LABEL_239;
          }
        }
        v63 = FastIoDispatch;
      }
      else if ( !v58 && (Object->Flags & 0x280) == 0 )
      {
        if ( v51 )
        {
          ObfDereferenceObject(v51);
          v31 = -1073741811;
          goto LABEL_238;
        }
        goto LABEL_155;
      }
      if ( CurrentByteOffset.HighPart < 0 )
      {
        if ( v51 )
          ObfDereferenceObject(v51);
        v50 = v81;
        if ( v81 )
          sub_1402AD350((volatile __int32 *)&Object->Type);
        v31 = -1073741811;
        goto LABEL_239;
      }
      sub_1402AABB0((__int64)Object);
      v50 = v81;
      v71 = sub_1402AACA0((__int64)v63, BYTE4(v63->UserIosb), (unsigned __int8)v81 ^ 1u);
      v49 = (IRP *)v71;
      *(_QWORD *)&v82[7] = v71;
      if ( !v71 )
      {
        if ( v51 )
          ObfDereferenceObject(v51);
        if ( v81 )
          sub_1402AD350((volatile __int32 *)&Object->Type);
        v31 = -1073741670;
LABEL_239:
        if ( a13 )
          sub_140418218((__int64)v52, 1);
        v36 = Object;
        if ( v49 )
        {
          sub_140658670((volatile __int32 *)&Object->Type, v49, v51, 0LL, v50);
          return (unsigned int)v31;
        }
LABEL_57:
        ObfDereferenceObject(v36);
        return (unsigned int)v31;
      }
      *(_QWORD *)(v71 + 192) = Object;
      *(_QWORD *)(v71 + 152) = CurrentThread;
      *(_QWORD *)(v71 + 160) = 0LL;
      *(_WORD *)(v71 + 64) = v82[1];
      *(_BYTE *)(v71 + 68) = 0;
      *(_QWORD *)(v71 + 104) = 0LL;
      *(_DWORD *)(v71 + 16) = 0;
      *(_QWORD *)(v71 + 80) = v51;
      v72 = a10;
      if ( a10 )
      {
        ObfReferenceObjectWithTag(a10, 0x49526F49u);
        v49->Flags |= 0x200000u;
        v49->UserIosb = a11;
        v91 = a5;
      }
      else
      {
        v91 = a5;
        *(_QWORD *)(v71 + 72) = a5;
        *(_QWORD *)(v71 + 88) = v97;
        v72 = v98;
      }
      v49->Overlay.AsynchronousParameters.UserApcContext = v72;
      CurrentStackLocation = v49->Tail.Overlay.CurrentStackLocation;
      *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
      CurrentStackLocation[-1].FileObject = Object;
      v49->AssociatedIrp.MasterIrp = 0LL;
      v49->MdlAddress = 0LL;
      Status = FastIoDispatch->IoStatus.Status;
      if ( (Status & 4) != 0 )
      {
        if ( (_DWORD)Length )
        {
          if ( a13 )
          {
            v49->AssociatedIrp.MasterIrp = v52;
            v49->Flags |= 0x50u;
          }
          else
          {
            Pool2 = ExAllocatePool2(73LL, (unsigned int)Length, 1112764233LL);
            v49->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
            if ( !Pool2 )
            {
              v31 = -1073741670;
              goto LABEL_238;
            }
            v49->Flags |= 0x70u;
          }
          goto LABEL_230;
        }
        v49->Flags |= 0x50u;
      }
      else
      {
        if ( (Status & 0x10) == 0 )
        {
LABEL_230:
          v49->UserBuffer = v52;
          goto LABEL_231;
        }
        if ( (_DWORD)Length )
        {
          Mdl = IoAllocateMdl(v52, Length, 0, 1u, v49);
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          v77 = 0;
          v78 = a13;
          if ( !a13 )
            v77 = v82[1];
          MmProbeAndLockPages(Mdl, v77, IoWriteAccess);
LABEL_232:
          v79 = v49->Flags | 0x100;
          v49->Flags = v79;
          if ( (Object->Flags & 8) != 0 )
          {
            v79 |= 1u;
            v49->Flags = v79;
          }
          if ( !(_DWORD)v83 )
            v49->Flags = v79 | 0x800;
          if ( !v78 || (v49->RequestorMode = 0, v49->UserBuffer = v52, v31 = sub_140417D50((__int64)v49, v78), v31 >= 0) )
          {
            CurrentStackLocation[-1].Parameters.Read.Length = Length;
            CurrentStackLocation[-1].Parameters.Create.Options = v89;
            CurrentStackLocation[-1].Parameters.Read.ByteOffset = CurrentByteOffset;
            if ( sub_1402AC870((__int64)Object, 16) )
              CurrentStackLocation[-1].Parameters.Read.Flags = *((_DWORD *)v91 + 2);
            return (unsigned int)sub_140731680((PDEVICE_OBJECT)FastIoDispatch, v49, Object, v82[2], v82[1], v81, 0);
          }
          goto LABEL_238;
        }
      }
LABEL_231:
      v78 = a13;
      goto LABEL_232;
    }
LABEL_152:
    if ( (_WORD)v60 && v59 % v62
      || (v61 = v62, (*(_DWORD *)(&RelatedDeviceObject->Tail.CompletionKey + 4) & (unsigned int)v52) != 0) )
    {
LABEL_155:
      v31 = -1073741811;
LABEL_238:
      v50 = v81;
      goto LABEL_239;
    }
    goto LABEL_156;
  }
  v17 = 0LL;
  v90 = 0LL;
  v88 = 0;
  v86.QuadPart = 0LL;
  v18 = a10;
  v91 = a10;
  if ( a10 && (a3 || a2 || Object->CompletionContext) )
    goto LABEL_66;
  StartVa = KeGetCurrentThread();
  v19 = *((_BYTE *)StartVa + 562);
  v80 = v19;
  v20 = (Object->Flags & 2) != 0 && !a10;
  v82[1] = v20;
  v21 = IoGetRelatedDeviceObject(Object);
  v83 = v21;
  if ( !v19 || v18 )
  {
    v26 = a8;
    if ( a8 )
      v86 = *(LARGE_INTEGER *)a8;
    v24 = Length;
    v27 = (int)Address;
    if ( a9 )
      v88 = *a9;
  }
  else
  {
    v93 = 0;
    v22 = (__int64)a5;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    sub_1402AAB50((unsigned int **)&a5, &v97, v20);
    v24 = Length;
    ProbeForWrite(Address, (unsigned int)Length, 1u);
    if ( Object->CompletionContext && (v97 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(Object);
      return 3221225485LL;
    }
    v26 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v86 = *(LARGE_INTEGER *)a8;
    }
    if ( a9 )
    {
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v23 = (__int64)a9;
      v88 = *(_DWORD *)v23;
    }
    v21 = v83;
    v27 = (int)Address;
    v19 = v80;
  }
  if ( !v19 || (Object->Flags & 8) == 0 )
    goto LABEL_44;
  SectorSize = v21->SectorSize;
  if ( !(_WORD)SectorSize )
  {
    v29 = 0;
    goto LABEL_37;
  }
  v29 = v21->SectorSize;
  v30 = v29;
  if ( ((SectorSize - 1) & v24) == 0 )
  {
LABEL_37:
    v30 = v29;
    if ( (v21->AlignmentRequirement & v27) == 0 )
      goto LABEL_41;
  }
  if ( (_WORD)SectorSize && v24 % v30 )
    goto LABEL_66;
  v29 = v30;
  if ( (v21->AlignmentRequirement & v27) != 0 )
    goto LABEL_66;
LABEL_41:
  if ( v26 && (_WORD)SectorSize && ((v29 - 1) & v86.LowPart) != 0 )
    goto LABEL_66;
LABEL_44:
  if ( Handle )
  {
    *(_QWORD *)&v82[7] = 0LL;
    v31 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, v19, (PVOID *)&v82[7], 0LL);
    v17 = *(struct _KEVENT **)&v82[7];
    v90 = *(PVOID *)&v82[7];
    if ( v31 < 0 )
    {
LABEL_56:
      v36 = Object;
      goto LABEL_57;
    }
    KeResetEvent(*(PRKEVENT *)&v82[7]);
  }
  FastIoDispatch = (PIRP)v83->DriverObject->FastIoDispatch;
  if ( !v20 )
  {
    if ( !v26 && (Object->Flags & 0x280) == 0 )
    {
      if ( v17 )
      {
        ObfDereferenceObject(v17);
        ObfDereferenceObject(Object);
        return 3221225485LL;
      }
LABEL_66:
      ObfDereferenceObject(Object);
      return 3221225485LL;
    }
    goto LABEL_86;
  }
  v32 = Object->Flags & 4;
  v33 = KeGetCurrentThread();
  --*((_WORD *)v33 + 242);
  v34 = sub_140347C10((__int64)&Object->Lock, 0LL);
  v82[0] = 0;
  if ( _InterlockedExchange((volatile __int32 *)&Object->Busy, 1) )
  {
    LOBYTE(v35) = v32 != 0;
    v31 = sub_140709FAC((volatile signed __int32 *)&Object->Type, v80, v35, v34, v82);
  }
  else
  {
    if ( v34 )
      *(_BYTE *)(v34 + 18) = 1;
    ObfReferenceObject(Object);
    v31 = 0;
  }
  if ( v82[0] )
  {
    if ( v17 )
      ObfDereferenceObject(v17);
    goto LABEL_56;
  }
  if ( !v26 || v86.QuadPart == -2 )
    v86 = Object->CurrentByteOffset;
  if ( !Object->PrivateCacheMap )
  {
LABEL_86:
    v37 = (__int64)v83;
    goto LABEL_87;
  }
  v92 = 0LL;
  *(_QWORD *)&v82[7] = *(_QWORD *)&FastIoDispatch->Flags;
  if ( v86.HighPart < 0 )
  {
    if ( v17 )
      ObfDereferenceObject(v17);
LABEL_65:
    sub_1402AD350((volatile __int32 *)&Object->Type);
    goto LABEL_66;
  }
  v37 = (__int64)v83;
  if ( (dword_140C29FC0 & 0x10) != 0 && MmIsDriverVerifying(v83->DriverObject) )
    v38 = sub_140A8A9AC();
  else
    v38 = 0LL;
  v39 = sub_14042A5E0(Object, &v86);
  v82[0] = v39;
  if ( v38 )
  {
    sub_140A8A8D4(v38, *(_QWORD *)&v82[7]);
    v39 = v82[0];
  }
  if ( v39 && (!(_DWORD)v92 || (_DWORD)v92 == -2147483643 || (_DWORD)v92 == -1073741807) )
  {
    sub_140232B24();
    sub_14022B4B0(DWORD2(v92), 0LL);
    *a5 = v92;
    if ( Handle )
    {
      if ( (Object->Flags & 0x8000000) == 0 )
        KeSetEvent(v17, 0, 0);
      ObfDereferenceObject(v17);
    }
    sub_1402AD350((volatile __int32 *)&Object->Type);
    ObfDereferenceObject(Object);
    return (unsigned int)v92;
  }
LABEL_87:
  if ( v86.HighPart < 0 )
  {
    if ( v17 )
      ObfDereferenceObject(v17);
    if ( !v20 )
      goto LABEL_66;
    goto LABEL_65;
  }
  sub_1402AABB0((__int64)Object);
  v40 = sub_1402AACA0(v37, *(unsigned __int8 *)(v37 + 76), (unsigned __int8)v20 ^ 1u);
  Irp = (IRP *)v40;
  FastIoDispatch = (PIRP)v40;
  if ( !v40 )
  {
    if ( v17 )
      ObfDereferenceObject(v17);
    if ( v20 )
      sub_1402AD350((volatile __int32 *)&Object->Type);
    ObfDereferenceObject(Object);
    return 3221225626LL;
  }
  *(_QWORD *)(v40 + 192) = Object;
  *(_QWORD *)(v40 + 152) = StartVa;
  *(_QWORD *)(v40 + 160) = 0LL;
  *(_WORD *)(v40 + 64) = v80;
  *(_BYTE *)(v40 + 68) = 0;
  *(_QWORD *)(v40 + 104) = 0LL;
  *(_DWORD *)(v40 + 16) = 0;
  *(_QWORD *)(v40 + 80) = v17;
  v42 = v91;
  if ( v91 )
  {
    ObfReferenceObjectWithTag(v91, 0x49526F49u);
    Irp->Flags |= 0x200000u;
    Irp->UserIosb = a11;
    *(_QWORD *)&v82[7] = a5;
  }
  else
  {
    *(_QWORD *)&v82[7] = a5;
    *(_QWORD *)(v40 + 72) = a5;
    *(_QWORD *)(v40 + 88) = v97;
    v42 = v98;
  }
  Irp->Overlay.AsynchronousParameters.UserApcContext = v42;
  v43 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_DWORD *)&v43[-1].MajorFunction = 3;
  v43[-1].FileObject = Object;
  Irp->AssociatedIrp.MasterIrp = 0LL;
  Irp->MdlAddress = 0LL;
  Flags = v83->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( v24 )
    {
      v45 = ExAllocatePool2(73LL, v24, 1112764233LL);
      Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v45;
      if ( !v45 )
      {
        sub_140658670((volatile __int32 *)&Object->Type, Irp, v17, 0LL, v20);
        return 3221225626LL;
      }
      Irp->Flags |= 0x70u;
      goto LABEL_111;
    }
    Irp->Flags |= 0x50u;
  }
  else
  {
    if ( (Flags & 0x10) == 0 )
    {
LABEL_111:
      Irp->UserBuffer = Address;
      goto LABEL_112;
    }
    if ( v24 )
    {
      v46 = IoAllocateMdl(Address, v24, 0, 1u, Irp);
      if ( !v46 )
        RtlRaiseStatus(-1073741670);
      v47 = v80;
      MmProbeAndLockPages(v46, v80, IoWriteAccess);
      goto LABEL_113;
    }
  }
LABEL_112:
  v47 = v80;
LABEL_113:
  Irp->Flags |= (Object->Flags & 8 | 0x4800) >> 3;
  v43[-1].Parameters.Read.Length = v24;
  v43[-1].Parameters.Create.Options = v88;
  v43[-1].Parameters.Read.ByteOffset = v86;
  if ( sub_1402AC870((__int64)Object, 16) )
    v43[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)&v82[7] + 8LL);
  return sub_140731680(v48, Irp, Object, 1, v47, v20, 0);
}
