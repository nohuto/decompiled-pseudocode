/*
 * XREFs of ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C002EF78
 * Callers:
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C002F054 (WPP_RECORDER_SF_S.c)
 *     HviIsAnyHypervisorPresent @ 0x1C002F148 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x1C00CCE68 (HviGetHardwareFeatures.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C00CCEE4 (HviIsHypervisorMicrosoftCompatible.c)
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
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids);
  if ( (unsigned __int8)HviIsAnyHypervisorPresent() && (unsigned __int8)HviIsHypervisorMicrosoftCompatible() )
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
        (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids);
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
      (struct _GUID *)&WPP_573a5358497137649e8f40cb87ceec67_Traceguids,
      (__int64)v1);
  }
}
