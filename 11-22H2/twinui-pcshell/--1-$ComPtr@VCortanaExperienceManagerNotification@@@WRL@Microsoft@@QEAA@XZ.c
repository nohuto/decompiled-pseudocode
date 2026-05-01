/*
 * XREFs of ??1?$ComPtr@VCortanaExperienceManagerNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x180429CDC
 * Callers:
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18042D45B (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CQuickConnectExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x18044B811 (_Microsoft--WRL--Details--MakeAndInitialize_CQuickConnectExperienceManager_IInspect_ea_18044B811.c)
 *     _SearchAppExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18045E5F2 (_SearchAppExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIQuickConnectExperienceManager@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18042D060 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_18042D060.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CortanaExperienceManagerNotification>::~ComPtr<CortanaExperienceManagerNotification>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>::Release(result);
  }
  return result;
}
