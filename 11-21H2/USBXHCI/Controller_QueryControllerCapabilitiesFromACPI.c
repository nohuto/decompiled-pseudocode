/*
 * XREFs of Controller_QueryControllerCapabilitiesFromACPI @ 0x1C00154E0
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006D740 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     Controller_ExecuteDSM @ 0x1C006C218 (Controller_ExecuteDSM.c)
 */

void __fastcall Controller_QueryControllerCapabilitiesFromACPI(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  __int16 v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+28h] [rbp-10h]

  if ( !*(_DWORD *)(a1 + 588) )
  {
    if ( *(_BYTE *)(a1 + 553) )
    {
      *(_DWORD *)(a1 + 588) = 0;
    }
    else
    {
      v4 = 0;
      if ( (Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL, 3LL, 0LL, v4) & 1) != 0 )
      {
        LOWORD(v5) = 0;
        v2 = Controller_ExecuteDSM(a1, &GUID_USB_ACPI_DSM, 0LL, 4LL, 0LL, v5);
        if ( v2 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = v2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v3) = 4;
            WPP_RECORDER_SF_(
              *(_QWORD *)(a1 + 72),
              v3,
              4,
              248,
              (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
          }
          *(_DWORD *)(a1 + 588) = 1;
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v3) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v3, 4, 247, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
        }
      }
    }
  }
}
