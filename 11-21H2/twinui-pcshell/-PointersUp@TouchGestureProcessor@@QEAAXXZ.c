/*
 * XREFs of ?PointersUp@TouchGestureProcessor@@QEAAXXZ @ 0x18058F198
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_820147081c2ae6f68f1e5a53cf83334d__void_::_Do_call @ 0x18058FDB0 (std--_Func_impl_no_alloc__lambda_820147081c2ae6f68f1e5a53cf83334d__void_--_Do_call.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ @ 0x18022C5BC (--B-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x18047DAD0 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 *     ??0?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18058DC98 (--0-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptio.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18058DD80 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?PointersUp@TouchGestureTelemetry@@SAXXZ @ 0x18058F404 (-PointersUp@TouchGestureTelemetry@@SAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@@std@@XZ @ 0x18058FE64 (-ensure_data@-$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureProcessor::PointersUp(TouchGestureProcessor *this)
{
  __int64 *v1; // rsi
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // r14d
  std::_Ref_count_base *v5; // rdi
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  std::_Ref_count_base *v10; // rdi
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  std::_Ref_count_base *v15[2]; // [rsp+20h] [rbp-29h] BYREF
  std::_Ref_count_base *v16[2]; // [rsp+30h] [rbp-19h] BYREF
  _DWORD *v17; // [rsp+40h] [rbp-9h] BYREF
  std::_Ref_count_base *v18; // [rsp+48h] [rbp-1h]
  __int64 v19; // [rsp+50h] [rbp+7h] BYREF
  std::_Ref_count_base *v20; // [rsp+58h] [rbp+Fh]
  _DWORD *v21; // [rsp+60h] [rbp+17h] BYREF
  std::_Ref_count_base *v22; // [rsp+68h] [rbp+1Fh]
  _DWORD v23[2]; // [rsp+70h] [rbp+27h] BYREF
  __int128 v24; // [rsp+78h] [rbp+2Fh]
  __int16 v25; // [rsp+88h] [rbp+3Fh]
  std::_Ref_count_base *v26; // [rsp+B0h] [rbp+67h] BYREF
  std::_Ref_count_base *v27; // [rsp+B8h] [rbp+6Fh]

  *((_BYTE *)this + 104) = 0;
  v1 = (__int64 *)((char *)this + 8);
  v2 = (__int64 *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *v2;
    v23[0] = 0;
    v23[1] = 0;
    v24 = 0LL;
    v25 = 1;
    v4 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v3 + 40))(v2, v23);
    *(_OWORD *)v15 = 0LL;
    v5 = (std::_Ref_count_base *)operator new(0xD0uLL);
    v26 = v5;
    *(_OWORD *)v5 = 0LL;
    *((_DWORD *)v5 + 2) = 1;
    *((_DWORD *)v5 + 3) = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
    tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
      (__int64)v5 + 16,
      0LL,
      0LL);
    v17 = (_DWORD *)((char *)v5 + 16);
    v18 = v5;
    std::shared_ptr<KBViewInfo>::operator=(v15, (__int64 *)&v17);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v15) )
    {
      v6 = (__int64 *)tip::tip_test<_tip_TouchGestureTest>::ensure_data(v15);
      v7 = (volatile signed __int32 *)v6[1];
      if ( v7 )
      {
        _InterlockedIncrement(v7 + 2);
        v7 = (volatile signed __int32 *)v6[1];
      }
      v8 = *v6;
      v19 = v8;
      v20 = (std::_Ref_count_base *)v7;
      tip::details::test_common_data<1>::begin_update(v8 + 8);
      v9 = v8 + 176;
      if ( !v8 )
        v9 = 32LL;
      *(_DWORD *)v9 = v4;
      tip::test_data_control<_tip_TouchGestureTest>::close(&v19);
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
    }
    if ( v15[1] )
      std::_Ref_count_base::_Decref(v15[1]);
    v26 = 0LL;
    winrt::com_ptr<ITouchSwipe>::operator=(v1, (__int64 *)&v26);
    if ( v26 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v26);
    *(_OWORD *)v16 = 0LL;
    v10 = (std::_Ref_count_base *)operator new(0xD0uLL);
    v27 = v10;
    *(_OWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = 1;
    *((_DWORD *)v10 + 3) = 1;
    *(_QWORD *)v10 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
    tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
      (__int64)v10 + 16,
      0LL,
      0LL);
    v21 = (_DWORD *)((char *)v10 + 16);
    v22 = v10;
    std::shared_ptr<KBViewInfo>::operator=(v16, (__int64 *)&v21);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v16) )
    {
      v11 = (__int64 *)tip::tip_test<_tip_TouchGestureTest>::ensure_data(v16);
      v12 = (volatile signed __int32 *)v11[1];
      if ( v12 )
      {
        _InterlockedIncrement(v12 + 2);
        v12 = (volatile signed __int32 *)v11[1];
      }
      v13 = *v11;
      v17 = (_DWORD *)v13;
      v18 = (std::_Ref_count_base *)v12;
      tip::details::test_common_data<1>::begin_update(v13 + 8);
      v14 = v13 + 162;
      if ( !v13 )
        v14 = 18LL;
      *(_BYTE *)v14 = 1;
      tip::test_data_control<_tip_TouchGestureTest>::close((__int64 *)&v17);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
    }
    if ( v16[1] )
      std::_Ref_count_base::_Decref(v16[1]);
    TouchGestureTelemetry::PointersUp();
  }
}
