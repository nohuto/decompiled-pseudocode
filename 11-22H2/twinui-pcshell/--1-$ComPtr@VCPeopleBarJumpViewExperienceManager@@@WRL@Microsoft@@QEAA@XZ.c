/*
 * XREFs of ??1?$ComPtr@VCPeopleBarJumpViewExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180440830
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPeopleBarJumpViewExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1802C1D74 (_Microsoft--WRL--Details--MakeAndInitialize_CPeopleBarJumpViewExperienceManager_IInspectable_ISe.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpVie.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPeopleBarJumpViewExperienceManager>::~ComPtr<CPeopleBarJumpViewExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
