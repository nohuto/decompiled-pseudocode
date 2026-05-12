/*
 * XREFs of RaUnitScsiMiniportIoctl @ 0x1C0011720
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000FA68 (RaidUnitPoFxActivateComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C00115B4 (RaidGetSrbIoctlFromIrp.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00117BC (RaidUnitPoFxIdleComponent.c)
 */

__int64 __fastcall RaUnitScsiMiniportIoctl(__int64 a1, IRP *a2)
{
  signed int SrbIoctlFromIrp; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((__int64)a2, &v8, &v7, &v10, 1);
  if ( SrbIoctlFromIrp < 0 )
    return RaidCompleteRequestEx(a2, 0, SrbIoctlFromIrp);
  RaidUnitPoFxActivateComponent(a1, 0LL, 1LL, &v9);
  v5 = RaidAdapterScsiMiniportIoctlWithAddress(
         *(_QWORD *)(a1 + 24),
         a2,
         *(_BYTE *)(a1 + 96),
         *(_BYTE *)(a1 + 97),
         *(_BYTE *)(a1 + 98),
         1);
  RaidUnitPoFxIdleComponent(a1, 0LL, 0LL, &v9);
  return v5;
}
