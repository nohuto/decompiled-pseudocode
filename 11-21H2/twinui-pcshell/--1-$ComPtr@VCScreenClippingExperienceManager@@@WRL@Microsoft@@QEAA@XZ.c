/*
 * XREFs of ??1?$ComPtr@VCScreenClippingExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038113C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CScreenClippingExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x18021B974 (_Microsoft--WRL--Details--MakeAndInitialize_CScreenClippingExperienceManager_IInspectable_IServi.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EE710 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIScreenClippingEx.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CScreenClippingExperienceManager>::~ComPtr<CScreenClippingExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,Windows::Foundation::IClosable,IImmersiveWindowMessageNotification>::Release(result);
  }
  return result;
}
