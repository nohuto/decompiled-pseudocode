/*
 * XREFs of ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18012041C
 * Callers:
 *     ?OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180120140 (-OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ?erase@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@2@0@Z @ 0x1800204A8 (-erase@-$deque@UApplicationViewHistory@SnapEducationHandler@@V-$allocator@UApplicationViewHistor.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800205DC (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@@std@@QEAA@AEBV01@.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18002071C (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UApplicationViewHistory@SnapEduc.c)
 *     ??$assign@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@std@@$0A@@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@1@0@Z @ 0x18002261C (--$assign@V-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$time_point@.c)
 *     ?push_front@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAAXAEBV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@2@@Z @ 0x1800226C8 (-push_front@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::upper_bound_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000____________std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000_______lambda_3c1e3ee608574e619dcb5347f682450c___ @ 0x18012030C (std--upper_bound_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_std--chrono--time.c)
 *     ?erase@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@std@@@std@@@2@0@Z @ 0x18012075C (-erase@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 *     ?_Tidy@?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@AEAAXXZ @ 0x180120818 (-_Tidy@-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 *     ??0?$deque@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$allocator@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@@3@@std@@QEAA@AEBV01@@Z @ 0x18012089C (--0-$deque@V-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@23@.c)
 *     ??$emplace_front@UApplicationViewHistory@SnapEducationHandler@@@?$deque@UApplicationViewHistory@SnapEducationHandler@@V?$allocator@UApplicationViewHistory@SnapEducationHandler@@@std@@@std@@QEAAAEAUApplicationViewHistory@SnapEducationHandler@@$$QEAU23@@Z @ 0x180120964 (--$emplace_front@UApplicationViewHistory@SnapEducationHandler@@@-$deque@UApplicationViewHistory@.c)
 *     ?__private_IsVariantEqual@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA_NW4Variant_SETest@@W4VariantReportingKind@3@_N@Z @ 0x180164DA0 (-__private_IsVariantEqual@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAA_N.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180164DE0 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@AEAA-ATwi.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapEducationHandler::WindowFocusChanged(SnapEducationHandler *this, HWND a2)
{
  int v4; // eax
  __int64 ticks; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 *v14; // r15
  _QWORD *v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int128 v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h]
  __int128 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int128 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h]
  void *v33[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int128 v37; // [rsp+C0h] [rbp-40h]
  __int128 v38; // [rsp+D0h] [rbp-30h]
  _QWORD v39[3]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v40[3]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v41[2]; // [rsp+110h] [rbp+10h] BYREF
  void *v42[5]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v43[3]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v44; // [rsp+190h] [rbp+90h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::__private_IsVariantEqual(`wil::Feature<__WilFeatureTraits_Feature_SETest>::GetImpl'::`2'::impl) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::GetCachedVariantState(
      `wil::Feature<__WilFeatureTraits_Feature_SETest>::GetImpl'::`2'::impl,
      &v44);
    v4 = HIDWORD(v44);
  }
  else
  {
    v4 = 1966852;
  }
  *((_DWORD *)this + 6) = v4;
  ticks = _Xtime_get_ticks();
  v6 = ticks - 10000000LL * *((unsigned __int8 *)this + 26);
  v44 = v6;
  *(_OWORD *)v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v7[1] = 0LL;
  v33[0] = v7;
  *v7 = v33;
  v8 = (__int64 *)((char *)this + 32);
  v9 = v8[3];
  *((_QWORD *)&v27 + 1) = 0LL;
  v10 = (__int64 *)*v8;
  *(_QWORD *)&v27 = *v8;
  while ( 1 )
  {
    v28 = v9;
    v11 = v8[4] + v8[3];
    if ( v9 == v11 )
      break;
    if ( v10 )
      v12 = *v10;
    else
      v12 = 0LL;
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8 * (v9 & (*(_QWORD *)(v12 + 16) - 1LL)));
    v14 = (__int64 *)(v13 + 8);
    if ( v6 >= *(_QWORD *)(v13 + 8) )
    {
      *((_QWORD *)&v29 + 1) = 0LL;
      v30 = v11;
      *(_QWORD *)&v29 = *v8;
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<SnapEducationHandler::ApplicationViewHistory>>>(
        v39,
        (__int64)&v29);
      v15 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
              &v31,
              (__int64)&v27);
      std::deque<SnapEducationHandler::ApplicationViewHistory>::erase(v8, (__int64)v40, (__int64)v15, v16);
      break;
    }
    if ( *(HWND *)v13 == a2 )
    {
      v21 = v13 + 16;
      if ( v33 != (void **)v21 )
      {
        *(_QWORD *)&v37 = v21;
        v22 = *(_QWORD *)(v21 + 24);
        *((_QWORD *)&v37 + 1) = v22 + *(_QWORD *)(v21 + 32);
        *(_QWORD *)&v38 = v21;
        *((_QWORD *)&v38 + 1) = v22;
        v31 = v37;
        v29 = v38;
        std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::assign<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>>>,0>(
          v33,
          (__int64 *)&v29,
          &v31);
      }
      std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::push_front(
        v33,
        v14);
      v23 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
              &v31,
              (__int64)&v27);
      v24 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
              v43,
              (__int64)v23);
      ++v24[2];
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
        v39,
        (__int64)v24);
      v26 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>(
              v40,
              v25);
      std::deque<SnapEducationHandler::ApplicationViewHistory>::erase(v8, (__int64)&v29, (__int64)v26, (__int64)v39);
      if ( v10 != (__int64 *)v29 )
      {
        if ( (_QWORD)v29 && *(_QWORD *)v29 )
          v10 = **(__int64 ***)v29;
        else
          v10 = 0LL;
        *(_QWORD *)&v27 = v10;
      }
      v9 = v30;
    }
    else
    {
      ++v9;
    }
  }
  v31 = 0LL;
  if ( v33[0] && *(_QWORD *)v33[0] )
    *(_QWORD *)&v31 = **(_QWORD **)v33[0];
  v32 = v35 + v36;
  v28 = v35 + v36;
  v27 = (unsigned __int64)v33[0];
  v30 = v35;
  v29 = (unsigned __int64)v33[0];
  v17 = std::upper_bound_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000____________std::chrono::time_point_std::chrono::system_clock_std::chrono::duration___int64_std::ratio_1_10000000_______lambda_3c1e3ee608574e619dcb5347f682450c___(
          v40,
          (__int64)&v29,
          (__int64)&v27,
          &v44);
  v27 = 0LL;
  if ( *v17 )
  {
    v18 = *(_QWORD **)*v17;
    if ( v18 )
      *(_QWORD *)&v27 = *v18;
  }
  v28 = v17[2];
  std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::erase(
    v33,
    v43,
    &v27,
    &v31);
  v41[0] = a2;
  v41[1] = ticks;
  std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>(
    v42,
    v33);
  std::deque<SnapEducationHandler::ApplicationViewHistory>::emplace_front<SnapEducationHandler::ApplicationViewHistory>(
    v8,
    v41);
  std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Tidy(v42);
  v19 = v42[0];
  v42[0] = 0LL;
  operator delete(v19, 0x10uLL);
  std::deque<std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>>>::_Tidy(v33);
  v20 = v33[0];
  v33[0] = 0LL;
  operator delete(v20, 0x10uLL);
}
