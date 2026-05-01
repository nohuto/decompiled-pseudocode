/*
 * XREFs of ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180651D0C
 * Callers:
 *     _lambda_cd8c6316c996060cbab4a596526042be_::operator()_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_ @ 0x18064E204 (_lambda_cd8c6316c996060cbab4a596526042be_--operator()_winrt--Windows--UI--Internal--Input--Physi.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTouchGestureTarget@TouchGestureSettings@@QEAA?AU?$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGestureType@@@Z @ 0x18064B4DC (-GetTouchGestureTarget@TouchGestureSettings@@QEAA-AU-$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGest.c)
 *     ??$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU?$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureTelemetry@@SAX$$QEAIAEAIAEBM2$$QEA_N$$QEAU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x18064E6E0 (--$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU-$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureT.c)
 *     ??0?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18064FCBC (--0-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptio.c)
 *     ?FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU?$com_ptr@UITouchSwipe@@@winrt@@@Z @ 0x180650060 (-FinishPreviousGestureIfNeeded@TouchGestureProcessor@@AEAAXAEBU-$com_ptr@UITouchSwipe@@@winrt@@@.c)
 *     ?GetSwipeType@TouchGestureProcessor@@AEAA?AW4TouchGestureType@@MM@Z @ 0x1806507A8 (-GetSwipeType@TouchGestureProcessor@@AEAA-AW4TouchGestureType@@MM@Z.c)
 *     ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x180650CE0 (-PixelToHimetric@TouchGestureProcessor@@AEAA-AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z.c)
 *     ?TouchSwipeStarted@TouchGestureTelemetry@@SAXXZ @ 0x180652348 (-TouchSwipeStarted@TouchGestureTelemetry@@SAXXZ.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x1806523E8 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@@std@@XZ @ 0x180652498 (-ensure_data@-$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TouchGestureProcessor::StartSwipe(
        TouchGestureProcessor *this,
        int a2,
        const struct winrt::Windows::Foundation::Point *a3)
{
  int v5; // edx
  int SwipeType; // r14d
  int v7; // r15d
  std::_Ref_count_base *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  std::_Ref_count_base *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rcx
  float *v24; // r13
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  int v29; // r14d
  std::_Ref_count_base *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  void *v35; // rbx
  __int64 *v36; // rcx
  __int64 *k; // rax
  __int64 *m; // rcx
  void *v39; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v40; // [rsp+38h] [rbp-C8h] BYREF
  std::_Ref_count_base *v41; // [rsp+40h] [rbp-C0h]
  std::_Ref_count_base *v42[2]; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v43[2]; // [rsp+58h] [rbp-A8h] BYREF
  std::_Ref_count_base *v44[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v45[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v46; // [rsp+80h] [rbp-80h]
  __int16 v47; // [rsp+90h] [rbp-70h]
  std::_Ref_count_base *v48; // [rsp+98h] [rbp-68h]
  __int64 v49; // [rsp+A0h] [rbp-60h] BYREF
  std::_Ref_count_base *v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h] BYREF
  std::_Ref_count_base *v52; // [rsp+B8h] [rbp-48h]
  _DWORD *v53; // [rsp+C0h] [rbp-40h] BYREF
  std::_Ref_count_base *v54; // [rsp+C8h] [rbp-38h]
  __int64 v55; // [rsp+D0h] [rbp-30h] BYREF
  std::_Ref_count_base *v56; // [rsp+D8h] [rbp-28h]
  _DWORD *v57; // [rsp+E0h] [rbp-20h] BYREF
  std::_Ref_count_base *v58; // [rsp+E8h] [rbp-18h]
  __int64 v59; // [rsp+F0h] [rbp-10h] BYREF
  float v60; // [rsp+F8h] [rbp-8h] BYREF
  float v61[16]; // [rsp+100h] [rbp+0h] BYREF
  float *v62; // [rsp+160h] [rbp+60h] BYREF
  std::_Ref_count_base *v63; // [rsp+168h] [rbp+68h] BYREF

  v62 = (float *)a3;
  SwipeType = TouchGestureProcessor::GetSwipeType((__int64)this, *(float *)a3, *((float *)a3 + 1));
  if ( SwipeType )
  {
    v7 = v5;
    if ( *((_QWORD *)this + 1) )
      v7 = *((_DWORD *)this + 23);
    *(_OWORD *)v42 = 0LL;
    v8 = (std::_Ref_count_base *)operator new(0xF0uLL);
    v63 = v8;
    *(_OWORD *)v8 = 0LL;
    *((_DWORD *)v8 + 2) = 1;
    *((_DWORD *)v8 + 3) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
    tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
      (__int64)v8 + 16,
      0,
      0);
    v40 = (_DWORD *)((char *)v8 + 16);
    v41 = v8;
    std::shared_ptr<KBViewInfo>::operator=(v42, (__int64 *)&v40);
    if ( v41 )
      std::_Ref_count_base::_Decref(v41);
    if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v42) )
    {
      v9 = tip::tip_test<_tip_TouchGestureTest>::ensure_data(v42);
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v11 = *(_QWORD *)v9;
      v49 = v11;
      v50 = *(std::_Ref_count_base **)(v9 + 8);
      tip::details::test_common_data<1>::begin_update(v11 + 8);
      v12 = v11 + 184;
      if ( !v11 )
        v12 = 8LL;
      *(_DWORD *)v12 |= SwipeType;
      tip::test_data_control<_tip_TouchGestureTest>::close(&v49);
      if ( v50 )
        std::_Ref_count_base::_Decref(v50);
      v13 = tip::tip_test<_tip_TouchGestureTest>::ensure_data(v42);
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 )
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
      v15 = *(_QWORD *)v13;
      v51 = v15;
      v52 = *(std::_Ref_count_base **)(v13 + 8);
      tip::details::test_common_data<1>::begin_update(v15 + 8);
      v16 = v15 + 188;
      if ( !v15 )
        v16 = 12LL;
      *(_DWORD *)v16 = v7;
      tip::test_data_control<_tip_TouchGestureTest>::close(&v51);
      if ( v52 )
        std::_Ref_count_base::_Decref(v52);
    }
    if ( v42[1] )
      std::_Ref_count_base::_Decref(v42[1]);
    TouchGestureSettings::GetTouchGestureTarget(*((_QWORD *)this + 2), &v39, v7, SwipeType);
    if ( v39 )
    {
      *(_OWORD *)v43 = 0LL;
      v17 = (std::_Ref_count_base *)operator new(0xF0uLL);
      v48 = v17;
      *(_OWORD *)v17 = 0LL;
      *((_DWORD *)v17 + 2) = 1;
      *((_DWORD *)v17 + 3) = 1;
      *(_QWORD *)v17 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
      tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
        (__int64)v17 + 16,
        0,
        0);
      v53 = (_DWORD *)((char *)v17 + 16);
      v54 = v17;
      std::shared_ptr<KBViewInfo>::operator=(v43, (__int64 *)&v53);
      if ( v54 )
        std::_Ref_count_base::_Decref(v54);
      if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v43) )
      {
        v18 = tip::tip_test<_tip_TouchGestureTest>::ensure_data(v43);
        v19 = *(_QWORD *)(v18 + 8);
        if ( v19 )
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v20 = *(_QWORD *)v18;
        v55 = v20;
        v56 = *(std::_Ref_count_base **)(v18 + 8);
        tip::details::test_common_data<1>::begin_update(v20 + 8);
        v21 = v20 + 192;
        if ( !v20 )
          v21 = 16LL;
        *(_BYTE *)v21 = 1;
        tip::test_data_control<_tip_TouchGestureTest>::close(&v55);
        if ( v56 )
          std::_Ref_count_base::_Decref(v56);
      }
      if ( v43[1] )
        std::_Ref_count_base::_Decref(v43[1]);
      TouchGestureProcessor::FinishPreviousGestureIfNeeded((__int64)this, (__int64 **)&v39);
      v22 = std::chrono::steady_clock::now(&v59);
      v23 = *v22;
      *((_QWORD *)this + 12) = *v22;
      v46 = 0LL;
      v47 = 1;
      v45[0] = SwipeType;
      v45[1] = a2;
      v24 = v62;
      *(float *)&v46 = *TouchGestureProcessor::PixelToHimetric(v23, &v60, v62);
      *((float *)&v46 + 1) = TouchGestureProcessor::PixelToHimetric(v25, v61, v24)[1];
      v26 = (__int64 *)*((_QWORD *)this + 15);
      if ( *((_BYTE *)v26 + 25) )
      {
        i = (__int64 *)v26[2];
      }
      else
      {
        i = (__int64 *)*v26;
        if ( *(_BYTE *)(*v26 + 25) )
        {
          for ( i = (__int64 *)v26[1]; !*((_BYTE *)i + 25) && v26 == (__int64 *)*i; i = (__int64 *)i[1] )
            v26 = i;
          if ( *((_BYTE *)v26 + 25) )
            i = v26;
        }
        else
        {
          for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            i = j;
        }
      }
      v29 = (*(__int64 (__fastcall **)(void *, _QWORD, _DWORD *))(*(_QWORD *)v39 + 24LL))(
              v39,
              *((unsigned int *)i + 7),
              v45);
      *(_OWORD *)v44 = 0LL;
      v30 = (std::_Ref_count_base *)operator new(0xF0uLL);
      v48 = v30;
      *(_OWORD *)v30 = 0LL;
      *((_DWORD *)v30 + 2) = 1;
      *((_DWORD *)v30 + 3) = 1;
      *(_QWORD *)v30 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
      tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
        (__int64)v30 + 16,
        0,
        0);
      v57 = (_DWORD *)((char *)v30 + 16);
      v58 = v30;
      std::shared_ptr<KBViewInfo>::operator=(v44, (__int64 *)&v57);
      if ( v58 )
        std::_Ref_count_base::_Decref(v58);
      if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v44) )
      {
        v31 = tip::tip_test<_tip_TouchGestureTest>::ensure_data(v44);
        v32 = *(_QWORD *)(v31 + 8);
        if ( v32 )
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
        v33 = *(_QWORD *)v31;
        v40 = (_DWORD *)v33;
        v41 = *(std::_Ref_count_base **)(v31 + 8);
        tip::details::test_common_data<1>::begin_update(v33 + 8);
        v34 = v33 + 200;
        if ( !v33 )
          v34 = 24LL;
        *(_DWORD *)v34 = v29;
        tip::test_data_control<_tip_TouchGestureTest>::close(&v40);
        if ( v41 )
          std::_Ref_count_base::_Decref(v41);
      }
      if ( v44[1] )
        std::_Ref_count_base::_Decref(v44[1]);
      *((_DWORD *)this + 23) = v7;
      v35 = v39;
      if ( *(void **)this != v39 )
      {
        if ( *(_QWORD *)this )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
        *(_QWORD *)this = v35;
        if ( v35 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 8LL))(v35);
      }
      *((_WORD *)this + 134) = 0;
      *((_DWORD *)this + 66) = 0;
      v62 = 0LL;
      winrt::com_ptr<ITouchSwipe>::operator=((__int64 *)this + 1, (__int64 *)&v62);
      if ( v62 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v62);
      TouchGestureTelemetry::TouchSwipeStarted();
      v40 = *(_DWORD **)(*((_QWORD *)this + 2) + 24LL);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v40);
      LOBYTE(v62) = *((_QWORD *)this + 1) != 0LL;
      v36 = (__int64 *)*((_QWORD *)this + 15);
      if ( *((_BYTE *)v36 + 25) )
      {
        k = (__int64 *)v36[2];
      }
      else
      {
        k = (__int64 *)*v36;
        if ( *(_BYTE *)(*v36 + 25) )
        {
          for ( k = (__int64 *)v36[1]; !*((_BYTE *)k + 25) && v36 == (__int64 *)*k; k = (__int64 *)k[1] )
            v36 = k;
          if ( *((_BYTE *)v36 + 25) )
            k = v36;
        }
        else
        {
          for ( m = (__int64 *)k[2]; !*((_BYTE *)m + 25); m = (__int64 *)m[2] )
            k = m;
        }
      }
      LODWORD(v63) = *((_DWORD *)k + 7);
      TouchGestureTelemetry::ReportTouchSwipePerformed<unsigned int,unsigned int &,float const &,float const &,bool,winrt::com_ptr<IServiceProvider>>(
        &v63,
        (_DWORD *)this + 23,
        (__int64)v24,
        (_DWORD *)v24 + 1,
        (char *)&v62,
        (__int64 *)&v40);
      if ( v40 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v40);
    }
    if ( v39 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
  }
}
