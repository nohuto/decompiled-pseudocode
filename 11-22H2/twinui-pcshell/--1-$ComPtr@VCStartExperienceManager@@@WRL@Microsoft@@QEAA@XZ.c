/*
 * XREFs of ??1?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180444314
 * Callers:
 *     _StartExperienceManagerFactory::GetExperienceManager_::_1_::dtor$0 @ 0x1802C1CA7 (_StartExperienceManagerFactory--GetExperienceManager_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_CStartExperienceManager_bool__::_1_::dtor$0 @ 0x1802C1CB9 (_Microsoft--WRL--Details--Make_CStartExperienceManager_bool__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIDWMStoryboardListener@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180140480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSit.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CStartExperienceManager>::~ComPtr<CStartExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CWRLObjectWithSite,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
