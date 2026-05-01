/*
 * XREFs of ?IsViewShownInternal@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NI@Z @ 0x180533BC4
 * Callers:
 *     ?HandleAllowInputPanelMdmPolicyUpdated@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1801B33B0 (-HandleAllowInputPanelMdmPolicyUpdated@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequ.c)
 *     ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x1802DE8E0 (-HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityI.c)
 *     ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180532CD0 (-HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180532D90 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 *     ?HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180533190 (-HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@.c)
 *     ?HandleOnScreenKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180533220 (-HandleOnScreenKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRe.c)
 *     ?HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180533320 (-HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@S.c)
 *     ?IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x180533B20 (-IsPrimaryViewTryShowAllowed@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z @ 0x180533BA0 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z.c)
 *     ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z @ 0x180535C80 (-VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAE@Z.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x1800986A0 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsViewShownInternal(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v2; // rdi
  char v4; // bl
  _BYTE *v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = this + 67;
  AcquireSRWLockShared(this + 67);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    &this[59].Ptr,
    &v6,
    &v7);
  if ( v6 == this[60].Ptr )
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return 0;
  }
  else
  {
    v4 = v6[20];
    if ( v2 )
      ReleaseSRWLockShared(v2);
    return v4;
  }
}
