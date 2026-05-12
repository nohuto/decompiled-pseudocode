/*
 * XREFs of RaidAdapterSendPowerToMiniport @ 0x1C0010FC0
 * Callers:
 *     RaidAdapterStopOnPowerdown @ 0x1C0010E90 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0010EF0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterSendPowerToMiniportWorkItemRoutine @ 0x1C004BE40 (RaidAdapterSendPowerToMiniportWorkItemRoutine.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterSendPowerToMiniport(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]

  v4 = -1073741637;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 6) )
  {
    v5 = *(_QWORD *)(a2 + 184);
    v8 = 0LL;
    v7[0] = 1;
    v7[1] = 24;
    v9 = *(_DWORD *)(v5 + 32);
    v10 = *(_DWORD *)(v5 + 24);
    return (unsigned int)RaCallMiniportAdapterControl(a1 + 336, 6LL, v7);
  }
  return v4;
}
