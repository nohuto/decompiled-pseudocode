/*
 * XREFs of ??1?$ComPtr@VCInsightsExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180384DFC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CInsightsExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x18021E3F1 (_Microsoft--WRL--Details--MakeAndInitialize_CInsightsExperienceManager_IInspectable_IServiceProv.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014FF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundat.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CInsightsExperienceManager>::~ComPtr<CInsightsExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release(result);
  }
  return result;
}
