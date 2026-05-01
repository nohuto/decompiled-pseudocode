/*
 * XREFs of ??$_Construct_from_weak@VCAppThumbnailWindow@@@?$_Ptr_base@VCAppThumbnailWindow@@@std@@IEAA_NAEBV?$weak_ptr@VCAppThumbnailWindow@@@1@@Z @ 0x180554994
 * Callers:
 *     ?shared_from_this@?$enable_shared_from_this@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA?AV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180210FE8 (-shared_from_this@-$enable_shared_from_this@USwitchConnectionHandler@implementation@Shell@Intern.c)
 *     _lambda_e1015264fe649a72270f58c4e4d07372_::operator() @ 0x1802817F8 (_lambda_e1015264fe649a72270f58c4e4d07372_--operator().c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x18055D070 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180730220 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18010D7E0 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

char __fastcall std::_Ptr_base<CAppThumbnailWindow>::_Construct_from_weak<CAppThumbnailWindow>(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9

  v2 = *(std::_Ref_count_base **)(a2 + 8);
  if ( !v2 || !std::_Ref_count_base::_Incref_nz(v2) )
    return 0;
  *v4 = *v3;
  v4[1] = v3[1];
  return 1;
}
