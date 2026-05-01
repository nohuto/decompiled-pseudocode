/*
 * XREFs of ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x180482488
 * Callers:
 *     ?UpdateAllowInputPanelMdmPolicy@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800B8B98 (-UpdateAllowInputPanelMdmPolicy@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x18022FFA0 (-HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityI.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180474140 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180477C4C (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180477DC8 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180477F4C (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 *     ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481870 (-HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481930 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 *     ?HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481BB0 (-HandleInvocationBySystemButton@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@.c)
 *     ?HandleOnScreenKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481D10 (-HandleOnScreenKeyboardVisibilityChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_NPEAW4ShellR.c)
 *     ?HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180481DC0 (-HandleShellRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@S.c)
 *     ?VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEA_N@Z @ 0x180483B30 (-VerifyLightDismiss@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x180480340 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IsViewShown(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v2; // rbx
  char v4; // bl
  _BYTE *v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  v2 = this + 55;
  AcquireSRWLockShared(this + 55);
  v8 = v2;
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    &this[47].Ptr,
    &v6,
    (const unsigned __int8 *)&v7);
  if ( v6 == this[48].Ptr )
    v4 = 0;
  else
    v4 = v6[20];
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  return v4;
}
