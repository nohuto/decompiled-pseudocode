/*
 * XREFs of ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800CA2CC
 * Callers:
 *     ?IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800CA3AC (-IsMicrosoftInternalUserCached@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002C184 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180042F60 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800454A8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x180059E34 (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x1800C965C (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z @ 0x1800CC1C4 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z.c)
 */

bool __fastcall ContentDeliveryManager::AccountTokens::IsMicrosoftInternalUser(
        ContentDeliveryManager::AccountTokens *this)
{
  const wchar_t *v1; // r8
  int StringSetting; // eax
  CreativeFramework::Policy *v3; // rcx
  bool IsAnyMicrosoftDomainAccount; // bl
  const wchar_t *v5; // r9
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPCWCH lpString1; // [rsp+40h] [rbp+8h] BYREF

  lpString1 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpString1,
    0LL);
  StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
                    L"IdentityProvider",
                    v1,
                    &lpString1);
  if ( StringSetting >= 0 )
  {
    v3 = (CreativeFramework::Policy *)lpString1;
    if ( lpString1 && CompareStringOrdinal(lpString1, -1, L"{ED4515F3-DA33-4717-9228-3D8668614BE6}", -1, 1) == 2 )
    {
      IsAnyMicrosoftDomainAccount = 0;
      goto LABEL_6;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x220,
      (__int64)"OneCoreUap\\Internal\\Shell\\inc\\ContentDeliveryManagerAccountTokenProvider.h",
      (const char *)(unsigned int)StringSetting);
  }
  IsAnyMicrosoftDomainAccount = CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v3);
  if ( !IsAnyMicrosoftDomainAccount )
  {
    v6 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
           (CreativeFramework::ContentDeliveryManagerSettings *)L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager",
           L"IdentityProvider",
           L"{ED4515F3-DA33-4717-9228-3D8668614BE6}",
           v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x22E,
        (__int64)"OneCoreUap\\Internal\\Shell\\inc\\ContentDeliveryManagerAccountTokenProvider.h",
        (const char *)(unsigned int)v6);
  }
LABEL_6:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpString1);
  return IsAnyMicrosoftDomainAccount;
}
