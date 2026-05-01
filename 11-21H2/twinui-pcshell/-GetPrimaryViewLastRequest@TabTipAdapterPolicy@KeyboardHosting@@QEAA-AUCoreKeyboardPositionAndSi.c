/*
 * XREFs of ?GetPrimaryViewLastRequest@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@XZ @ 0x180480EF8
 * Callers:
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x18047151C (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x180480340 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 */

_OWORD *__fastcall KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewLastRequest(__int64 a1, _OWORD *a2)
{
  _BYTE v5[68]; // [rsp+20h] [rbp-50h]
  __int64 v6; // [rsp+80h] [rbp+10h] BYREF
  RTL_SRWLOCK *v7; // [rsp+88h] [rbp+18h] BYREF

  wil::AcquireSRWLockExclusive(&v7, (RTL_SRWLOCK *)(a1 + 440));
  memset_0(a2, 0, 0x40uLL);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    (_QWORD *)(a1 + 376),
    &v6,
    (const unsigned __int8 *)(a1 + 612));
  if ( v6 != *(_QWORD *)(a1 + 384) )
  {
    *(_DWORD *)&v5[64] = *(_DWORD *)(v6 + 84);
    *(_OWORD *)&v5[16] = *(_OWORD *)(v6 + 36);
    *(_OWORD *)v5 = *(_OWORD *)(v6 + 20);
    *(_OWORD *)&v5[32] = *(_OWORD *)(v6 + 52);
    *(_OWORD *)&v5[48] = *(_OWORD *)(v6 + 68);
    if ( (unsigned __int8)_mm_cvtsi128_si32(*(__m128i *)v5) )
    {
      *a2 = *(_OWORD *)&v5[4];
      a2[1] = *(_OWORD *)&v5[20];
      a2[2] = *(_OWORD *)&v5[36];
      a2[3] = *(_OWORD *)&v5[52];
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v7);
  return a2;
}
