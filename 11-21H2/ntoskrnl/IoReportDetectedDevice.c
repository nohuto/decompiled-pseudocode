/*
 * XREFs of IoReportDetectedDevice @ 0x14081EB20
 * Callers:
 *     sub_14081E150 @ 0x14081E150 (sub_14081E150.c)
 * Callees:
 *     sub_14024D9D8 @ 0x14024D9D8 (sub_14024D9D8.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_1402DEAB0 @ 0x1402DEAB0 (sub_1402DEAB0.c)
 *     sub_1402DEADC @ 0x1402DEADC (sub_1402DEADC.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_1403A6700 @ 0x1403A6700 (sub_1403A6700.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406CFCE0 @ 0x1406CFCE0 (sub_1406CFCE0.c)
 *     sub_140748D08 @ 0x140748D08 (sub_140748D08.c)
 *     sub_140764FE4 @ 0x140764FE4 (sub_140764FE4.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140768024 @ 0x140768024 (sub_140768024.c)
 *     sub_140768AF8 @ 0x140768AF8 (sub_140768AF8.c)
 *     sub_140768F5C @ 0x140768F5C (sub_140768F5C.c)
 *     sub_14076ACE4 @ 0x14076ACE4 (sub_14076ACE4.c)
 *     sub_14076B554 @ 0x14076B554 (sub_14076B554.c)
 *     sub_14076E894 @ 0x14076E894 (sub_14076E894.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779C10 @ 0x140779C10 (sub_140779C10.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_14077F2EC @ 0x14077F2EC (sub_14077F2EC.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     sub_14081EAC0 @ 0x14081EAC0 (sub_14081EAC0.c)
 *     sub_14081EFBC @ 0x14081EFBC (sub_14081EFBC.c)
 *     sub_14081F468 @ 0x14081F468 (sub_14081F468.c)
 *     sub_14081F4F4 @ 0x14081F4F4 (sub_14081F4F4.c)
 *     sub_14081F788 @ 0x14081F788 (sub_14081F788.c)
 *     sub_14081FDD8 @ 0x14081FDD8 (sub_14081FDD8.c)
 *     sub_140859598 @ 0x140859598 (sub_140859598.c)
 *     sub_14085C93C @ 0x14085C93C (sub_14085C93C.c)
 *     sub_140945128 @ 0x140945128 (sub_140945128.c)
 *     sub_140946A74 @ 0x140946A74 (sub_140946A74.c)
 *     sub_140946ADC @ 0x140946ADC (sub_140946ADC.c)
 *     sub_140957F9C @ 0x140957F9C (sub_140957F9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoReportDetectedDevice(
        PDRIVER_OBJECT DriverObject,
        INTERFACE_TYPE LegacyBusType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PCM_RESOURCE_LIST ResourceList,
        PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
        BOOLEAN ResourceAssigned,
        PDEVICE_OBJECT *DeviceObject)
{
  PDRIVER_EXTENSION DriverExtension; // r15
  UNICODE_STRING *p_ServiceKeyName; // r15
  PVOID DeviceNode; // rbx
  PDEVICE_OBJECT v13; // rax
  const UNICODE_STRING *v15; // rcx
  NTSTATUS result; // eax
  NTSTATUS appended; // edi
  int v18; // eax
  int v19; // r13d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rbx
  unsigned __int16 Length; // cx
  unsigned __int64 v23; // r12
  _WORD *v24; // rax
  __int64 v25; // rcx
  __int16 v26; // ax
  _QWORD *v27; // rax
  __int64 v28; // r8
  PIO_RESOURCE_REQUIREMENTS_LIST v29; // r15
  unsigned int v30; // eax
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx
  __int16 v33; // ax
  struct _DEVICE_OBJECT *v34; // r12
  PVOID v35; // rcx
  int v36; // eax
  __int64 Pool2; // rax
  int v38; // eax
  NTSTATUS v39; // eax
  int v40; // r8d
  int v41; // edx
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rcx
  int v45; // eax
  __int16 *v46; // r13
  __int64 v47; // rdx
  PDRIVER_OBJECT v48; // rdi
  ULONG Flags; // eax
  UNICODE_STRING *v50; // rdi
  int v51; // eax
  unsigned int v52; // eax
  int v53; // ecx
  unsigned int v54; // edi
  void *v55; // rax
  void *v56; // rsi
  __int64 v57; // r8
  int v58; // edx
  __int64 v59; // rcx
  BOOL *v60; // [rsp+20h] [rbp-E0h]
  __int64 v61; // [rsp+28h] [rbp-D8h]
  __int64 v62; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+38h] [rbp-C8h]
  int v64; // [rsp+40h] [rbp-C0h]
  char v65; // [rsp+50h] [rbp-B0h] BYREF
  char v66; // [rsp+51h] [rbp-AFh] BYREF
  char v67; // [rsp+52h] [rbp-AEh] BYREF
  char v68; // [rsp+53h] [rbp-ADh]
  unsigned int v69; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v71; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  __int64 v73; // [rsp+78h] [rbp-88h] BYREF
  int v74; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v77; // [rsp+98h] [rbp-68h] BYREF
  int v78; // [rsp+A0h] [rbp-60h]
  PDRIVER_OBJECT v79; // [rsp+A8h] [rbp-58h]
  _WORD *v80; // [rsp+B0h] [rbp-50h] BYREF
  __int16 *v81; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-40h] BYREF
  PIO_RESOURCE_REQUIREMENTS_LIST v83; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v85; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v86; // [rsp+E8h] [rbp-18h] BYREF
  _WORD *j; // [rsp+F8h] [rbp-8h]
  PDEVICE_OBJECT *v88; // [rsp+100h] [rbp+0h]
  _WORD v89[200]; // [rsp+110h] [rbp+10h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  v83 = ResourceRequirements;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  v88 = DeviceObject;
  DeviceNode = 0LL;
  v79 = DriverObject;
  v66 = 0;
  v13 = *DeviceObject;
  *(_QWORD *)&Destination.Length = 26214400LL;
  v81 = 0LL;
  v69 = 0;
  v82 = 0LL;
  v74 = 0;
  v77 = 0LL;
  v65 = 0;
  v73 = 0LL;
  v71 = 0;
  Handle = 0LL;
  Destination.Buffer = v89;
  KeyHandle = 0LL;
  v68 = 0;
  Object = 0LL;
  P = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  if ( v13 )
  {
    DeviceNode = v13->DeviceObjectExtension->DeviceNode;
    v73 = (__int64)DeviceNode;
    if ( DeviceNode )
      goto LABEL_5;
    return -1073741578;
  }
  if ( (DriverObject->Flags & 4) == 0 )
  {
    v15 = p_ServiceKeyName;
    goto LABEL_4;
  }
  Buffer = p_ServiceKeyName->Buffer;
  for ( i = &Buffer[((unsigned __int64)p_ServiceKeyName->Length >> 1) - 1]; ; --i )
  {
    if ( i == Buffer )
      return -1073741585;
    if ( *i == 92 )
      break;
  }
  *((_QWORD *)&v85 + 1) = i + 1;
  v33 = p_ServiceKeyName->Length - 2 * ((__int64)(unsigned int)((_DWORD)i + 2 - LODWORD(p_ServiceKeyName->Buffer)) >> 1);
  v15 = (const UNICODE_STRING *)&v85;
  LOWORD(v85) = v33;
  WORD1(v85) = v33;
LABEL_4:
  result = sub_14081F468(v15, &Destination);
  if ( result >= 0 )
  {
LABEL_5:
    appended = sub_140779DC4((__int64 **)&P);
    if ( appended < 0 )
      goto LABEL_35;
    sub_14077572C(1);
    if ( DeviceNode || (v79->Flags & 4) != 0 )
    {
      v19 = 0;
    }
    else
    {
      v18 = sub_14081F788((unsigned int)LegacyBusType, BusNumber, SlotNumber, &v73);
      v19 = 0;
      appended = v18;
      if ( v18 >= 0 )
        v71 = v73 != 0;
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
    v21 = v73;
    if ( v73 )
    {
LABEL_21:
      if ( v71 )
      {
        if ( (unsigned int)sub_1402DEADC(v21)
          || (*(_DWORD *)(v21 + 396) & 0x6000) != 0
          && ((v52 = *(_DWORD *)(v21 + 404), v52 > 0x1C) || (v53 = 268697602, !_bittest(&v53, v52))) )
        {
          ObfDereferenceObject(*(PVOID *)(v21 + 32));
          appended = -1073741810;
          goto LABEL_59;
        }
        if ( !v28 )
          sub_140764FE4(v21);
      }
      if ( !Handle )
      {
        appended = sub_14076E894(*(_QWORD *)(v21 + 32), (__int64)&Handle, 983103);
        if ( appended < 0 )
          goto LABEL_59;
      }
    }
    else
    {
      appended = RtlAppendUnicodeToString(&Destination, asc_140865B20);
      if ( appended < 0 )
        goto LABEL_35;
      Length = Destination.Length;
      v78 = Destination.Length;
      v23 = (400 - (unsigned __int64)Destination.Length) >> 1;
      v24 = &v89[(unsigned __int64)Destination.Length >> 1];
      for ( j = v24; ; v24 = j )
      {
        Destination.Length = Length;
        LODWORD(v62) = v19;
        v80 = v24;
        sub_1402DFBC4(v24, v23, &v80, 0LL, 0, L"%04u", v62);
        v25 = &v80[-((unsigned __int64)Destination.Length >> 1)] - v89;
        if ( (_DWORD)v25 == -1 )
          v26 = 400 - Destination.Length;
        else
          v26 = 2 * v25;
        Destination.Length += v26;
        appended = sub_140768AF8(*(__int64 *)&qword_140D00AC0, (__int64)Destination.Buffer, 983103, &Handle, &v65, 0);
        if ( appended < 0 )
          goto LABEL_59;
        if ( v65 )
          goto LABEL_20;
        v71 = 0;
        v60 = &v71;
        if ( (unsigned __int8)sub_14081EFBC(&Destination, Handle, p_ServiceKeyName, ResourceList) )
          break;
        ZwClose(Handle);
        Length = v78;
        ++v19;
      }
      v27 = sub_140779C10((__int64)&Destination, 0x746C6644u);
      Object = v27;
      if ( !v27 )
      {
        appended = -1073741823;
        v21 = 0LL;
        goto LABEL_59;
      }
      v21 = *(_QWORD *)(v27[39] + 40LL);
      v73 = v21;
LABEL_20:
      if ( v21 )
        goto LABEL_21;
      appended = sub_140859598(&Object);
      if ( appended < 0 )
        goto LABEL_59;
      v34 = (struct _DEVICE_OBJECT *)Object;
      v35 = Object;
      v68 = 1;
      *((_DWORD *)Object + 12) |= 0x1000u;
      v36 = sub_1406CFCE0((__int64)v35, (__int64)&v73);
      v21 = v73;
      if ( v36 == -1073740946 || !v73 )
      {
        IoDeleteDevice(v34);
        appended = -1073741670;
        goto LABEL_59;
      }
      if ( (v79->Flags & 4) == 0 )
      {
        Pool2 = ExAllocatePool2(256LL, p_ServiceKeyName->Length, 1215327824LL);
        *(_QWORD *)(v21 + 64) = Pool2;
        if ( !Pool2 )
          goto LABEL_77;
        *(_WORD *)(v21 + 58) = p_ServiceKeyName->Length;
        v38 = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 56), p_ServiceKeyName, 0);
        appended = v38;
        if ( v38 < 0 )
          goto LABEL_78;
      }
      v38 = sub_14085C93C(v21, (unsigned int)Destination.Length + 2);
      appended = v38;
      if ( v38 < 0 )
        goto LABEL_78;
      v39 = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 40), &Destination, 0);
      appended = v39;
      if ( v39 < 0 )
      {
        v40 = v39;
        v41 = 3;
        goto LABEL_86;
      }
      *(_WORD *)(*(_QWORD *)(v21 + 48) + 2 * ((unsigned __int64)*(unsigned __int16 *)(v21 + 40) >> 1)) = 0;
      v74 = 32;
      v45 = sub_14076FE20(
              *(__int64 *)&qword_140D00AC0,
              *(_QWORD *)(v21 + 48),
              (__int64)Handle,
              0xBu,
              4u,
              (__int64)&v74,
              4u,
              0);
      appended = v45;
      if ( v45 < 0 )
        goto LABEL_80;
      v66 = -1;
      v45 = sub_14077198C(
              *(__int64 *)&qword_140D00AC0,
              *(_QWORD *)(v21 + 48),
              1,
              (__int64)Handle,
              0LL,
              (__int64)&qword_14000EC40,
              17,
              (__int64)&v66,
              1u,
              0);
      appended = v45;
      if ( v45 < 0 )
        goto LABEL_80;
      v45 = sub_140779CA0(&v81, &v69, &p_ServiceKeyName->Length);
      appended = v45;
      if ( v45 < 0 )
        goto LABEL_80;
      v46 = v81;
      appended = sub_1402DCD64(v81, v69, &v82);
      if ( appended < 0 )
      {
        sub_14077BAB8(v46, (__int64)p_ServiceKeyName);
        v40 = appended;
        v41 = 19;
LABEL_86:
        sub_140765114(v21, v41, v40);
        goto LABEL_59;
      }
      appended = sub_14076FE20(
                   *(__int64 *)&qword_140D00AC0,
                   *(_QWORD *)(v21 + 48),
                   (__int64)Handle,
                   5u,
                   1u,
                   (__int64)v46,
                   (int)v82 + 2,
                   0);
      sub_14077BAB8(v46, (__int64)p_ServiceKeyName);
      if ( appended < 0 )
      {
        v42 = appended;
LABEL_81:
        v43 = 19;
LABEL_82:
        v44 = v21;
LABEL_84:
        sub_140765114(v44, v43, v42);
LABEL_59:
        if ( v65 )
        {
          if ( KeyHandle )
            ZwDeleteKey(KeyHandle);
          if ( v77 )
            ZwDeleteKey(v77);
          if ( Handle )
            ZwDeleteKey(Handle);
          sub_140768024(v21 + 40);
          sub_1403A6700((_QWORD *)v21);
          IoDeleteDevice(*(PDEVICE_OBJECT *)(v21 + 32));
          ObfDereferenceObject(*(PVOID *)(v21 + 32));
        }
LABEL_35:
        ExReleaseResourceLite(&stru_140C462A0);
        sub_1402F9540((__int64)KeGetCurrentThread());
        sub_140775698(1);
        if ( KeyHandle )
          ZwClose(KeyHandle);
        if ( v77 )
          ZwClose(v77);
        if ( Handle )
          ZwClose(Handle);
        if ( P )
          sub_140779A50((PVOID **)P);
        return appended;
      }
      v77 = 0LL;
      v45 = sub_14077F2EC(*(__int64 *)&qword_140D00AC0, *(_QWORD *)(v21 + 48), 19, 0, 983103, 1, (__int64)&v77, 0LL);
      appended = v45;
      if ( v45 < 0 )
        goto LABEL_80;
      v45 = sub_14081EAC0(v77, L"DeviceReported");
      appended = v45;
      if ( v45 < 0 )
        goto LABEL_80;
      v48 = v79;
      Flags = v79->Flags;
      if ( (Flags & 4) == 0 )
      {
        LOBYTE(v47) = 1;
        sub_14076B554((__int64)&Destination, v47, v21 + 56, 1);
        Flags = v48->Flags;
      }
      Destination.Buffer = 0LL;
      v50 = (UNICODE_STRING *)&v85;
      *(_DWORD *)&Destination.Length = 0;
      if ( (Flags & 4) == 0 )
        v50 = p_ServiceKeyName;
      v69 = 400;
      if ( (int)sub_14081F4F4(v50, v89, &v69) >= 0 && v69 > 2 )
      {
        WORD1(v86) = 400;
        *((_QWORD *)&v86 + 1) = v89;
        LOWORD(v86) = v69 - 2;
        v50 = (UNICODE_STRING *)&v86;
      }
      v51 = sub_140957F9C(v34, v50, ResourceList);
      appended = v51;
      v44 = v21;
      if ( v51 < 0 )
      {
        v42 = v51;
        v43 = 19;
        goto LABEL_84;
      }
      sub_14076FB70(v21, 17);
      *(_DWORD *)(v21 + 660) = *((_DWORD *)qword_140C46278 + 165);
      sub_1402DE844(v21, 772);
      sub_14024D9D8((__int64)qword_140C46278, v21);
      v38 = sub_14076ACE4((__int64)v34, v21 + 40);
      appended = v38;
      if ( v38 < 0 )
      {
LABEL_78:
        v42 = v38;
        goto LABEL_79;
      }
      ObfReferenceObject(v34);
    }
    v29 = v83;
    if ( !ResourceList && !v83
      || (v45 = sub_14077F2EC(
                  *(__int64 *)&qword_140D00AC0,
                  *(_QWORD *)(v21 + 48),
                  20,
                  0,
                  983103,
                  1,
                  (__int64)&KeyHandle,
                  0LL),
          appended = v45,
          v45 >= 0)
      && (!ResourceList || (v45 = sub_140946ADC(KeyHandle), appended = v45, v45 >= 0))
      && (!v29 || (v45 = sub_140946A74(KeyHandle), appended = v45, v45 >= 0)) )
    {
      if ( ResourceAssigned )
      {
        sub_14076FB70(v21, 256);
        sub_14081EAC0(Handle, L"NoResourceAtInitTime");
        v30 = sub_140748D08(ResourceList);
        sub_14081FDD8(v21, ResourceList, v30);
      }
      else if ( ResourceList && ResourceList->Count && ResourceList->List[0].PartialResourceList.Count )
      {
        v54 = sub_140748D08(ResourceList);
        v55 = (void *)ExAllocatePool2(256LL, v54, 1198550608LL);
        v56 = v55;
        if ( !v55 )
        {
LABEL_77:
          v42 = -1073741670;
          appended = -1073741670;
LABEL_79:
          v43 = 3;
          goto LABEL_82;
        }
        memmove(v55, ResourceList, v54);
        v61 = *(_QWORD *)(v21 + 32);
        v57 = *(_QWORD *)(v61 + 8);
        v67 = 0;
        appended = sub_140945128(0, v58, v57, 0, (_DWORD)v60, v61, (__int64)v56, v63, v64, (__int64)&v67);
        ExFreePoolWithTag(v56, 0x47706E50u);
        if ( appended >= 0 && !v67 )
        {
LABEL_32:
          *(_DWORD *)(v21 + 660) = *(_DWORD *)(*(_QWORD *)(v21 + 16) + 660LL);
          sub_140768F5C(v21);
          sub_1402DE844(v21, 777);
          if ( v68 )
            sub_14076FB70(v21, 0x80000000);
          *v88 = *(PDEVICE_OBJECT *)(v21 + 32);
          goto LABEL_35;
        }
        if ( !sub_1402DEAB0(v21) )
          sub_140765114(v59, 12, appended);
        appended = -1073741800;
      }
      else
      {
        sub_14076FB70(v21, 256);
      }
      if ( appended < 0 )
        goto LABEL_59;
      goto LABEL_32;
    }
LABEL_80:
    v42 = v45;
    goto LABEL_81;
  }
  return result;
}
