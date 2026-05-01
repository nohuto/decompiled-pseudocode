/*
 * XREFs of ??1?$ComPtr@VCPeopleBarJumpViewExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18036AACC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CPeopleBarJumpViewExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x180223770 (_Microsoft--WRL--Details--MakeAndInitialize_CPeopleBarJumpViewExperienceManager_IInspectable_ISe.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014E950 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpVie.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CPeopleBarJumpViewExperienceManager>::~ComPtr<CPeopleBarJumpViewExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
