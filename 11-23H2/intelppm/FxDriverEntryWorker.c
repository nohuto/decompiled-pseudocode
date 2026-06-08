/*
 * XREFs of FxDriverEntryWorker @ 0x1C0002984
 * Callers:
 *     FxDriverEntry @ 0x1C0002950 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubInitTypes@@YAJXZ @ 0x1C0002A8C (-FxStubInitTypes@@YAJXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0002AE0 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubDriverEntryFailure@@YAXXZ @ 0x1C000839C (-FxStubDriverEntryFailure@@YAXXZ.c)
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000840C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     DriverEntry @ 0x1C00482F8 (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  struct _WDF_BIND_INFO *v5; // rcx
  int inited; // ebx
  NTSTATUS v7; // eax
  void (__fastcall *DriverUnload)(_DRIVER_OBJECT *); // rax

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (wchar_t *)&unk_1C001FA20;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind(DriverObject, &DestinationString, &WdfBindInfo, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    inited = FxStubBindClasses(v5);
    if ( inited >= 0 )
    {
      inited = FxStubInitTypes();
      if ( inited >= 0 )
      {
        v7 = DriverEntry(DriverObject, RegistryPath);
        inited = v7;
        if ( v7 >= 0 )
        {
          if ( WdfDriverGlobals->DisplaceDriverUnload )
          {
            DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))qword_1C001F970;
            if ( DriverObject->DriverUnload )
              DriverUnload = DriverObject->DriverUnload;
            qword_1C001F970 = (__int64)DriverUnload;
            DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
          }
          return 0;
        }
        DbgPrintEx(
          (ULONG)77,
          (ULONG)0,
          "DriverEntry failed 0x%x for driver %wZ\n",
          (unsigned int)v7,
          &DestinationString);
        FxStubDriverEntryFailure();
      }
    }
    FxStubDriverUnloadCommon();
    return inited;
  }
  return result;
}
