/*
 * XREFs of _lambda_c97e64c4f30df1a9790a17330dc1441c_::__lambda_c97e64c4f30df1a9790a17330dc1441c_ @ 0x180056868
 * Callers:
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$1 @ 0x1800EF9D0 (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$4 @ 0x1800EFA1D (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$4.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$1 @ 0x1800EFA45 (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$4 @ 0x1800EFA57 (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$4.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$1 @ 0x1800EFA7F (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$4 @ 0x1800EFA91 (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$4.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$1 @ 0x1800EFAB9 (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800EFAB9.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$4 @ 0x1800EFACB (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800EFACB.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 */

volatile signed __int64 *__fastcall lambda_c97e64c4f30df1a9790a17330dc1441c_::__lambda_c97e64c4f30df1a9790a17330dc1441c_(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(result);
  }
  return result;
}
