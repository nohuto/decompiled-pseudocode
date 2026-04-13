/*
 * XREFs of ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800E36B4
 * Callers:
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800DE560 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800E3504 (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 * Callees:
 *     _Init_thread_footer @ 0x180023894 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180023904 (_Init_thread_header.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18005F34C (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800E06E8 (-IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CreativeFramework::Policy::ShouldUseInternal(CreativeFramework::Policy *this)
{
  char v1; // bl
  bool IsMicrosoftInternalUser; // di
  __int64 v3; // rdx
  ContentDeliveryManager::AccountTokens *v4; // rcx
  const wchar_t *v5; // r8
  const unsigned __int16 *v7; // r9
  int SettingValue; // eax
  char v9; // al
  unsigned int *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockShared(&stru_1801AF378);
  v1 = 0;
  if ( !byte_1801AF374 )
  {
    ReleaseSRWLockShared(&stru_1801AF378);
    AcquireSRWLockExclusive(&stru_1801AF378);
    if ( byte_1801AF374 )
    {
      v1 = byte_1801AF380;
LABEL_16:
      ReleaseSRWLockExclusive(&stru_1801AF378);
      return v1;
    }
    if ( __TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA <= *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL)
      || (Init_thread_header(&__TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA),
          __TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA != -1) )
    {
LABEL_5:
      if ( !`CreativeFramework::Policy::IsContentDeliveryManagerDisabledCached'::`2'::isContentDeliveryManagerDisabled )
      {
        AcquireSRWLockShared(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
        if ( ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateInitialized )
        {
          IsMicrosoftInternalUser = ContentDeliveryManager::AccountTokens::Details::g_isInternalAccount;
          ReleaseSRWLockShared(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
        }
        else
        {
          ReleaseSRWLockShared(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
          AcquireSRWLockExclusive(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
          if ( ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateInitialized )
          {
            IsMicrosoftInternalUser = ContentDeliveryManager::AccountTokens::Details::g_isInternalAccount;
          }
          else
          {
            IsMicrosoftInternalUser = ContentDeliveryManager::AccountTokens::IsMicrosoftInternalUser(v4, v3, v5);
            ContentDeliveryManager::AccountTokens::Details::g_isInternalAccount = IsMicrosoftInternalUser;
            ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateInitialized = 1;
          }
          ReleaseSRWLockExclusive(&ContentDeliveryManager::AccountTokens::Details::g_internalAccountStateLock);
        }
        if ( IsMicrosoftInternalUser )
          v1 = 1;
      }
      byte_1801AF380 = v1;
      byte_1801AF374 = 1;
      goto LABEL_16;
    }
    SettingValue = CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
                     (CreativeFramework::ContentDeliveryManagerSettings *)0xFFFFFFFF80000002LL,
                     (const WCHAR *)&CreativeFramework::ContentDeliveryManagerDebugSettings::c_regKeyDebugSettings,
                     L"ContentDeliveryAllowedOverride",
                     v7,
                     &v12,
                     v10);
    if ( SettingValue >= 0 )
    {
      v9 = 1;
      if ( v12 >= 2 )
      {
LABEL_18:
        `CreativeFramework::Policy::IsContentDeliveryManagerDisabledCached'::`2'::isContentDeliveryManagerDisabled = v9;
        Init_thread_footer(&__TSS0__1__IsContentDeliveryManagerDisabledCached_Policy_CreativeFramework__YA_NXZ_4HA);
        goto LABEL_5;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B1,
        (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
        (const char *)(unsigned int)SettingValue);
    }
    v9 = 0;
    goto LABEL_18;
  }
  v1 = byte_1801AF380;
  ReleaseSRWLockShared(&stru_1801AF378);
  return v1;
}
