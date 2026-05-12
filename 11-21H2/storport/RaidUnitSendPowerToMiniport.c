/*
 * XREFs of RaidUnitSendPowerToMiniport @ 0x1C001703C
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0016C00 (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C000C930 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C001C0A8 (RaCallMiniportUnitControl.c)
 */

__int64 __fastcall RaidUnitSendPowerToMiniport(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v4 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 3) )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v6 = *(_QWORD *)(a1 + 24);
    v8 = a1 + 88;
    v9 = *(_DWORD *)(v5 + 32);
    v10 = *(_DWORD *)(v5 + 24);
    return (unsigned int)RaCallMiniportUnitControl(v6 + 336, 3LL, &v8);
  }
  return v4;
}
