/*
 * XREFs of ?VerifyInputAppRequestedHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAIPEAE@Z @ 0x1804831E0
 * Callers:
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180473890 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B898C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164990 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion@@@details@w.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18047FFE8 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@I.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedHide(
        KeyboardHosting::TabTipAdapterPolicy *this,
        int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[16]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v12[4]; // [rsp+30h] [rbp-50h] BYREF
  int v13; // [rsp+70h] [rbp-10h]
  RTL_SRWLOCK *v14; // [rsp+90h] [rbp+10h] BYREF
  int v15; // [rsp+98h] [rbp+18h] BYREF

  v15 = a2;
  *a4 = 1;
  *((_BYTE *)this + 616) = 0;
  *((_BYTE *)this + 448) = 0;
  wil::AcquireSRWLockExclusive(&v14, (RTL_SRWLOCK *)this + 55);
  LOBYTE(v12[0]) = 0;
  memset_0((char *)v12 + 4, 0, 0x40uLL);
  v5 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Try_emplace<unsigned int const &,>(
                    (float *)this + 94,
                    (__int64)v11,
                    (unsigned __int8 *)&v15);
  *(_OWORD *)(v5 + 20) = v12[0];
  *(_OWORD *)(v5 + 36) = v12[1];
  *(_OWORD *)(v5 + 52) = v12[2];
  *(_OWORD *)(v5 + 68) = v12[3];
  *(_DWORD *)(v5 + 84) = v13;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::GetImpl'::`2'::impl,
    1u,
    v6,
    v7);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::GetImpl'::`2'::impl,
    1u,
    v8,
    v9);
  return 0LL;
}
