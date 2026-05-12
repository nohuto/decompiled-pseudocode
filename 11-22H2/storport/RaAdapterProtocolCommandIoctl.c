/*
 * XREFs of RaAdapterProtocolCommandIoctl @ 0x1C0033B78
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaGetProtocolCommandEffects @ 0x1C0033EC4 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0038A6C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaValidateProtocolCommandIoctl @ 0x1C00578A4 (RaValidateProtocolCommandIoctl.c)
 */

__int64 __fastcall RaAdapterProtocolCommandIoctl(_QWORD *a1, IRP *a2)
{
  bool v2; // zf
  signed int ProtocolCommandEffects; // eax
  __int64 v6; // r8
  char v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1[71] == 0LL;
  v8 = 0;
  v9 = 0;
  if ( v2 || !a1[72] )
  {
    ProtocolCommandEffects = -1073741823;
LABEL_8:
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, ProtocolCommandEffects);
  }
  ProtocolCommandEffects = RaValidateProtocolCommandIoctl();
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_8;
  ProtocolCommandEffects = RaGetProtocolCommandEffects(a1[1], a2, &v8, &v9);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_8;
  LOBYTE(v6) = v8;
  ProtocolCommandEffects = RaidAdapterSendSrbProtocolCommandSynchronously(a1, a2, v6);
  if ( ProtocolCommandEffects < 0 )
    goto LABEL_8;
  return RaidCompleteRequestEx(a2, 0, ProtocolCommandEffects);
}
