/*
 * XREFs of ?PointersDown@TouchGestureProcessor@@QEAAXI@Z @ 0x180650E00
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f4166e70fe1a3f6ebbab251e60ef156b__void_::_Do_call @ 0x1806523D0 (std--_Func_impl_no_alloc__lambda_f4166e70fe1a3f6ebbab251e60ef156b__void_--_Do_call.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTouchGestureTarget@TouchGestureSettings@@QEAA?AU?$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGestureType@@@Z @ 0x18064B4DC (-GetTouchGestureTarget@TouchGestureSettings@@QEAA-AU-$com_ptr@UITouchSwipe@@@winrt@@IW4TouchGest.c)
 *     ??0?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18064FCBC (--0-$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptio.c)
 *     ?PointersDown@TouchGestureTelemetry@@SAXXZ @ 0x180651224 (-PointersDown@TouchGestureTelemetry@@SAXXZ.c)
 *     ?close@?$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ @ 0x1806523E8 (-close@-$test_data_control@U_tip_TouchGestureTest@@@tip@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_TouchGestureTest@@@details@tip@@@std@@XZ @ 0x180652498 (-ensure_data@-$tip_test@U_tip_TouchGestureTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TouchGestureProcessor::PointersDown(TouchGestureProcessor *this, int a2)
{
  std::_Ref_count_base *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rax
  std::_Ref_count_base *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  int v19; // r15d
  std::_Ref_count_base *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  _QWORD *v25; // rdi
  void *v26; // rbx
  _DWORD *v27; // [rsp+20h] [rbp-69h] BYREF
  std::_Ref_count_base *v28; // [rsp+28h] [rbp-61h]
  __int64 v29; // [rsp+30h] [rbp-59h] BYREF
  std::_Ref_count_base *v30; // [rsp+38h] [rbp-51h]
  std::_Ref_count_base *v31[2]; // [rsp+40h] [rbp-49h] BYREF
  std::_Ref_count_base *v32[2]; // [rsp+50h] [rbp-39h] BYREF
  std::_Ref_count_base *v33[2]; // [rsp+60h] [rbp-29h] BYREF
  _DWORD *v34; // [rsp+70h] [rbp-19h] BYREF
  std::_Ref_count_base *v35; // [rsp+78h] [rbp-11h]
  __int64 v36; // [rsp+80h] [rbp-9h] BYREF
  std::_Ref_count_base *v37; // [rsp+88h] [rbp-1h]
  _DWORD *v38; // [rsp+90h] [rbp+7h] BYREF
  std::_Ref_count_base *v39; // [rsp+98h] [rbp+Fh]
  _DWORD v40[2]; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v41; // [rsp+A8h] [rbp+1Fh]
  __int16 v42; // [rsp+B8h] [rbp+2Fh]
  void *v43; // [rsp+F0h] [rbp+67h] BYREF
  std::_Ref_count_base *v44; // [rsp+100h] [rbp+77h]

  if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 32LL) & 1) != 0 )
  {
    *(_OWORD *)v31 = 0LL;
    v4 = (std::_Ref_count_base *)operator new(0xF0uLL);
    v44 = v4;
    *(_OWORD *)v4 = 0LL;
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
    tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
      (__int64)v4 + 16,
      0,
      0);
    v27 = (_DWORD *)((char *)v4 + 16);
    v28 = v4;
    std::shared_ptr<KBViewInfo>::operator=(v31, (__int64 *)&v27);
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
    if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v31) )
    {
      v5 = tip::tip_test<_tip_TouchGestureTest>::ensure_data(v31);
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
        _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      v7 = *(_QWORD *)v5;
      v29 = v7;
      v30 = *(std::_Ref_count_base **)(v5 + 8);
      tip::details::test_common_data<1>::begin_update(v7 + 8);
      v8 = v7 + 184;
      if ( !v7 )
        v8 = 8LL;
      *(_DWORD *)v8 = 1;
      v9 = v7 + 188;
      if ( !v7 )
        v9 = 12LL;
      *(_DWORD *)v9 = a2;
      tip::test_data_control<_tip_TouchGestureTest>::close(&v29);
      tip::test_data_control<_tip_TouchGestureTest>::close(&v29);
      if ( v30 )
        std::_Ref_count_base::_Decref(v30);
    }
    if ( v31[1] )
      std::_Ref_count_base::_Decref(v31[1]);
    TouchGestureSettings::GetTouchGestureTarget(*((_QWORD *)this + 2), &v43, a2, 1);
    v10 = v43;
    if ( v43 )
    {
      *(_OWORD *)v32 = 0LL;
      v11 = (std::_Ref_count_base *)operator new(0xF0uLL);
      v44 = v11;
      *(_OWORD *)v11 = 0LL;
      *((_DWORD *)v11 + 2) = 1;
      *((_DWORD *)v11 + 3) = 1;
      *(_QWORD *)v11 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
      tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
        (__int64)v11 + 16,
        0,
        0);
      v34 = (_DWORD *)((char *)v11 + 16);
      v35 = v11;
      std::shared_ptr<KBViewInfo>::operator=(v32, (__int64 *)&v34);
      if ( v35 )
        std::_Ref_count_base::_Decref(v35);
      if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v32) )
      {
        v12 = tip::tip_test<_tip_TouchGestureTest>::ensure_data(v32);
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
          _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
        v14 = *(_QWORD *)v12;
        v36 = v14;
        v37 = *(std::_Ref_count_base **)(v12 + 8);
        tip::details::test_common_data<1>::begin_update(v14 + 8);
        v15 = v14 + 192;
        if ( !v14 )
          v15 = 16LL;
        *(_BYTE *)v15 = 1;
        tip::test_data_control<_tip_TouchGestureTest>::close(&v36);
        if ( v37 )
          std::_Ref_count_base::_Decref(v37);
      }
      if ( v32[1] )
        std::_Ref_count_base::_Decref(v32[1]);
      v41 = 0LL;
      v42 = 1;
      v40[0] = 1;
      v40[1] = a2;
      v16 = (__int64 *)*((_QWORD *)this + 15);
      if ( *((_BYTE *)v16 + 25) )
      {
        i = (__int64 *)v16[2];
      }
      else
      {
        i = (__int64 *)*v16;
        if ( *(_BYTE *)(*v16 + 25) )
        {
          for ( i = (__int64 *)v16[1]; !*((_BYTE *)i + 25) && v16 == (__int64 *)*i; i = (__int64 *)i[1] )
            v16 = i;
          if ( *((_BYTE *)v16 + 25) )
            i = v16;
        }
        else
        {
          for ( j = (__int64 *)i[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
            i = j;
        }
      }
      v19 = (*(__int64 (__fastcall **)(void *, _QWORD, _DWORD *))(*(_QWORD *)v43 + 24LL))(
              v43,
              *((unsigned int *)i + 7),
              v40);
      *(_OWORD *)v33 = 0LL;
      v20 = (std::_Ref_count_base *)operator new(0xF0uLL);
      v44 = v20;
      *(_OWORD *)v20 = 0LL;
      *((_DWORD *)v20 + 2) = 1;
      *((_DWORD *)v20 + 3) = 1;
      *(_QWORD *)v20 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_TouchGestureTest>>::`vftable';
      tip::details::test_merged_data<_tip_TouchGestureTest>::test_merged_data<_tip_TouchGestureTest>(
        (__int64)v20 + 16,
        0,
        0);
      v38 = (_DWORD *)((char *)v20 + 16);
      v39 = v20;
      std::shared_ptr<KBViewInfo>::operator=(v33, (__int64 *)&v38);
      if ( v39 )
        std::_Ref_count_base::_Decref(v39);
      if ( tip::tip_test<_tip_TouchGestureTest>::operator bool((__int64 *)v33) )
      {
        v21 = tip::tip_test<_tip_TouchGestureTest>::ensure_data(v33);
        v22 = *(_QWORD *)(v21 + 8);
        if ( v22 )
          _InterlockedAdd((volatile signed __int32 *)(v22 + 8), 1u);
        v23 = *(_QWORD *)v21;
        v27 = (_DWORD *)v23;
        v28 = *(std::_Ref_count_base **)(v21 + 8);
        tip::details::test_common_data<1>::begin_update(v23 + 8);
        v24 = v23 + 196;
        if ( !v23 )
          v24 = 20LL;
        *(_DWORD *)v24 = v19;
        tip::test_data_control<_tip_TouchGestureTest>::close(&v27);
        if ( v28 )
          std::_Ref_count_base::_Decref(v28);
      }
      if ( v33[1] )
        std::_Ref_count_base::_Decref(v33[1]);
      *((_DWORD *)this + 23) = a2;
      v25 = (_QWORD *)((char *)this + 8);
      v26 = v43;
      if ( *((void **)this + 1) != v43 )
      {
        if ( *v25 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 1);
        *v25 = v26;
        if ( v26 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 8LL))(v26);
      }
      TouchGestureTelemetry::PointersDown();
      v10 = v43;
    }
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v43);
  }
}
