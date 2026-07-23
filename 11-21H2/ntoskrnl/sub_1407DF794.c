/*
 * XREFs of sub_1407DF794 @ 0x1407DF794
 * Callers:
 *     sub_1407DF200 @ 0x1407DF200 (sub_1407DF200.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140360A28 @ 0x140360A28 (sub_140360A28.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     NtCreateSection @ 0x1406FD0D0 (NtCreateSection.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_1407DFBA4 @ 0x1407DFBA4 (sub_1407DFBA4.c)
 *     sub_1407DFC68 @ 0x1407DFC68 (sub_1407DFC68.c)
 *     sub_1407DFFD8 @ 0x1407DFFD8 (sub_1407DFFD8.c)
 *     sub_1407E0048 @ 0x1407E0048 (sub_1407E0048.c)
 */

__int64 __fastcall sub_1407DF794(
        volatile signed __int32 *a1,
        __int64 a2,
        struct _LIST_ENTRY *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        _QWORD *a9,
        _BYTE *a10)
{
  __int128 v11; // xmm0
  __int64 Flink; // r13
  HANDLE v15; // r15
  __int64 v16; // rax
  ULONG AllocationAttributes; // r8d
  __int64 v18; // rbx
  bool v19; // zf
  NTSTATUS v20; // edi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int128 v24; // xmm1
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // r8
  NTSTATUS v29; // r10d
  unsigned __int8 v30; // r8
  int v31; // edx
  PVOID Object; // [rsp+40h] [rbp-A1h] BYREF
  HANDLE SectionHandle; // [rsp+48h] [rbp-99h] BYREF
  struct _IRP v35; // [rsp+50h] [rbp-91h] BYREF

  v11 = 0LL;
  v35.ThreadListEntry.Blink = a3;
  *a9 = 0LL;
  v35.Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = 0LL;
  Flink = 0x200000000LL;
  v35.Overlay.AllocationSize.QuadPart = 0LL;
  *((_DWORD *)&v35.Overlay.AllocationSize + 2) = 0;
  v15 = 0LL;
  v35.IoStatus.Pointer = a9;
  *a10 = 0;
  v16 = *(_QWORD *)a1;
  memset(&v35, 0, 32);
  AllocationAttributes = a7 != 0 ? 285212672 : 0x4000000;
  v35.ThreadListEntry.Flink = (struct _LIST_ENTRY *)0x200000000LL;
  *(_OWORD *)&v35.CancelRoutine = 0LL;
  SectionHandle = 0LL;
  memset(&v35.IoStatus.Information, 0, 32);
  LODWORD(Object) = AllocationAttributes;
  if ( a6 >= *(_DWORD *)(v16 + 88) )
  {
    v20 = -1073741811;
    goto LABEL_36;
  }
  v18 = *((_QWORD *)a1 + 7) + 56LL * a6;
  if ( !_bittest64((const signed __int64 *)(v18 + 24), 0x22u) )
  {
    if ( (*(_DWORD *)(a2 + 108) & 1) == 0 )
    {
      v19 = *(_QWORD *)(a4 + 24) == 0LL;
      v35.Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = *(struct _LIST_ENTRY **)(a4 + 24);
      *(_OWORD *)&v35.CancelRoutine = 0x100000003uLL;
      if ( !v19 )
        sub_1407E0048(a1, *(_QWORD *)(a2 + 32), &v35.CancelRoutine, 0LL, 1, a8);
    }
    v20 = sub_1407DFC68(
            (unsigned int)&v35.MdlAddress,
            *((_QWORD *)a1 + 1),
            v35.ThreadListEntry.Blink,
            *(_QWORD *)(a2 + 64),
            161,
            64,
            128,
            a2 + 32);
    if ( v20 < 0 || (v20 = sub_140360A28(v35.MdlAddress, (((dword_140C544F0 & 0x10) == 0) << 14) + 4864), v20 < 0) )
    {
      Flink = (__int64)v35.ThreadListEntry.Flink;
      goto LABEL_36;
    }
    if ( *((_DWORD *)a1 + 30) < *((_DWORD *)a1 + 31)
      && (int)sub_14071E6BC(*(struct _FILE_OBJECT **)&v35.Flags, 6, 8u, 0, &v35, &v35.ThreadListEntry.Blink, 1) >= 0 )
    {
      v21 = (unsigned int)_InterlockedExchangeAdd(a1 + 30, 1u);
      v22 = *((_QWORD *)a1 + 14);
      v23 = 3 * v21;
      *(_QWORD *)(v22 + 8 * v23 + 12) = *(_QWORD *)&v35.Type;
      LODWORD(v21) = v35.ThreadListEntry.Flink;
      *(_QWORD *)(v22 + 8 * v23) = *(_QWORD *)(*(_QWORD *)&v35.Flags + 24LL);
      *(_DWORD *)(v22 + 8 * v23 + 8) = v21;
    }
    v15 = SectionHandle;
    v24 = *(_OWORD *)&v35.AssociatedIrp.MasterIrp;
    AllocationAttributes = (unsigned int)Object;
    *(_OWORD *)v18 = *(_OWORD *)&v35.MdlAddress;
    memset(&v35.MdlAddress, 0, 24);
    v11 = 0LL;
    v35.ThreadListEntry.Flink = (struct _LIST_ENTRY *)0x200000000LL;
    *(_OWORD *)(v18 + 16) = v24;
  }
  if ( a7 )
  {
    if ( *(_QWORD *)(v18 + 32) )
    {
      v25 = a5;
      goto LABEL_28;
    }
  }
  else if ( *(_QWORD *)(v18 + 40) )
  {
    if ( !(unsigned __int8)sub_1407DFBA4(a4, 0LL, a5) )
      goto LABEL_18;
LABEL_19:
    *(_QWORD *)v35.IoStatus.Pointer = *(_QWORD *)(v18 + 8);
    if ( !(unsigned __int8)sub_1407DFBA4(a4, 1LL, v26)
      && !(unsigned __int8)sub_1407DFBA4(a4, 0LL, v28)
      && ((v30 & (unsigned __int8)BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F) == 0 || a7 != v29) )
    {
      *(_DWORD *)(v18 + 48) |= 4u;
    }
    v20 = v29;
    goto LABEL_34;
  }
  LODWORD(v35.IoStatus.Information) = 48;
  *(_QWORD *)&v35.RequestorMode = 0LL;
  LODWORD(v35.UserEvent) = 576;
  v35.UserIosb = 0LL;
  *(_OWORD *)&v35.Overlay.AsynchronousParameters.UserApcRoutine = v11;
  v20 = NtCreateSection(
          &SectionHandle,
          5u,
          (POBJECT_ATTRIBUTES)&v35.IoStatus.Information,
          0LL,
          2u,
          AllocationAttributes,
          *(HANDLE *)v18);
  if ( v20 >= 0 )
  {
    v15 = SectionHandle;
    Object = 0LL;
    v20 = ObReferenceObjectByHandle(SectionHandle, 5u, MmSectionObjectType, 0, &Object, 0LL);
    if ( v20 < 0 )
    {
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_34;
    }
    v25 = a5;
    if ( !a7 )
    {
      *(_QWORD *)(v18 + 40) = Object;
      if ( !(unsigned __int8)sub_1407DFBA4(a4, 0LL, a5) )
      {
LABEL_18:
        *(_DWORD *)(v18 + 48) |= 2u;
        *a10 = 1;
        goto LABEL_19;
      }
      if ( *(_QWORD *)(v18 + 32) != v27
        || !(unsigned __int8)sub_1407DFBA4(a4, 1LL, v26)
        && ((unsigned __int8)v26 & (unsigned __int8)BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F) == 0 )
      {
        goto LABEL_19;
      }
      *(_DWORD *)(v18 + 48) |= 2u;
LABEL_30:
      *a10 = v31;
      goto LABEL_19;
    }
    *(_QWORD *)(v18 + 32) = Object;
LABEL_28:
    if ( (unsigned __int8)sub_1407DFBA4(a4, 1LL, v25) )
      goto LABEL_19;
    *(_DWORD *)(v18 + 48) |= v31;
    goto LABEL_30;
  }
  v15 = SectionHandle;
LABEL_34:
  if ( v15 )
    NtClose(v15);
LABEL_36:
  if ( (Flink & 0x400000000LL) != 0 )
    sub_1407DFFD8(&v35.MdlAddress, *((_QWORD *)a1 + 1));
  return (unsigned int)v20;
}
