/*
 * XREFs of InitAcpiLegacyPcc @ 0x1C004461C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005484 (WPP_RECORDER_SF_DD.c)
 *     ValidatePccEntry @ 0x1C0038D30 (ValidatePccEntry.c)
 *     AcquirePccInterface @ 0x1C003A86C (AcquirePccInterface.c)
 *     AcpiEval_PCCP @ 0x1C003AE0C (AcpiEval_PCCP.c)
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
        WPP_RECORDER_SF_D(
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
      if ( (unsigned int)(dword_1C001F5DC - 1) > 0x26 )
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
          dword_1C001F5DC,
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
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_b6560786892036652bc7bcd6b58e391e_Traceguids,
      v2);
  }
  return (unsigned int)v3;
}
