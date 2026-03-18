/*
 * XREFs of UsbhResetNotifyDownstreamHub @ 0x1C0044104
 * Callers:
 *     Usbh_HRS_WaitReady @ 0x1C001F060 (Usbh_HRS_WaitReady.c)
 *     Usbh_HRS_Queued @ 0x1C003D9BC (Usbh_HRS_Queued.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C0043F40 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_q @ 0x1C002EA5C (WPP_RECORDER_SF_q.c)
 *     UsbhSetPdo_FailIo @ 0x1C00396D0 (UsbhSetPdo_FailIo.c)
 */

_DWORD *__fastcall UsbhResetNotifyDownstreamHub(__int64 a1)
{
  unsigned int i; // edi
  _DWORD *result; // rax
  __int64 PortData; // rax
  __int64 v5; // rsi
  _DWORD *v6; // rbx
  __int64 v7; // rax

  for ( i = 1; ; ++i )
  {
    result = FdoExt(a1);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    PortData = UsbhGetPortData(a1, i);
    v5 = *(_QWORD *)(PortData + 392);
    if ( v5 )
    {
      v6 = PdoExt(*(_QWORD *)(PortData + 392));
      if ( *((_BYTE *)v6 + 2740) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *((_QWORD *)v6 + 148),
            3u,
            0x18u,
            (__int64)&WPP_9b0a5a2624623ceb7c2c6a1dede7f127_Traceguids,
            *((_QWORD *)v6 + 148));
        v7 = *((_QWORD *)v6 + 349);
        if ( v7 )
        {
          *(_QWORD *)(v7 + 56) = 1LL;
          *(_DWORD *)(*((_QWORD *)v6 + 349) + 48LL) = 0;
          IofCompleteRequest(*((PIRP *)v6 + 349), 0);
        }
        UsbhSetPdo_FailIo(v5);
        Log(a1, 2, 1380861000, *((unsigned __int8 *)v6 + 2741), v5);
        *((_BYTE *)v6 + 2741) = 0;
      }
    }
  }
  return result;
}
