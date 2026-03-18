/*
 * XREFs of UsbhFdoCheckUpstreamConnectionState @ 0x1C0004A1C
 * Callers:
 *     UsbhReset2Complete @ 0x1C0002D00 (UsbhReset2Complete.c)
 *     UsbhSshResumeDownstream @ 0x1C000E1B0 (UsbhSshResumeDownstream.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001A250 (UsbhSyncSendCommandToDevice.c)
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C003D0C8 (UsbhHardReset_Action.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C0042F50 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0044890 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C0004A70 (UsbhSyncSendInternalIoctl.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

__int64 __fastcall UsbhFdoCheckUpstreamConnectionState(__int64 a1, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  unsigned int v5; // r10d

  v3 = a1;
  v4 = UsbhSyncSendInternalIoctl(a1, 2228243LL, a2, 0LL);
  Log(v3, 8, 1970303827, *a2, v4);
  return v5;
}
