/*
 * XREFs of RaIsDeviceDFxPoweredDown @ 0x1C0007120
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C00A2820 (RaDriverSystemControlIrp.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaIsDeviceDFxPoweredDown(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v1 != 1094997074 )
  {
    if ( *(_DWORD *)v1 == 1431193940 )
      return (*(_BYTE *)(v1 + 451) & 2) != 0;
    return 0;
  }
  return (*(_BYTE *)(v1 + 109) & 0x40) != 0;
}
