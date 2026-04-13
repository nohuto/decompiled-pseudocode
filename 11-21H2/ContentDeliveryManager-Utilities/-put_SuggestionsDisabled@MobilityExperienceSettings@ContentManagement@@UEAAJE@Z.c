/*
 * XREFs of ?put_SuggestionsDisabled@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x18004AF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::put_SuggestionsDisabled(
        ContentManagement::MobilityExperienceSettings *this,
        char a2)
{
  LSTATUS v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  BOOL Data; // [rsp+48h] [rbp+10h] BYREF

  Data = a2 == 0;
  v2 = RegSetKeyValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
         L"SuggestionsEnabled",
         4u,
         &Data,
         4u);
  v3 = v2;
  if ( v2 > 0 )
    v3 = (unsigned __int16)v2 | 0x80070000;
  if ( (v3 & 0x80000000) == 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A,
    (__int64)"onecoreuap\\internal\\shell\\inc\\MobilityExperienceSettings.h",
    (const char *)v3);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A6,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v3);
  return v3;
}
