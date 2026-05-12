/*
 * XREFs of RaUnitQueryInterfaceIrp @ 0x1C00225F8
 * Callers:
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitIgnorePnpIrp @ 0x1C0089C74 (RaUnitIgnorePnpIrp.c)
 *     PortQueryInterfacePdoInfo @ 0x1C0093AF4 (PortQueryInterfacePdoInfo.c)
 */

__int64 __fastcall RaUnitQueryInterfaceIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  GUID *InterfaceType; // rcx
  GUID *v6; // rcx
  __int64 v7; // rcx
  unsigned int InterfacePdoInfo; // r8d
  __int64 v10; // r8
  int v11; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( InterfaceType == &GUID_STORAGE_QUERY_PDO_INFO
    || RtlCompareMemory(InterfaceType, &GUID_STORAGE_QUERY_PDO_INFO, 0x10uLL) == 16 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 && (v11 = *(_DWORD *)(a1 + 48)) != 0 && (unsigned int)(v11 - 5) > 1 )
    {
      InterfacePdoInfo = PortQueryInterfacePdoInfo(
                           (unsigned int)*(_QWORD *)(a1 + 104) + 16,
                           (_DWORD)a2,
                           *(_QWORD *)(v10 + 8),
                           (unsigned int)*(_QWORD *)(a1 + 104) + 8,
                           *(_QWORD *)(a1 + 104) + 16LL,
                           **(_BYTE **)(a1 + 104) & 0x1F,
                           *(_DWORD *)(a1 + 3296));
    }
    else
    {
      a2->IoStatus.Information = 0LL;
      InterfacePdoInfo = -1073741810;
    }
  }
  else
  {
    v6 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
    if ( v6 != &GUID_THERMAL_COOLING_INTERFACE && RtlCompareMemory(v6, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) != 16 )
      return RaUnitIgnorePnpIrp(v7, a2);
    InterfacePdoInfo = -1073741637;
  }
  return RaidCompleteRequestEx(a2, 0, InterfacePdoInfo);
}
