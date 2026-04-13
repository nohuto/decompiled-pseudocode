/*
 * XREFs of ?get_YourPhoneTaskbarIconCreated@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x180044AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJPEBG0PEAE@Z @ 0x180035DA0 (-GetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJPEBG0PEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::get_YourPhoneTaskbarIconCreated(
        ContentManagement::MobilityExperienceSettings *this,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  int MobilityValue; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  MobilityValue = CreativeFramework::MobilityExperienceSettings::GetMobilityValue(
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
                    L"YourPhoneAppTaskbarIconCreated",
                    a2,
                    a4);
  v5 = MobilityValue;
  if ( MobilityValue >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x31B,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)MobilityValue);
  return v5;
}
