/*
 * XREFs of RaidAdapterRegisterMFNDInterface @ 0x1C00361C0
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 * Callees:
 *     StorLogRegisterMFNDInterface @ 0x1C003C2B8 (StorLogRegisterMFNDInterface.c)
 */

__int64 __fastcall RaidAdapterRegisterMFNDInterface(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rdi
  NTSTATUS v3; // ebx

  v1 = (struct _UNICODE_STRING *)(a1 + 5880);
  v3 = IoRegisterDeviceInterface(
         *(PDEVICE_OBJECT *)(a1 + 32),
         &GUID_DEVINTERFACE_MFND_STORAGE,
         0LL,
         (PUNICODE_STRING)(a1 + 5880));
  if ( v3 >= 0 )
  {
    v3 = IoSetDeviceInterfaceState(v1, 1u);
    if ( v3 < 0 )
      RtlFreeUnicodeString(v1);
  }
  StorLogRegisterMFNDInterface(a1, (unsigned int)v3);
  return (unsigned int)v3;
}
