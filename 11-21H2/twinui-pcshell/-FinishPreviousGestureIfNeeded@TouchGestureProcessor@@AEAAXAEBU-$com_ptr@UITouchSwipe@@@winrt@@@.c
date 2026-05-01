/*
 * XREFs of ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x18058E0B4
 * Callers:
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18058F7C8 (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
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
 *     ?ensure_data@?$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@@std@@XZ @ 0x18058FE64 (-ensure_data@-$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureProcessor::FinishPreviousGestureIfNeeded(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rsi
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // r14d
  std::_Ref_count_base *v6; // rdi
  __int64 *v7; // rax
  volatile signed __int32 *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  std::_Ref_count_base *v11[2]; // [rsp+20h] [rbp-40h] BYREF
  _DWORD *v12; // [rsp+30h] [rbp-30h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-28h]
  _DWORD v14[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v15; // [rsp+48h] [rbp-18h]
  __int16 v16; // [rsp+58h] [rbp-8h]
  std::_Ref_count_base *v17; // [rsp+80h] [rbp+20h] BYREF

  v2 = (__int64 *)(a1 + 8);
  v3 = *(__int64 **)(a1 + 8);
  if ( v3 && v3 != *a2 )
  {
    v4 = *v3;
    v14[0] = 0;
    v14[1] = 0;
    v15 = 0LL;
    v16 = 1;
    v5 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v4 + 40))(v3, v14);
    *(_OWORD *)v11 = 0LL;
    v6 = (std::_Ref_count_base *)operator new(0xD0uLL);
    v17 = v6;
    *(_OWORD *)v6 = 0LL;
    *((_DWORD *)v6 + 2) = 1;
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
    tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
      (__int64)v6 + 16,
      0LL,
      0LL);
    v12 = (_DWORD *)((char *)v6 + 16);
    v13 = v6;
    std::shared_ptr<KBViewInfo>::operator=(v11, (__int64 *)&v12);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v11) )
    {
      v7 = (__int64 *)tip::tip_test<_tip_TouchGestureTest>::ensure_data(v11);
      v8 = (volatile signed __int32 *)v7[1];
      if ( v8 )
      {
        _InterlockedIncrement(v8 + 2);
        v8 = (volatile signed __int32 *)v7[1];
      }
      v9 = *v7;
      v12 = (_DWORD *)v9;
      v13 = (std::_Ref_count_base *)v8;
      tip::details::test_common_data<1>::begin_update(v9 + 8);
      v10 = v9 + 176;
      if ( !v9 )
        v10 = 32LL;
      *(_DWORD *)v10 = v5;
      tip::test_data_control<_tip_TouchGestureTest>::close((__int64 *)&v12);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
    }
    if ( v11[1] )
      std::_Ref_count_base::_Decref(v11[1]);
    v17 = 0LL;
    winrt::com_ptr<ITouchSwipe>::operator=(v2, (__int64 *)&v17);
    if ( v17 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v17);
  }
}
