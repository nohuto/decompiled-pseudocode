/*
 * XREFs of TtmpUpdatePrimaryDisplayWnf @ 0x1409A3EAC
 * Callers:
 *     TtmpPushTerminalDisplayStateOntoDevice @ 0x1409A3ABC (TtmpPushTerminalDisplayStateOntoDevice.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     TtmpStartCallout @ 0x1409A3D30 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1409A3E1C (TtmpStopCallout.c)
 */

char __fastcall TtmpUpdatePrimaryDisplayWnf(int *a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  _OWORD v5[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v6; // [rsp+60h] [rbp-18h]
  unsigned int Buffer; // [rsp+90h] [rbp+18h] BYREF

  Buffer = a3;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v3 = *(_DWORD *)(a2 + 72);
    if ( (v3 & 1) != 0 )
    {
      memset(v5, 0, sizeof(v5));
      v6 = 0LL;
      TtmpStartCallout((__int64)v5, a1, a2, 6, (__int64)ZwUpdateWnfStateData, a3);
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
      LOBYTE(v3) = TtmpStopCallout((__int64)v5, 0);
    }
  }
  return v3;
}
