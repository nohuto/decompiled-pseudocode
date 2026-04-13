/*
 * XREFs of ?ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentKnownTrigger@1234@PEB_W@Z @ 0x1800A6B84
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A972C (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800ABDC0 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180027420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerFromName(const WCHAR *a1)
{
  LPCWCH *v2; // rbx
  unsigned int v4; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (LPCWCH *)&unk_180111C00;
  while ( CompareStringOrdinal(v2[1], -1, a1, -1, 1) != 2 )
  {
    v2 += 2;
    if ( v2 == (LPCWCH *)&unk_180111CB0 )
    {
      v4 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        149LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)v4,
        bIgnoreCase);
    }
  }
  return *(unsigned int *)v2;
}
