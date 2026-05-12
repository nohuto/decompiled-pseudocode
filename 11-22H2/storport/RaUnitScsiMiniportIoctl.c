/*
 * XREFs of RaUnitScsiMiniportIoctl @ 0x1C0008434
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidGetSrbIoctlFromIrp @ 0x1C00084D0 (RaidGetSrbIoctlFromIrp.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0008784 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0008870 (RaidUnitPoFxActivateComponent.c)
 */

__int64 __fastcall RaUnitScsiMiniportIoctl(__int64 a1, IRP *a2)
{
  signed int SrbIoctlFromIrp; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  char v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp((_DWORD)a2, (unsigned int)&v8, (unsigned int)&v7, (unsigned int)&v10, 1);
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
