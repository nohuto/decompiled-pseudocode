/*
 * XREFs of StorPortInitialize @ 0x1C00428F0
 * Callers:
 *     sub_1C00ABC80 @ 0x1C00ABC80 (sub_1C00ABC80.c)
 * Callees:
 *     sub_1C00224A4 @ 0x1C00224A4 (sub_1C00224A4.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0041AC0 @ 0x1C0041AC0 (sub_1C0041AC0.c)
 *     sub_1C0041B98 @ 0x1C0041B98 (sub_1C0041B98.c)
 *     sub_1C0043564 @ 0x1C0043564 (sub_1C0043564.c)
 *     sub_1C00A96E4 @ 0x1C00A96E4 (sub_1C00A96E4.c)
 *     sub_1C00A9738 @ 0x1C00A9738 (sub_1C00A9738.c)
 *     sub_1C00A982C @ 0x1C00A982C (sub_1C00A982C.c)
 *     sub_1C00A993C @ 0x1C00A993C (sub_1C00A993C.c)
 *     sub_1C00A99CC @ 0x1C00A99CC (sub_1C00A99CC.c)
 *     sub_1C00A9CB8 @ 0x1C00A9CB8 (sub_1C00A9CB8.c)
 *     sub_1C00A9D4C @ 0x1C00A9D4C (sub_1C00A9D4C.c)
 *     sub_1C00B5044 @ 0x1C00B5044 (sub_1C00B5044.c)
 */

