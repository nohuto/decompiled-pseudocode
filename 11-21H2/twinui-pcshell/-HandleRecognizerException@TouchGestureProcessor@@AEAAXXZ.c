/*
 * XREFs of ?HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ @ 0x18058E728
 * Callers:
 *     __lambda_2fbe770fc9512a1546b07b3150b12f28_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::catch$4 @ 0x18058CA22 (__lambda_2fbe770fc9512a1546b07b3150b12f28_--operator()_winrt--Windows--UI--Internal_ea_18058CA22.c)
 *     __lambda_3ef64bf90f44864a6bd4620ac4549ef0_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::catch$18 @ 0x18058CB67 (__lambda_3ef64bf90f44864a6bd4620ac4549ef0_--operator()_winrt--Windows--UI--Internal_ea_18058CB67.c)
 *     __lambda_645383672cc8ef3abc3762ef416a0823_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::catch$4 @ 0x18058CCA4 (__lambda_645383672cc8ef3abc3762ef416a0823_--operator()_winrt--Windows--UI--Internal_ea_18058CCA4.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ @ 0x18022C5BC (--B-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x18047DAD0 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 *     ??0?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18058DC98 (--0-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptio.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18058DD80 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@@std@@XZ @ 0x18058FE64 (-ensure_data@-$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureProcessor::HandleRecognizerException(TouchGestureProcessor *this)
{
  signed int v2; // eax
  int v3; // r14d
  std::_Ref_count_base *v4; // rdi
  __int64 *v5; // rax
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rdi
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  std::_Ref_count_base *v14[2]; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v15[2]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD *v16; // [rsp+40h] [rbp-30h] BYREF
  std::_Ref_count_base *v17; // [rsp+48h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  std::_Ref_count_base *v19; // [rsp+58h] [rbp-18h]
  _DWORD *v20; // [rsp+60h] [rbp-10h] BYREF
  std::_Ref_count_base *v21; // [rsp+68h] [rbp-8h]
  std::_Ref_count_base *v22; // [rsp+A0h] [rbp+30h] BYREF
  std::_Ref_count_base *v23; // [rsp+A8h] [rbp+38h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 216LL))(*((_QWORD *)this + 4));
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  *((_BYTE *)this + 104) = 1;
  if ( *(_QWORD *)this )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
    *(_OWORD *)v14 = 0LL;
    v4 = (std::_Ref_count_base *)operator new(0xD0uLL);
    v22 = v4;
    *(_OWORD *)v4 = 0LL;
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
    tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
      (__int64)v4 + 16,
      0LL,
      0LL);
    v16 = (_DWORD *)((char *)v4 + 16);
    v17 = v4;
    std::shared_ptr<KBViewInfo>::operator=(v14, (__int64 *)&v16);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v14) )
    {
      v5 = (__int64 *)tip::tip_test<_tip_TouchGestureTest>::ensure_data(v14);
      v6 = (volatile signed __int32 *)v5[1];
      if ( v6 )
      {
        _InterlockedIncrement(v6 + 2);
        v6 = (volatile signed __int32 *)v5[1];
      }
      v7 = *v5;
      v18 = v7;
      v19 = (std::_Ref_count_base *)v6;
      tip::details::test_common_data<1>::begin_update(v7 + 8);
      v8 = v7 + 184;
      if ( !v7 )
        v8 = 40LL;
      *(_DWORD *)v8 = v3;
      tip::test_data_control<_tip_TouchGestureTest>::close(&v18);
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
    }
    if ( v14[1] )
      std::_Ref_count_base::_Decref(v14[1]);
    v22 = 0LL;
    winrt::com_ptr<ITouchSwipe>::operator=((__int64 *)this, (__int64 *)&v22);
    if ( v22 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v22);
  }
  *(_OWORD *)v15 = 0LL;
  v9 = (std::_Ref_count_base *)operator new(0xD0uLL);
  v23 = v9;
  *(_OWORD *)v9 = 0LL;
  *((_DWORD *)v9 + 2) = 1;
  *((_DWORD *)v9 + 3) = 1;
  *(_QWORD *)v9 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
  tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
    (__int64)v9 + 16,
    0LL,
    0LL);
  v20 = (_DWORD *)((char *)v9 + 16);
  v21 = v9;
  std::shared_ptr<KBViewInfo>::operator=(v15, (__int64 *)&v20);
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v15) )
  {
    v10 = (__int64 *)tip::tip_test<_tip_TouchGestureTest>::ensure_data(v15);
    v11 = (volatile signed __int32 *)v10[1];
    if ( v11 )
    {
      _InterlockedIncrement(v11 + 2);
      v11 = (volatile signed __int32 *)v10[1];
    }
    v12 = *v10;
    v16 = (_DWORD *)v12;
    v17 = (std::_Ref_count_base *)v11;
    tip::details::test_common_data<1>::begin_update(v12 + 8);
    v13 = v12 + 161;
    if ( !v12 )
      v13 = 17LL;
    *(_BYTE *)v13 = 1;
    tip::test_data_control<_tip_TouchGestureTest>::close((__int64 *)&v16);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
  }
  if ( v15[1] )
    std::_Ref_count_base::_Decref(v15[1]);
}
