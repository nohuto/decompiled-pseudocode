/*
 * XREFs of sub_1407563A0 @ 0x1407563A0
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x1407562E0 (NtQueryDirectoryFileEx.c)
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
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14055A55C @ 0x14055A55C (sub_14055A55C.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_140709FAC @ 0x140709FAC (sub_140709FAC.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_140933BA4 @ 0x140933BA4 (sub_140933BA4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407563A0(
        void *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        volatile void *Address,
        SIZE_T Length,
        int a8,
        char a9,
        __int128 *a10,
        __int64 a11,
        _BYTE *a12,
        PDEVICE_OBJECT *a13,
        __int64 *a14,
        PVOID *a15,
        struct _KEVENT *a16)
{
  void *v16; // rdi
  struct _KEVENT *v17; // r12
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 v19; // r13
  unsigned int v20; // edx
  __int64 v21; // rcx
  ULONG v23; // r8d
  __int64 v24; // rcx
  char *v25; // r15
  __int16 v26; // r14
  _WORD *Pool2; // rsi
  int v28; // ebx
  struct _FILE_OBJECT *v29; // rdi
  bool v30; // r14
  struct _KTHREAD *v31; // rax
  volatile __int32 *v32; // rbx
  __int64 v33; // rax
  _BYTE *v34; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v36; // r8
  __int64 v37; // rax
  IRP *Irp; // rbx
  __int64 v39; // r14
  ULONG Flags; // eax
  __int64 v41; // rax
  PMDL Mdl; // rcx
  __int64 v43; // r8
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  PVOID v46; // [rsp+58h] [rbp-60h]
  struct _KTHREAD *v47; // [rsp+60h] [rbp-58h]
  ULONG *p_Flags; // [rsp+68h] [rbp-50h]
  __int128 v49; // [rsp+70h] [rbp-48h]
  __int64 v52; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v53; // [rsp+D8h] [rbp+20h]

  v53 = a4;
  v52 = a3;
  v16 = a1;
  Object = 0LL;
  v17 = 0LL;
  v46 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v47 = CurrentThread;
  v19 = *((_BYTE *)CurrentThread + 562);
  a16->Header.Type = v19;
  if ( v19 )
  {
    v20 = 0;
    v21 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
    if ( a8 == 1 )
    {
      v20 = 72;
    }
    else if ( a8 == 3 )
    {
      v20 = 96;
    }
    else
    {
      switch ( a8 )
      {
        case 2:
        case 29:
          v20 = 72;
          goto LABEL_18;
        case 12:
        case 33:
          v20 = 16;
          goto LABEL_18;
        case 32:
          v20 = 56;
          goto LABEL_18;
        case 37:
          v20 = 112;
          goto LABEL_18;
        case 38:
          v20 = 88;
          goto LABEL_18;
        case 50:
        case 60:
          v20 = 96;
          goto LABEL_18;
        case 63:
          v20 = 120;
          break;
        default:
          break;
      }
      if ( !v20 )
        return 3221225475LL;
    }
LABEL_18:
    if ( (unsigned int)Length < v20 )
      return 3221225476LL;
    if ( *(_QWORD *)(*((_QWORD *)CurrentThread + 23) + 1408LL) )
      v23 = 4;
    else
      v23 = *((unsigned __int8 *)&qword_140A394C0[10] + a8);
    ProbeForWrite(Address, (unsigned int)Length, v23);
  }
  if ( !a10 )
    goto LABEL_39;
  v49 = 0LL;
  if ( v19 )
  {
    v24 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
      v24 = (__int64)a10;
    LODWORD(v49) = *(_DWORD *)v24;
    v25 = *(char **)(v24 + 8);
    *((_QWORD *)&v49 + 1) = v25;
  }
  else
  {
    v49 = *a10;
    v25 = (char *)*((_QWORD *)&v49 + 1);
  }
  if ( (v49 & 1) != 0 )
    return 3221225485LL;
  v26 = v49;
  if ( (_WORD)v49 )
  {
    if ( v19 )
    {
      if ( (unsigned __int64)&v25[(unsigned __int16)v49] > 0x7FFFFFFF0000LL || &v25[(unsigned __int16)v49] < v25 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int16)v49 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    Pool2 = (_WORD *)ExAllocatePool2(97LL, (unsigned __int16)v49 + 16LL, 1766092617LL);
    P = Pool2;
    memmove(Pool2 + 8, v25, (unsigned __int16)v49);
    *Pool2 = v49;
    Pool2[1] = v26;
    *((_QWORD *)Pool2 + 1) = Pool2 + 8;
    v16 = a1;
  }
  else
  {
LABEL_39:
    Pool2 = P;
  }
  v28 = sub_1402AC790(v16, 1u, v19, &Object, 0LL);
  if ( v28 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v28;
  }
  v29 = (struct _FILE_OBJECT *)Object;
  *a15 = Object;
  if ( v29->CompletionContext && (v52 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v29);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return 3221225485LL;
  }
  if ( a2 )
  {
    a16 = 0LL;
    v28 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v19, (PVOID *)&a16, 0LL);
    v17 = a16;
    v46 = a16;
    if ( v28 < 0 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
LABEL_81:
      ObfDereferenceObject(v29);
      return (unsigned int)v28;
    }
    KeResetEvent(a16);
  }
  p_Flags = &v29->Flags;
  if ( (v29->Flags & 2) != 0 )
  {
    v30 = (v29->Flags & 4) != 0;
    v31 = KeGetCurrentThread();
    --*((_WORD *)v31 + 242);
    v32 = (volatile __int32 *)Object;
    v33 = sub_140347C10((__int64)Object + 128, 0LL);
    LOBYTE(a11) = 0;
    if ( _InterlockedExchange(v32 + 29, 1) )
    {
      v29 = (struct _FILE_OBJECT *)Object;
      v28 = sub_140709FAC((volatile signed __int32 *)Object, v19, v30, v33, &a11);
    }
    else
    {
      if ( v33 )
        *(_BYTE *)(v33 + 18) = 1;
      v29 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v28 = 0;
    }
    if ( (_BYTE)a11 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v17 )
        ObfDereferenceObject(v17);
      goto LABEL_81;
    }
    v34 = a12;
    *a12 = 1;
    Pool2 = P;
  }
  else
  {
    v34 = a12;
    *a12 = 0;
    if ( v19 )
      sub_1402AAB50((unsigned int **)&a5, &v52, 0);
  }
  sub_1402AABB0((__int64)v29);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v29);
  *a13 = RelatedDeviceObject;
  LOBYTE(v36) = *v34 == 0;
  v37 = sub_1402AACA0((__int64)RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v36);
  Irp = (IRP *)v37;
  a16 = (struct _KEVENT *)v37;
  if ( v37 )
  {
    *a14 = v37;
    *(_QWORD *)(v37 + 192) = v29;
    *(_QWORD *)(v37 + 152) = v47;
    *(_BYTE *)(v37 + 64) = v19;
    *(_QWORD *)(v37 + 80) = v17;
    *(_QWORD *)(v37 + 72) = a5;
    *(_QWORD *)(v37 + 88) = v52;
    *(_QWORD *)(v37 + 96) = v53;
    v39 = *(_QWORD *)(v37 + 184);
    *(_WORD *)(v39 - 72) = 268;
    *(_QWORD *)(v39 - 24) = v29;
    *(_QWORD *)(v37 + 160) = Pool2;
    *(_QWORD *)(v37 + 24) = 0LL;
    *(_QWORD *)(v37 + 8) = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v41 = ExAllocatePool2(65LL, (unsigned int)Length, 1112764233LL);
      Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v41;
      if ( !v41 )
      {
        sub_140658670((volatile __int32 *)&v29->Type, Irp, v17, 0LL, (*p_Flags & 2) != 0);
        goto LABEL_72;
      }
      Irp->Flags = 112;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      sub_14055A55C(Mdl, v19, v43, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v39 - 72));
      goto LABEL_80;
    }
    Irp->UserBuffer = (PVOID)Address;
LABEL_80:
    *(_DWORD *)(v39 - 64) = Length;
    *(_DWORD *)(v39 - 48) = a8;
    *(_DWORD *)(v39 - 40) = 0;
    *(_QWORD *)(v39 - 56) = Pool2;
    sub_1402D6B0C((__int64)&unk_140CE2018, 0x185FE43u, 0, 0, (__int64)&qword_14000FFC8, 0);
    *(_BYTE *)(v39 - 70) = a9 & 0x1B;
    Irp->Flags |= 0x800u;
    return 0LL;
  }
  sub_140933BA4(v29, v17);
LABEL_72:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return 3221225626LL;
}
