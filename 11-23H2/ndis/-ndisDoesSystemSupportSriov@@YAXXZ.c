/*
 * XREFs of ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C002EB04
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     HviIsAnyHypervisorPresent @ 0x1C002C108 (HviIsAnyHypervisorPresent.c)
 *     WPP_RECORDER_SF_S @ 0x1C00358BC (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x1C00D34CC (HviGetHardwareFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C00D3548 (HviIsHypervisorMicrosoftCompatible.c)
 */

void ndisDoesSystemSupportSriov(void)
{
  int v0; // edx
  const wchar_t *v1; // rax
  __int128 v2; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x81u,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids);
  if ( HviIsAnyHypervisorPresent() && (unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
  {
    HviGetHardwareFeatures(&v2);
    ndisSystemSupportsSriov = (v2 & 0x30) == 48;
  }
  if ( ndisSriovSupportTestOverride )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x1Au,
        0x82u,
        (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids);
    ndisSystemSupportsSriov = 1;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v1 = L"Yes";
    if ( ndisSystemSupportsSriov != 1 )
      v1 = (const wchar_t *)L"No";
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v0,
      26,
      131,
      (struct _GUID *)&WPP_8bdee05f76073f9a92e843a96fd0a7a9_Traceguids,
      (__int64)v1);
  }
}
