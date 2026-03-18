/*
 * XREFs of Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006C0FC
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000DD50 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0005AD0 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     Controller_ExecuteDSM @ 0x1C006C218 (Controller_ExecuteDSM.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0075DCC (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 */

void __fastcall Controller_ExecuteHSICDisconnectInU3Workaround(__int64 a1, char a2)
{
  int v4; // [rsp+28h] [rbp-10h]

  if ( _bittest64((const signed __int64 *)(a1 + 336), 0x3Cu) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(
        *(_QWORD *)(a1 + 72),
        4,
        4,
        251,
        (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
        *(_QWORD *)a1);
    if ( Controller_IsSecureDevice(a1) )
    {
      Controller_ExecuteHSICDisconnectInU3WorkaroundDirect(a1);
    }
    else
    {
      LOWORD(v4) = 0;
      Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, 6 - (unsigned int)(a2 != 0), 0LL, 0LL, v4);
    }
  }
}
