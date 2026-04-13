/*
 * XREFs of ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180098D58
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_25fdd0f24a46fb884595cc4fd71754f0___ @ 0x18008CA74 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_25fdd0f24a46fb88459.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_37cf5d91b7f47b6dc10f0d32e6c43ea5___ @ 0x18008CEF8 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_37cf5d91b7f47b6dc10.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x18008D380 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5d510b4d7a865d4a4e9fb2fe8b809fc5___ @ 0x18008D7F0 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5d510b4d7a865d4a4e9.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x18008DC60 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180097FD8 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x18009D150 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18009E630 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(int a1)
{
  _QWORD *i; // rax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = &unk_1800F5650; ; i += 2 )
  {
    if ( i == (_QWORD *)&unk_1800F5700 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x88,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)0x80070490LL,
        v3);
    if ( *(_DWORD *)i == a1 )
      break;
  }
  return i[1];
}
