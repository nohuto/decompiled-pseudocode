/*
 * XREFs of ?HandleRecognizerException@TouchGestureProcessor@@AEAAXXZ @ 0x1806507DC
 * Callers:
 *     __lambda_2fbe770fc9512a1546b07b3150b12f28_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::catch$4 @ 0x18064E42A (__lambda_2fbe770fc9512a1546b07b3150b12f28_--operator()_winrt--Windows--UI--Internal_ea_18064E42A.c)
 *     __lambda_3ef64bf90f44864a6bd4620ac4549ef0_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::catch$18 @ 0x18064E56F (__lambda_3ef64bf90f44864a6bd4620ac4549ef0_--operator()_winrt--Windows--UI--Internal_ea_18064E56F.c)
 *     __lambda_645383672cc8ef3abc3762ef416a0823_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::catch$4 @ 0x18064E6AC (__lambda_645383672cc8ef3abc3762ef416a0823_--operator()_winrt--Windows--UI--Internal_ea_18064E6AC.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18064FCBC (--0-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptio.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x1806523E8 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@@std@@XZ @ 0x180652498 (-ensure_data@-$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureProcessor::HandleRecognizerException(TouchGestureProcessor *this)
{
  signed int v2; // eax
  int v3; // r14d
  std::_Ref_count_base *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
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
  std::_Ref_count_base *v22; // [rsp+90h] [rbp+20h] BYREF
  std::_Ref_count_base *v23; // [rsp+98h] [rbp+28h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 216LL))(*((_QWORD *)this + 4));
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  *((_BYTE *)this + 104) = 1;
  if ( *(_QWORD *)this )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
    *(_OWORD *)v14 = 0LL;
    v4 = (std::_Ref_count_base *)operator new(0xF0uLL);
    v22 = v4;
    *(_OWORD *)v4 = 0LL;
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
    tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
      (__int64)v4 + 16,
      0,
      0);
    v16 = (_DWORD *)((char *)v4 + 16);
    v17 = v4;
    std::shared_ptr<KBViewInfo>::operator=(v14, (__int64 *)&v16);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v14) )
    {
      v5 = tip::tip_test<_tip_TouchGestureTest>::ensure_data(v14);
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v7 = *(_QWORD *)v5;
      v18 = v7;
      v19 = *(std::_Ref_count_base **)(v5 + 8);
      tip::details::test_common_data<1>::begin_update(v7 + 8);
      v8 = v7 + 216;
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
  v9 = (std::_Ref_count_base *)operator new(0xF0uLL);
  v23 = v9;
  *(_OWORD *)v9 = 0LL;
  *((_DWORD *)v9 + 2) = 1;
  *((_DWORD *)v9 + 3) = 1;
  *(_QWORD *)v9 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
  tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>((__int64)v9 + 16, 0, 0);
  v20 = (_DWORD *)((char *)v9 + 16);
  v21 = v9;
  std::shared_ptr<KBViewInfo>::operator=(v15, (__int64 *)&v20);
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v15) )
  {
    v10 = tip::tip_test<_tip_TouchGestureTest>::ensure_data(v15);
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v12 = *(_QWORD *)v10;
    v16 = (_DWORD *)v12;
    v17 = *(std::_Ref_count_base **)(v10 + 8);
    tip::details::test_common_data<1>::begin_update(v12 + 8);
    v13 = v12 + 193;
    if ( !v12 )
      v13 = 17LL;
    *(_BYTE *)v13 = 1;
    tip::test_data_control<_tip_TouchGestureTest>::close(&v16);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
  }
  if ( v15[1] )
    std::_Ref_count_base::_Decref(v15[1]);
}
