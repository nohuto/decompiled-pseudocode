/*
 * XREFs of ?SetVirtualDesktopCollectionFilter@SwitchItemFilteredCollection@@UEAAJPEAUIVirtualDesktopNotificationService@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1804AB560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180232220 (-_Tidy@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocat.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0 @ 0x18049FCD8 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_18049FCD8.c)
 *     ??$_Assign_range@PEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@0Uforward_iterator_tag@1@@Z @ 0x1804AA14C (--$_Assign_range@PEAV-$com_ptr_t@UIVirtualDesktop@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-.c)
 *     ?_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ @ 0x1804ABB18 (-_ApplyFilterToAllItems@SwitchItemFilteredCollection@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemFilteredCollection::SetVirtualDesktopCollectionFilter(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 72) )
    {
      v8 = EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0(
             (_QWORD *)(a1 + 152),
             a2);
      v5 = v8;
      if ( v8 < 0 )
      {
        v7 = 309LL;
LABEL_12:
        v6 = (unsigned int)v8;
        goto LABEL_13;
      }
      *(_BYTE *)(a1 + 72) = 1;
    }
  }
  else if ( !*(_BYTE *)(a1 + 72) )
  {
    v5 = -2147024809;
    v6 = 2147942487LL;
    v7 = 304LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)v6);
    goto LABEL_14;
  }
  if ( a1 + 48 != a3 )
    std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy>>::_Assign_range<wil::com_ptr_t<IVirtualDesktop,wil::err_exception_policy> *>(
      (__int64 *)(a1 + 48),
      *(_QWORD *)a3,
      *(__int64 **)(a3 + 8));
  v8 = SwitchItemFilteredCollection::_ApplyFilterToAllItems((SwitchItemFilteredCollection *)(a1 - 168));
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = 315LL;
    goto LABEL_12;
  }
LABEL_14:
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(a3);
  return v5;
}
