/*
 * XREFs of ??1?$ComPtr@VCortanaExperienceManagerNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x180357958
 * Callers:
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18035B3F0 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CQuickConnectExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x180375BC1 (_Microsoft--WRL--Details--MakeAndInitialize_CQuickConnectExperienceManager_IInspect_ea_180375BC1.c)
 *     _SearchAppExperienceManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18038A6D2 (_SearchAppExperienceManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18035AF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_18035AF80.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CortanaExperienceManagerNotification>::~ComPtr<CortanaExperienceManagerNotification>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(result);
  }
  return result;
}
