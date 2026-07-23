/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x14079CD68
 * Callers:
 *     PiSwIrpPropertySet @ 0x14079C8E8 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x14081B064 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14081B3F4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x14081B968 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpSetLifetime @ 0x14085C334 (PiSwIrpSetLifetime.c)
 *     PiSwIrpGetLifetime @ 0x140967730 (PiSwIrpGetLifetime.c)
 * Callees:
 *     <none>
 */

char __fastcall PiSwDeviceOperationsAllowed(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( !a1 || !*(_QWORD *)(a1 + 80) || (*(_DWORD *)(a1 + 4) & 4) == 0 || *(_QWORD *)(a1 + 88) )
    return 0;
  return v1;
}
