/*
 * XREFs of ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18016D658
 * Callers:
 *     _lambda_8962cfcd3708def1512ebc9bce7f07a8_::operator() @ 0x180065150 (_lambda_8962cfcd3708def1512ebc9bce7f07a8_--operator().c)
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800A29D8 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     ??1TouchEdgeGestureProcessor@@QEAA@XZ @ 0x180144D38 (--1TouchEdgeGestureProcessor@@QEAA@XZ.c)
 *     ?SetEnabledTouchEdgeGesture@TouchEdgeGestureProcessor@@QEAAXW4TouchEdgeGestureType@@@Z @ 0x180655A64 (-SetEnabledTouchEdgeGesture@TouchEdgeGestureProcessor@@QEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800BA038 (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@?$vector@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@V?$allocator@U?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@@@2@@std@@QEAAPEAU?$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@1@QEAU21@$$QEAU21@@Z @ 0x18016D884 (--$_Emplace_reallocate@U-$pair@W4InputGestureSourceType@Input@Internal@UI@Windows@winrt@@_N@std@.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration(__int64 a1, char a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  int *v7; // rbx
  int *i; // rsi
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // r12d
  _DWORD *v15; // rcx
  unsigned __int8 *v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // [rsp+38h] [rbp-69h] BYREF
  __int128 v20; // [rsp+40h] [rbp-61h] BYREF
  _QWORD *v21; // [rsp+50h] [rbp-51h]
  _BYTE v22[32]; // [rsp+58h] [rbp-49h] BYREF
  char v23[24]; // [rsp+78h] [rbp-29h] BYREF
  int v24; // [rsp+90h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+A8h] [rbp+7h] BYREF
  __int64 *v26; // [rsp+C8h] [rbp+27h]
  int v27; // [rsp+D0h] [rbp+2Fh]
  int v28; // [rsp+D4h] [rbp+33h]

  TouchEdgeGestureTelemetry::WatchCurrentThread((wil::ActivityThreadWatcher *)v22, "UpdateTouchEdgeGestureRegistration");
  if ( !*(_QWORD *)(a1 + 104) )
    goto LABEL_19;
  v20 = 0LL;
  v21 = 0LL;
  LODWORD(v19) = 0;
  BYTE4(v19) = (a2 & 4) != 0;
  std::vector<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>::_Emplace_reallocate<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>(
    &v20,
    0LL,
    &v19);
  LODWORD(v19) = 2;
  BYTE4(v19) = (a2 & 8) != 0;
  v4 = *((_QWORD *)&v20 + 1);
  v5 = v21;
  if ( *((_QWORD **)&v20 + 1) == v21 )
  {
    std::vector<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>::_Emplace_reallocate<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>(
      &v20,
      *((_QWORD *)&v20 + 1),
      &v19);
    v5 = v21;
    v6 = (_QWORD *)*((_QWORD *)&v20 + 1);
  }
  else
  {
    **((_QWORD **)&v20 + 1) = v19;
    v6 = (_QWORD *)(v4 + 8);
    *((_QWORD *)&v20 + 1) = v6;
  }
  LODWORD(v19) = 3;
  BYTE4(v19) = (a2 & 0x12) != 0;
  if ( v6 == v5 )
  {
    std::vector<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>::_Emplace_reallocate<std::pair<enum winrt::Windows::UI::Internal::Input::InputGestureSourceType,bool>>(
      &v20,
      v6,
      &v19);
    v5 = v21;
    v7 = (int *)*((_QWORD *)&v20 + 1);
  }
  else
  {
    *v6 = v19;
    v7 = (int *)(v6 + 1);
    *((_QWORD *)&v20 + 1) = v7;
  }
  for ( i = (int *)v20; i != v7; i += 2 )
  {
    v9 = *i;
    v10 = *(__int64 **)(a1 + 104);
    v11 = *v10;
    if ( *((_BYTE *)i + 4) )
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v11 + 96))(v10, v9, (unsigned int)*i, 2LL);
      if ( v12 < 0 )
        winrt::throw_hresult((unsigned int)v12);
      v14 = *i;
      v15 = *(_DWORD **)(wil::details::static_lazy<TouchGestureLogging>::get(
                           v13,
                           _lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v15 > 5u )
      {
        v16 = (unsigned __int8 *)&dword_180871541;
LABEL_12:
        v26 = &v19;
        LODWORD(v19) = v14;
        v27 = 4;
        v28 = 0;
        tlgWriteTransfer_EventWriteTransfer((__int64)v15, v16, 0LL, 0LL, 3u, &v25);
        continue;
      }
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v11 + 104))(v10, v9);
      if ( v17 < 0 )
        winrt::throw_hresult((unsigned int)v17);
      v14 = *i;
      v15 = *(_DWORD **)(wil::details::static_lazy<TouchGestureLogging>::get(
                           v18,
                           _lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)
                       + 8);
      if ( *v15 > 5u )
      {
        v16 = (unsigned __int8 *)&unk_18087156C;
        goto LABEL_12;
      }
    }
  }
  if ( (_QWORD)v20 )
    std::_Deallocate<16,0>((void *)v20, 8 * ((__int64)((__int64)v5 - v20) >> 3));
LABEL_19:
  if ( v24 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v22);
}
