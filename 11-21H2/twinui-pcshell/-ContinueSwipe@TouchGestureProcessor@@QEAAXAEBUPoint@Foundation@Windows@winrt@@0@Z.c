/*
 * XREFs of ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x18058DE98
 * Callers:
 *     _lambda_cd8c6316c996060cbab4a596526042be_::operator()_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_ @ 0x18058C7FC (_lambda_cd8c6316c996060cbab4a596526042be_--operator()_winrt--Windows--UI--Internal--Input--Physi.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ @ 0x18022C5BC (--B-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x18047DAD0 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 *     ??0?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18058DC98 (--0-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptio.c)
 *     ?GetSwipeType@TouchGestureProcessor@@AEAA?AW4TouchGestureType@@MM@Z @ 0x18058E6F4 (-GetSwipeType@TouchGestureProcessor@@AEAA-AW4TouchGestureType@@MM@Z.c)
 *     ?IsQuickSwipe@TouchGestureProcessor@@AEAA_NXZ @ 0x18058EBB8 (-IsQuickSwipe@TouchGestureProcessor@@AEAA_NXZ.c)
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x18058EBEC (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@@std@@XZ @ 0x18058FE64 (-ensure_data@-$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureProcessor::ContinueSwipe(
        TouchGestureProcessor *this,
        const struct winrt::Windows::Foundation::Point *a2,
        const struct winrt::Windows::Foundation::Point *a3)
{
  int SwipeType; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // esi
  std::_Ref_count_base *v13; // rdi
  __int64 *v14; // rax
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v19; // [rsp+28h] [rbp-48h] BYREF
  std::_Ref_count_base *v20; // [rsp+30h] [rbp-40h]
  std::_Ref_count_base *v21[2]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v22[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h]
  __int16 v24; // [rsp+60h] [rbp-10h]
  char v25; // [rsp+90h] [rbp+20h] BYREF
  char v26; // [rsp+98h] [rbp+28h] BYREF
  char v27; // [rsp+A8h] [rbp+38h] BYREF

  SwipeType = TouchGestureProcessor::GetSwipeType();
  if ( *(_QWORD *)this && SwipeType )
  {
    v23 = 0LL;
    v24 = 1;
    v22[0] = SwipeType;
    v22[1] = *((_DWORD *)this + 23);
    LODWORD(v23) = *(_DWORD *)TouchGestureProcessor::PixelToHimetric(v8, &v25, v7);
    DWORD1(v23) = *(_DWORD *)(TouchGestureProcessor::PixelToHimetric(v9, &v26, a2) + 4);
    DWORD2(v23) = *(_DWORD *)TouchGestureProcessor::PixelToHimetric(v10, &v27, a3);
    HIDWORD(v23) = *(_DWORD *)(TouchGestureProcessor::PixelToHimetric(v11, v18, a3) + 4);
    LOBYTE(v24) = TouchGestureProcessor::IsQuickSwipe(this);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)this + 32LL))(*(_QWORD *)this, v22);
    *(_OWORD *)v21 = 0LL;
    v13 = (std::_Ref_count_base *)operator new(0xD0uLL);
    v19 = v13;
    *(_OWORD *)v13 = 0LL;
    *((_DWORD *)v13 + 2) = 1;
    *((_DWORD *)v13 + 3) = 1;
    *(_QWORD *)v13 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
    tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
      (__int64)v13 + 16,
      0LL,
      0LL);
    v19 = (std::_Ref_count_base *)((char *)v13 + 16);
    v20 = v13;
    std::shared_ptr<KBViewInfo>::operator=(v21, (__int64 *)&v19);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v21) )
    {
      v14 = (__int64 *)tip::tip_test<_tip_TouchGestureTest>::ensure_data(v21);
      v15 = (volatile signed __int32 *)v14[1];
      if ( v15 )
      {
        _InterlockedIncrement(v15 + 2);
        v15 = (volatile signed __int32 *)v14[1];
      }
      v16 = *v14;
      v19 = (std::_Ref_count_base *)v16;
      v20 = (std::_Ref_count_base *)v15;
      tip::details::test_common_data<1>::begin_update(v16 + 8);
      v17 = v16 + 172;
      if ( !v16 )
        v17 = 28LL;
      *(_DWORD *)v17 = v12;
      tip::test_data_control<_tip_TouchGestureTest>::close((__int64 *)&v19);
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
    }
    if ( v21[1] )
      std::_Ref_count_base::_Decref(v21[1]);
  }
}
