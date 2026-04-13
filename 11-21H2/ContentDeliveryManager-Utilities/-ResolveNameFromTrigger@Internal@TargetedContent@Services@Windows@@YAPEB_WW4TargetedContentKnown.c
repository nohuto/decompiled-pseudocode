/*
 * XREFs of ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x1800A66A8
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0___ @ 0x18009832C (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_25fdd0f24a46fb88459.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_37cf5d91b7f47b6dc10f0d32e6c43ea5___ @ 0x1800987D4 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_37cf5d91b7f47b6dc10.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x180098C80 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5d510b4d7a865d4a4e9fb2fe8b809fc5___ @ 0x180099114 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5d510b4d7a865d4a4e9.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x1800995A8 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800A55A0 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x1800AB380 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800AD024 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180027420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(int a1)
{
  _QWORD *v1; // rax
  unsigned int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = &unk_180111C00;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 2;
    if ( v1 == (_QWORD *)&unk_180111CB0 )
    {
      v3 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        136LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)v3,
        v4);
    }
  }
  return v1[1];
}
