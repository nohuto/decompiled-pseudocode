/*
 * XREFs of ??1?$ComPtr@VImeNotificationExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1803600A4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImeNotificationExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x18035FF51 (_Microsoft--WRL--Details--MakeAndInitialize_ImeNotificationExperienceManager_IInspe_ea_18035FF51.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIImeStatusNotificationExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803606C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIIme_ea_1803606C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ImeNotificationExperienceManager>::~ComPtr<ImeNotificationExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
