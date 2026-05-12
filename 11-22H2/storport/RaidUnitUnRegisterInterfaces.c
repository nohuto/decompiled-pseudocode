/*
 * XREFs of RaidUnitUnRegisterInterfaces @ 0x1C001D33C
 * Callers:
 *     RaUnitDeleteDeviceIrp @ 0x1C0021794 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C005DB38 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C00A1444 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     PortMapDeleteLunEntry @ 0x1C001D648 (PortMapDeleteLunEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall RaidUnitUnRegisterInterfaces(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  void (*v5)(void); // rax

  v1 = *(_DWORD *)(a1 + 96);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  if ( v3 )
    v4 = PortMapDeleteLunEntry(*(unsigned int *)(v3 + 56), (unsigned __int8)v1, BYTE1(v1), BYTE2(v1));
  if ( *(_QWORD *)(a1 + 3456) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 3448), 0);
  if ( *(_QWORD *)(a1 + 1888) && (*(_BYTE *)(a1 + 450) & 8) != 0 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1880), 0);
    *(_BYTE *)(a1 + 450) &= ~8u;
  }
  if ( *(_QWORD *)(a1 + 2008) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2000), 0);
  v5 = *(void (**)(void))(a1 + 960);
  if ( v5 && *(_QWORD *)(a1 + 888) )
  {
    v5();
    memset_0((void *)(a1 + 880), 0, 0x58uLL);
  }
  return v4;
}
