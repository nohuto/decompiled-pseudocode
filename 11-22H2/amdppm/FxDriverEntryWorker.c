/*
 * XREFs of FxDriverEntryWorker @ 0x1C0003664
 * Callers:
 *     FxDriverEntry @ 0x1C0003630 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C00035EC (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0003834 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubInitTypes@@YAJXZ @ 0x1C0003A9C (-FxStubInitTypes@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     DriverEntry @ 0x1C003F178 (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  struct _WDF_BIND_INFO *v5; // rcx
  struct _WDF_BIND_INFO *v6; // rcx
  int inited; // ebx
  NTSTATUS v8; // eax
  void (__fastcall *DriverUnload)(_DRIVER_OBJECT *); // rax
  GUID *v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  _QWORD v12[3]; // [rsp+3Ch] [rbp-1Ch] BYREF

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (wchar_t *)&unk_1C0012290;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind(DriverObject, &DestinationString, &WdfBindInfo, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    inited = FxStubBindClasses(v5);
    if ( inited < 0 || (inited = FxStubInitTypes(), inited < 0) )
    {
LABEL_10:
      FxStubDriverUnloadCommon(v6);
      return inited;
    }
    v8 = DriverEntry(DriverObject, RegistryPath);
    inited = v8;
    if ( v8 < 0 )
    {
      DbgPrintEx((ULONG)77, (ULONG)0, "DriverEntry failed 0x%x for driver %wZ\n", (unsigned int)v8, &DestinationString);
      if ( off_1C0012228 != &__KMDF_CLASS_BIND_START )
      {
        memset(v12, 0, 12);
        v10 = &GUID_WDF_LOADER_INTERFACE_DRIVER_ENTRY_FAILURE;
        v11 = 24;
        if ( (int)WdfLdrQueryInterface(&v10) >= 0 )
          (*(void (__fastcall **)(void *, PWDF_DRIVER_GLOBALS))((char *)v12 + 4))(&WdfBindInfo, WdfDriverGlobals);
      }
      goto LABEL_10;
    }
    if ( WdfDriverGlobals->DisplaceDriverUnload )
    {
      DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))qword_1C0012498;
      if ( DriverObject->DriverUnload )
        DriverUnload = DriverObject->DriverUnload;
      qword_1C0012498 = (__int64)DriverUnload;
      DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
    }
    return 0;
  }
  return result;
}