__int64 __fastcall StorPortInitialize(PDRIVER_OBJECT DriverObject, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // r12
  int v9; // eax
  NTSTATUS v10; // edi
  void (__fastcall *v11)(PDRIVER_OBJECT, __int64); // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS v19; // r9d
  void (__fastcall *v20)(PDRIVER_OBJECT); // rax
  __int64 v22; // [rsp+58h] [rbp-61h]
  __int64 v23; // [rsp+60h] [rbp-59h]
  __int64 v24; // [rsp+68h] [rbp-51h]
  __int64 v25; // [rsp+70h] [rbp-49h]
  __int64 v26; // [rsp+78h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-39h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+90h] [rbp-29h] BYREF
  _PCW_REGISTRATION_INFORMATION Info; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v30; // [rsp+D0h] [rbp+17h]
  PVOID DriverObjectExtension; // [rsp+120h] [rbp+67h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+128h] [rbp+6Fh] BYREF

  DeviceObject = 0LL;
  DriverObjectExtension = 0LL;
  LODWORD(v30) = 0;
  DestinationString = 0LL;
  v8 = 0;
  SymbolicLinkName = 0LL;
  memset(&Info, 0, sizeof(Info));
  if ( !byte_1C0093C78 )
  {
    sub_1C00B5044();
    byte_1C0093C78 = 1;
  }
  if ( !DriverObject || !a2 || !a3 )
  {
    v10 = -1073741811;
LABEL_61:
    if ( _InterlockedExchangeAdd(&dword_1C0093C5C, 0xFFFFFFFF) == 1 && byte_1C0093C58 )
    {
      sub_1C00A99CC();
      byte_1C0093C58 = 0;
    }
    if ( DriverObjectExtension )
      sub_1C00A9738(DriverObjectExtension);
    DriverObjectExtension = 0LL;
    if ( v8 )
    {
      v20 = *(void (__fastcall **)(PDRIVER_OBJECT))(a3 + 168);
      if ( v20 )
        v20(DriverObject);
    }
    return (unsigned int)v10;
  }
  v9 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 != 208 && v9 != 176 && v9 != 136
    || !*(_QWORD *)(a3 + 8)
    || !*(_QWORD *)(a3 + 32)
    || !*(_QWORD *)(a3 + 16)
    || !*(_QWORD *)(a3 + 40) )
  {
    v10 = -1073741735;
    goto LABEL_61;
  }
  if ( _InterlockedIncrement(&dword_1C0093C5C) == 1 )
  {
    if ( !byte_1C0093C58 )
    {
      *(_QWORD *)&stru_1C0093880.Type = 0LL;
      stru_1C0093880.DriverObject = (struct _DRIVER_OBJECT *)&unk_1C0089710;
      stru_1C0093880.NextDevice = 0LL;
      stru_1C0093880.CurrentIrp = 0LL;
      stru_1C0093880.Timer = (PIO_TIMER)1;
      sub_1C00A9D4C();
      stru_1C0093880.CurrentIrp = 0LL;
      sub_1C00A9CB8();
      byte_1C0093C58 = 1;
    }
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (PCUNICODE_STRING)L"&(";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&unk_1C0089270;
    v30 = 0LL;
    Info.Callback = (PPCW_CALLBACK)sub_1C005E920;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&Registration, &Info) < 0 )
      Registration = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (PCUNICODE_STRING)L"(*";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&unk_1C0089270;
    v30 = 0LL;
    Info.Callback = (PPCW_CALLBACK)sub_1C0060CF0;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&qword_1C0093B78, &Info) < 0 )
      qword_1C0093B78 = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (PCUNICODE_STRING)L".0";
    *(_QWORD *)&Info.CounterCount = 56LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&unk_1C0089270;
    v30 = 0LL;
    Info.Callback = (PPCW_CALLBACK)sub_1C0060B80;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&qword_1C0093B98, &Info) < 0 )
      qword_1C0093B98 = 0LL;
    *(_QWORD *)&Info.Version = 256LL;
    Info.Name = (PCUNICODE_STRING)L"&(";
    *(_QWORD *)&Info.CounterCount = 2LL;
    Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&unk_1C0088D10;
    v30 = 0LL;
    Info.Callback = (PPCW_CALLBACK)sub_1C005E8E0;
    Info.CallbackContext = 0LL;
    if ( PcwRegister(&qword_1C0093B70, &Info) < 0 )
      qword_1C0093B70 = 0LL;
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C0043564(off_1C0093070->AttachedDevice, 10LL, &unk_1C0089EB8, DriverObject, a2, a3, a4);
  }
  if ( *(_DWORD *)a3 == 176 || *(_DWORD *)a3 == 208 && (*(_DWORD *)(a3 + 184) & 1) != 0 )
  {
    v11 = *(void (__fastcall **)(PDRIVER_OBJECT, __int64))(a3 + 160);
    if ( v11 )
    {
      v11(DriverObject, a2);
      v8 = 1;
    }
  }
  v12 = sub_1C00224A4();
  if ( !v12 )
  {
    v10 = -1073741801;
    goto LABEL_61;
  }
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, StorPortGetSrb);
  if ( !DriverObjectExtension )
  {
    v10 = IoAllocateDriverObjectExtension(DriverObject, StorPortGetSrb, 0x70u, &DriverObjectExtension);
    if ( v10 < 0 )
      goto LABEL_61;
    sub_1C00A96E4(DriverObjectExtension);
    v10 = sub_1C00A982C(DriverObjectExtension, DriverObject, v12, a2);
    if ( v10 < 0 )
      goto LABEL_61;
  }
  v15 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 208 )
  {
    if ( (byte_1C0093A00 & 0x10) != 0 )
      sub_1C0041B98(
        208LL,
        v13,
        v14,
        208,
        *(_DWORD *)(a3 + 4),
        *(_DWORD *)(a3 + 64),
        *(_DWORD *)(a3 + 68),
        *(_DWORD *)(a3 + 72),
        *(_DWORD *)(a3 + 184),
        *(_DWORD *)(a3 + 188),
        *(_DWORD *)(a3 + 192),
        *(_QWORD *)(a3 + 136),
        *(_QWORD *)(a3 + 144),
        *(_QWORD *)(a3 + 152),
        *(_QWORD *)(a3 + 160),
        *(_QWORD *)(a3 + 168));
  }
  else
  {
    if ( v15 == 176 )
    {
      if ( (byte_1C0093A00 & 0x10) == 0 )
        goto LABEL_48;
      v26 = *(_QWORD *)(a3 + 168);
      v25 = *(_QWORD *)(a3 + 160);
      v24 = *(_QWORD *)(a3 + 152);
      v23 = *(_QWORD *)(a3 + 144);
      v22 = *(_QWORD *)(a3 + 136);
    }
    else
    {
      if ( (byte_1C0093A00 & 0x10) == 0 )
        goto LABEL_48;
      LOBYTE(v26) = 0;
      LOBYTE(v25) = 0;
      LOBYTE(v24) = 0;
      LOBYTE(v23) = 0;
      LOBYTE(v22) = 0;
    }
    sub_1C0041B98(
      208LL,
      v13,
      v14,
      v15,
      *(_DWORD *)(a3 + 4),
      *(_DWORD *)(a3 + 64),
      *(_DWORD *)(a3 + 68),
      *(_DWORD *)(a3 + 72),
      0,
      0,
      0,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
LABEL_48:
  v16 = sub_1C00A993C(DriverObjectExtension, a3);
  v10 = v16;
  if ( v16 >= 0 )
    v8 = 0;
  *(_WORD *)(a3 + 104) |= 0x10u;
  if ( !byte_1C0093AEA || (*(_DWORD *)(a3 + 184) & 0x8000) == 0 || ::DeviceObject )
  {
    if ( v16 >= 0 )
      return (unsigned int)v10;
    goto LABEL_61;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device\\StorportControl");
  v19 = IoCreateDevice(DriverObject, 4u, &DestinationString, 0x15u, 0x100u, 0, &DeviceObject);
  if ( v19 < 0 )
  {
    if ( (byte_1C0093A07 & 2) != 0 )
      sub_1C0041AC0(v17, &stru_1C0089038, v18, v19);
  }
  else
  {
    ::DeviceObject = DeviceObject;
    *(_DWORD *)DeviceObject->DeviceExtension = 1146246738;
    RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\StorportControl");
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
  }
  return 0;
}
