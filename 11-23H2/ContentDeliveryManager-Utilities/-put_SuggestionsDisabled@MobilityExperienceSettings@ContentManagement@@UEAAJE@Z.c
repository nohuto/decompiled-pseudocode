/*
 * XREFs of ?put_SuggestionsDisabled@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x180045330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJEPEBG0@Z @ 0x1800405AC (-SetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJEPEBG0@Z.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::put_SuggestionsDisabled(
        ContentManagement::MobilityExperienceSettings *this,
        char a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(this) = a2 == 0;
  v4 = CreativeFramework::MobilityExperienceSettings::SetMobilityValue(
         this,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
         L"SuggestionsEnabled",
         a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B8,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
