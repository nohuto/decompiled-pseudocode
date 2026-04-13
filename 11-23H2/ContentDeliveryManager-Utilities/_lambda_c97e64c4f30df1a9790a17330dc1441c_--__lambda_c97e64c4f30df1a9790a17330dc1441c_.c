/*
 * XREFs of _lambda_c97e64c4f30df1a9790a17330dc1441c_::__lambda_c97e64c4f30df1a9790a17330dc1441c_ @ 0x180052244
 * Callers:
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_42fbd5d3fb16a796ab83ae5a767075fb____::_1_::dtor$2 @ 0x1800D616F (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_42fbd5d3fb16a796ab83ae5a.c)
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_822b4fd04ca4bb1472820328fff37fc1____::_1_::dtor$2 @ 0x1800D6185 (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_822b4fd04ca4bb1472820328.c)
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_9a39556507fda819c9b6a4dbd5757ff2____::_1_::dtor$2 @ 0x1800D61B1 (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_9a39556507fda819c9b6a4db.c)
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_c97e64c4f30df1a9790a17330dc1441c____::_1_::dtor$2 @ 0x1800D61C7 (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_c97e64c4f30df1a9790a1733.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$1 @ 0x1800D675B (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$1 @ 0x1800D676D (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$1 @ 0x1800D677F (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$1 @ 0x1800D6791 (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800D6791.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004B3A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 */

__int64 __fastcall lambda_c97e64c4f30df1a9790a17330dc1441c_::__lambda_c97e64c4f30df1a9790a17330dc1441c_(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(result);
  }
  return result;
}
