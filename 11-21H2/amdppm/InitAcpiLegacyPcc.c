/*
 * XREFs of InitAcpiLegacyPcc @ 0x1C003AB2C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00045A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C000536C (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     AcquirePccInterface @ 0x1C0024D7C (AcquirePccInterface.c)
 *     AcpiEval_PCCP @ 0x1C0026958 (AcpiEval_PCCP.c)
 *     ValidatePccEntry @ 0x1C002EBA4 (ValidatePccEntry.c)
 */

__int64 __fastcall InitAcpiLegacyPcc(_QWORD *a1)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax

  v2 = AcquirePccInterface((__int64)a1);
  v3 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      a1[26],
      0LL);
    v4 = AcpiEval_PCCP((__int64)a1, a1 + 73);
    v3 = v4;
    if ( v4 < 0 )
    {
      if ( v4 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xCu,
            (__int64)&WPP_b6560786892036652bc7bcd6b58e391e_Traceguids);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_b6560786892036652bc7bcd6b58e391e_Traceguids,
          v4);
      }
      goto LABEL_19;
    }
    v3 = ValidatePccEntry((_DWORD *)a1[73]);
    if ( v3 >= 0 )
    {
      if ( (unsigned int)(dword_1C00119EC - 1) > 0x26 )
      {
LABEL_19:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, a1[26]);
        return (unsigned int)v3;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0xEu,
          (__int64)&WPP_b6560786892036652bc7bcd6b58e391e_Traceguids,
          dword_1C00119EC,
          40);
      v3 = -1073741823;
    }
    a1[35] &= ~0x80000000uLL;
    goto LABEL_19;
  }
  if ( v2 == -1073741637 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_b6560786892036652bc7bcd6b58e391e_Traceguids);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_b6560786892036652bc7bcd6b58e391e_Traceguids,
      v2);
  }
  return (unsigned int)v3;
}
