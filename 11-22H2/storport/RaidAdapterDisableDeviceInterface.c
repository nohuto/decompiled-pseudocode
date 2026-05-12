/*
 * XREFs of RaidAdapterDisableDeviceInterface @ 0x1C003553C
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00A6FD4 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     StorDeleteScsiSymbolicLink @ 0x1C005C25C (StorDeleteScsiSymbolicLink.c)
 *     PortMapDeleteAdapterEntry @ 0x1C0078350 (PortMapDeleteAdapterEntry.c)
 */

NTSTATUS __fastcall RaidAdapterDisableDeviceInterface(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v3; // ebp
  HANDLE *v4; // rsi
  NTSTATUS result; // eax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 1920) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1912), 0);
  v3 = *(unsigned __int8 *)(a1 + 416);
  if ( *(_BYTE *)(a1 + 416) )
  {
    v4 = (HANDLE *)(a1 + 2016);
    do
    {
      if ( v1 >= 0xFF )
        break;
      ZwClose(*v4);
      ++v1;
      ++v4;
    }
    while ( v1 < v3 );
  }
  result = PortMapDeleteAdapterEntry(*(unsigned int *)(a1 + 56));
  if ( (*(_BYTE *)(a1 + 104) & 4) != 0 )
  {
    result = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 104) &= 0xF9u;
  }
  if ( *(_DWORD *)(a1 + 56) != -1 )
  {
    result = StorDeleteScsiSymbolicLink();
    *(_DWORD *)(a1 + 56) = -1;
  }
  return result;
}
