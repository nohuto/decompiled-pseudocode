/*
 * XREFs of ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x18058F7C8
 * Callers:
 *     _lambda_cd8c6316c996060cbab4a596526042be_::operator()_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_ @ 0x18058C7FC (_lambda_cd8c6316c996060cbab4a596526042be_--operator()_winrt--Windows--UI--Internal--Input--Physi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ @ 0x18022C5BC (--B-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180452808 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x18047DAD0 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 *     ?GetTouchGestureTarget@TouchGestureSettings@@QEAA?AU?$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGestureType@@@Z @ 0x18058C508 (-GetTouchGestureTarget@TouchGestureSettings@@QEAA-AU-$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGest.c)
 *     ??0?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18058DC98 (--0-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptio.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18058DD80 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x18058E0B4 (-FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU-$com_ptr@UITouchSwipe@@@winrt@@@.c)
 *     ?GetSwipeType@TouchGestureProcessor@@AEAA?AW4TouchGestureType@@MM@Z @ 0x18058E6F4 (-GetSwipeType@TouchGestureProcessor@@AEAA-AW4TouchGestureType@@MM@Z.c)
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x18058EBEC (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 *     ?TouchSwipeStarted@TouchGestureTelemetry@@SAXXZ @ 0x18058FD3C (-TouchSwipeStarted@TouchGestureTelemetry@@SAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@@std@@XZ @ 0x18058FE64 (-ensure_data@-$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TouchGestureProcessor::StartSwipe(
        TouchGestureProcessor *this,
        int a2,
        const struct winrt::Windows::Foundation::Point *a3)
{
  int v6; // edx
  int SwipeType; // r15d
  int v8; // r14d
  std::_Ref_count_base *v9; // rdi
  __int64 *v10; // rax
  volatile signed __int32 *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 *v14; // rax
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  void *v18; // rax
  std::_Ref_count_base *v19; // rdi
  __int64 *v20; // rax
  volatile signed __int32 *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  int v30; // r15d
  std::_Ref_count_base *v31; // rdi
  __int64 *v32; // rax
  volatile signed __int32 *v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  void *v36; // rbx
  _DWORD *v37; // [rsp+20h] [rbp-A9h] BYREF
  std::_Ref_count_base *v38; // [rsp+28h] [rbp-A1h]
  std::_Ref_count_base *v39[2]; // [rsp+30h] [rbp-99h] BYREF
  std::_Ref_count_base *v40[2]; // [rsp+40h] [rbp-89h] BYREF
  std::_Ref_count_base *v41[2]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v42[2]; // [rsp+60h] [rbp-69h] BYREF
  __int128 v43; // [rsp+68h] [rbp-61h]
  __int16 v44; // [rsp+78h] [rbp-51h]
  std::_Ref_count_base *v45; // [rsp+80h] [rbp-49h]
  __int64 v46; // [rsp+88h] [rbp-41h] BYREF
  std::_Ref_count_base *v47; // [rsp+90h] [rbp-39h]
  __int64 v48; // [rsp+98h] [rbp-31h] BYREF
  std::_Ref_count_base *v49; // [rsp+A0h] [rbp-29h]
  _DWORD *v50; // [rsp+A8h] [rbp-21h] BYREF
  std::_Ref_count_base *v51; // [rsp+B0h] [rbp-19h]
  __int64 v52; // [rsp+B8h] [rbp-11h] BYREF
  std::_Ref_count_base *v53; // [rsp+C0h] [rbp-9h]
  _DWORD *v54; // [rsp+C8h] [rbp-1h] BYREF
  std::_Ref_count_base *v55; // [rsp+D0h] [rbp+7h]
  __int64 v56; // [rsp+D8h] [rbp+Fh] BYREF
  float v57; // [rsp+E0h] [rbp+17h] BYREF
  float v58[14]; // [rsp+E8h] [rbp+1Fh] BYREF
  void *v59; // [rsp+140h] [rbp+77h] BYREF
  std::_Ref_count_base *v60; // [rsp+148h] [rbp+7Fh] BYREF

  SwipeType = TouchGestureProcessor::GetSwipeType((__int64)this, *(float *)a3, *((float *)a3 + 1));
  if ( SwipeType )
  {
    v8 = v6;
    if ( *((_QWORD *)this + 1) )
      v8 = *((_DWORD *)this + 23);
    *(_OWORD *)v39 = 0LL;
    v9 = (std::_Ref_count_base *)operator new(0xD0uLL);
    v60 = v9;
    *(_OWORD *)v9 = 0LL;
    *((_DWORD *)v9 + 2) = 1;
    *((_DWORD *)v9 + 3) = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
    tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
      (__int64)v9 + 16,
      0LL,
      0LL);
    v37 = (_DWORD *)((char *)v9 + 16);
    v38 = v9;
    std::shared_ptr<KBViewInfo>::operator=(v39, (__int64 *)&v37);
    if ( v38 )
      std::_Ref_count_base::_Decref(v38);
    if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v39) )
    {
      v10 = (__int64 *)tip::tip_test<_tip_TouchGestureTest>::ensure_data(v39);
      v11 = (volatile signed __int32 *)v10[1];
      if ( v11 )
      {
        _InterlockedIncrement(v11 + 2);
        v11 = (volatile signed __int32 *)v10[1];
      }
      v12 = *v10;
      v46 = v12;
      v47 = (std::_Ref_count_base *)v11;
      tip::details::test_common_data<1>::begin_update(v12 + 8);
      v13 = v12 + 152;
      if ( !v12 )
        v13 = 8LL;
      *(_DWORD *)v13 |= SwipeType;
      tip::test_data_control<_tip_TouchGestureTest>::close(&v46);
      if ( v47 )
        std::_Ref_count_base::_Decref(v47);
      v14 = (__int64 *)tip::tip_test<_tip_TouchGestureTest>::ensure_data(v39);
      v15 = (volatile signed __int32 *)v14[1];
      if ( v15 )
      {
        _InterlockedIncrement(v15 + 2);
        v15 = (volatile signed __int32 *)v14[1];
      }
      v16 = *v14;
      v48 = v16;
      v49 = (std::_Ref_count_base *)v15;
      tip::details::test_common_data<1>::begin_update(v16 + 8);
      v17 = v16 + 156;
      if ( !v16 )
        v17 = 12LL;
      *(_DWORD *)v17 = v8;
      tip::test_data_control<_tip_TouchGestureTest>::close(&v48);
      if ( v49 )
        std::_Ref_count_base::_Decref(v49);
    }
    if ( v39[1] )
      std::_Ref_count_base::_Decref(v39[1]);
    TouchGestureSettings::GetTouchGestureTarget(*((_QWORD *)this + 2), &v59, v8, SwipeType);
    v18 = v59;
    if ( v59 )
    {
      *(_OWORD *)v40 = 0LL;
      v19 = (std::_Ref_count_base *)operator new(0xD0uLL);
      v45 = v19;
      *(_OWORD *)v19 = 0LL;
      *((_DWORD *)v19 + 2) = 1;
      *((_DWORD *)v19 + 3) = 1;
      *(_QWORD *)v19 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
      tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
        (__int64)v19 + 16,
        0LL,
        0LL);
      v50 = (_DWORD *)((char *)v19 + 16);
      v51 = v19;
      std::shared_ptr<KBViewInfo>::operator=(v40, (__int64 *)&v50);
      if ( v51 )
        std::_Ref_count_base::_Decref(v51);
      if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v40) )
      {
        v20 = (__int64 *)tip::tip_test<_tip_TouchGestureTest>::ensure_data(v40);
        v21 = (volatile signed __int32 *)v20[1];
        if ( v21 )
        {
          _InterlockedIncrement(v21 + 2);
          v21 = (volatile signed __int32 *)v20[1];
        }
        v22 = *v20;
        v52 = v22;
        v53 = (std::_Ref_count_base *)v21;
        tip::details::test_common_data<1>::begin_update(v22 + 8);
        v23 = v22 + 160;
        if ( !v22 )
          v23 = 16LL;
        *(_BYTE *)v23 = 1;
        tip::test_data_control<_tip_TouchGestureTest>::close(&v52);
        if ( v53 )
          std::_Ref_count_base::_Decref(v53);
      }
      if ( v40[1] )
        std::_Ref_count_base::_Decref(v40[1]);
      TouchGestureProcessor::FinishPreviousGestureIfNeeded((__int64)this, (__int64 **)&v59);
      v24 = std::chrono::steady_clock::now(&v56);
      v25 = *v24;
      *((_QWORD *)this + 12) = *v24;
      v43 = 0LL;
      v44 = 1;
      v42[0] = SwipeType;
      v42[1] = a2;
      *(float *)&v43 = *TouchGestureProcessor::PixelToHimetric(v25, &v57, (float *)a3);
      *((float *)&v43 + 1) = TouchGestureProcessor::PixelToHimetric(v26, v58, (float *)a3)[1];
      v27 = (__int64 *)*((_QWORD *)this + 15);
      if ( *((_BYTE *)v27 + 25) )
      {
        i = (__int64 *)v27[2];
      }
      else
      {
        i = (__int64 *)*v27;
        if ( *(_BYTE *)(*v27 + 25) )
        {
          for ( i = (__int64 *)v27[1]; !*((_BYTE *)i + 25) && v27 == (__int64 *)*i; i = (__int64 *)i[1] )
            v27 = i;
          if ( *((_BYTE *)v27 + 25) )
            i = v27;
        }
        else
        {
          for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            i = j;
        }
      }
      v30 = (*(__int64 (__fastcall **)(void *, _QWORD, _DWORD *))(*(_QWORD *)v59 + 24LL))(
              v59,
              *((unsigned int *)i + 7),
              v42);
      *(_OWORD *)v41 = 0LL;
      v31 = (std::_Ref_count_base *)operator new(0xD0uLL);
      v45 = v31;
      *(_OWORD *)v31 = 0LL;
      *((_DWORD *)v31 + 2) = 1;
      *((_DWORD *)v31 + 3) = 1;
      *(_QWORD *)v31 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
      tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
        (__int64)v31 + 16,
        0LL,
        0LL);
      v54 = (_DWORD *)((char *)v31 + 16);
      v55 = v31;
      std::shared_ptr<KBViewInfo>::operator=(v41, (__int64 *)&v54);
      if ( v55 )
        std::_Ref_count_base::_Decref(v55);
      if ( tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool((__int64 *)v41) )
      {
        v32 = (__int64 *)tip::tip_test<_tip_TouchGestureTest>::ensure_data(v41);
        v33 = (volatile signed __int32 *)v32[1];
        if ( v33 )
        {
          _InterlockedIncrement(v33 + 2);
          v33 = (volatile signed __int32 *)v32[1];
        }
        v34 = *v32;
        v37 = (_DWORD *)v34;
        v38 = (std::_Ref_count_base *)v33;
        tip::details::test_common_data<1>::begin_update(v34 + 8);
        v35 = v34 + 168;
        if ( !v34 )
          v35 = 24LL;
        *(_DWORD *)v35 = v30;
        tip::test_data_control<_tip_TouchGestureTest>::close((__int64 *)&v37);
        if ( v38 )
          std::_Ref_count_base::_Decref(v38);
      }
      if ( v41[1] )
        std::_Ref_count_base::_Decref(v41[1]);
      *((_DWORD *)this + 23) = v8;
      v36 = v59;
      if ( *(void **)this != v59 )
      {
        if ( *(_QWORD *)this )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
        *(_QWORD *)this = v36;
        if ( v36 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v36 + 8LL))(v36);
      }
      *((_WORD *)this + 134) = 0;
      *((_DWORD *)this + 66) = 0;
      v60 = 0LL;
      winrt::com_ptr<ITouchSwipe>::operator=((__int64 *)this + 1, (__int64 *)&v60);
      if ( v60 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v60);
      TouchGestureTelemetry::TouchSwipeStarted();
      v18 = v59;
    }
    if ( v18 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v59);
  }
}
