/*
 * XREFs of ??1?$ComPtr@VCPeopleBarFlyoutExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180367B74
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPeopleBarFlyoutExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x180223782 (_Microsoft--WRL--Details--MakeAndInitialize_CPeopleBarFlyoutExperienceManager_IInspectable_IServ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014A670 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarFlyoutE.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CPeopleBarFlyoutExperienceManager>::~ComPtr<CPeopleBarFlyoutExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification,IImmersiveSessionIdleNotification>::Release(result);
  }
  return result;
}
