/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18006E6FC
 * Callers:
 *     _ToastNotification::ActivityToastNotificationCallback::FindActivityAndStore_::_1_::dtor$1 @ 0x1800D7B94 (_ToastNotification--ActivityToastNotificationCallback--FindActivityAndStore_--_1_--dtor$1.c)
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::dtor$0 @ 0x1800D7C1B (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--dtor$0.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::EnumerateTargetedContentNodes_::_1_::dtor$0 @ 0x1800DCC9B (_CreativeFramework--TargetedContentLayoutHelpers--TargetedContentLayoutXmlUtilities--EnumerateTa.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes_::_1_::dtor$1 @ 0x1800DCF3C (_CreativeFramework--TargetedContentLayoutHelpers--TargetedContentLayoutXmlUtilities_ea_1800DCF3C.c)
 * Callees:
 *     ?_Destroy@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAXPEAV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x180071534 (-_Destroy@-$vector@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V-$allocato.c)
 */

void __fastcall std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::~vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>(
        _QWORD *a1)
{
  if ( *a1 )
  {
    std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Destroy(a1, *a1, a1[1]);
    operator delete((void *)*a1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
