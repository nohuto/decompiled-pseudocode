/*
 * XREFs of ?GetIids@CControlCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18041F410
 * Callers:
 *     ?GetIids@CControlCenterExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180295F50 (-GetIids@CControlCenterExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CControlCenterExperienceManager@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180295F70 (-GetIids@CControlCenterExperienceManager@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CControlCenterExperienceManager@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180295F90 (-GetIids@CControlCenterExperienceManager@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNotification@@UIWeakReferenceSource@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@789Windows@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@Windows@@UIInputSwitchHost@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18041ECFC (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UILightDismissNo.c)
 */

__int64 __fastcall CControlCenterExperienceManager::GetIids(
        CControlCenterExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax
  __int64 v7; // rcx
  struct _GUID *v8; // r8
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0xB0uLL);
  if ( v6 )
  {
    v10 = 1;
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ILightDismissNotification,IWeakReferenceSource,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IInputSwitchHost,IInputHostLayoutChanges>::FillArrayWithIid(
      v7,
      &v10,
      (__int64)v6);
    *a2 = 11;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
