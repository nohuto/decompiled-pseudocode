/*
 * XREFs of ?ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x180651874
 * Callers:
 *     ??$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU?$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureTelemetry@@SAX$$QEAIAEAIAEBM2$$QEA_N$$QEAU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x18064E6E0 (--$ReportTouchSwipePerformed@IAEAIAEBMAEBM_NU-$com_ptr@UIServiceProvider@@@winrt@@@TouchGestureT.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800ACE38 (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@433AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18064E7E8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U1@U1@U-$_tlgWrapperByVal@$0.c)
 *     ??$call@AEAV_lambda_e0c989301fb7eeb47b8a27ef133367da_@@@?$factory_cache_entry@UPointerPoint@Input@UI@Windows@winrt@@UIPointerPointStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e0c989301fb7eeb47b8a27ef133367da_@@@Z @ 0x18064E9B8 (--$call@AEAV_lambda_e0c989301fb7eeb47b8a27ef133367da_@@@-$factory_cache_entry@UPointerPoint@Inpu.c)
 *     ??$capture@UIImmersiveMonitorManager@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU3@@winrt@@YA?AU?$com_ptr@UIImmersiveMonitorManager@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x18064EAF8 (--$capture@UIImmersiveMonitorManager@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvide.c)
 *     ?GetCurrentImmersiveMonitor@TouchGestureHelper@@SA?AU?$com_ptr@UIImmersiveMonitor@@@winrt@@PEAUIImmersiveMonitorManager@@AEBUPoint@Foundation@Windows@3@@Z @ 0x180650644 (-GetCurrentImmersiveMonitor@TouchGestureHelper@@SA-AU-$com_ptr@UIImmersiveMonitor@@@winrt@@PEAUI.c)
 *     ?GetCurrentPoint@?$consume_Windows_UI_Input_IPointerPointStatics@UIPointerPointStatics@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x1806506FC (-GetCurrentPoint@-$consume_Windows_UI_Input_IPointerPointStatics@UIPointerPointStatics@Input@UI@.c)
 *     ?Position@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180651560 (-Position@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall TouchGestureTelemetry::ReportTouchSwipePerformed_(
        __int64 a1,
        unsigned int a2,
        int a3,
        float a4,
        float a5,
        char a6,
        __int64 *a7)
{
  int v9; // edi
  LANGID ThreadUILanguage_0; // ax
  int v11; // r12d
  __int64 v12; // r9
  int v13; // eax
  __int64 *v14; // rsi
  void (__fastcall ***v15)(_QWORD, __int64 *, __int64 *); // rcx
  char v16; // r14
  float *v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 *v20; // rax
  const char *v21; // r9
  _DWORD *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-B8h]
  unsigned int v27; // [rsp+60h] [rbp-78h] BYREF
  __int64 v28; // [rsp+68h] [rbp-70h] BYREF
  int v29[2]; // [rsp+70h] [rbp-68h] BYREF
  int v30; // [rsp+78h] [rbp-60h] BYREF
  int v31; // [rsp+7Ch] [rbp-5Ch] BYREF
  int v32; // [rsp+80h] [rbp-58h] BYREF
  int v33; // [rsp+84h] [rbp-54h] BYREF
  int v34; // [rsp+88h] [rbp-50h] BYREF
  int v35; // [rsp+8Ch] [rbp-4Ch] BYREF
  int v36; // [rsp+90h] [rbp-48h] BYREF
  __int64 v37; // [rsp+98h] [rbp-40h] BYREF
  unsigned int *v38; // [rsp+A0h] [rbp-38h] BYREF
  _QWORD v39[2]; // [rsp+A8h] [rbp-30h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  __int64 v42; // [rsp+E0h] [rbp+8h] BYREF
  char v43; // [rsp+F8h] [rbp+20h] BYREF

  v42 = a1;
  v9 = 0;
  if ( COERCE_FLOAT(LODWORD(a4) & _xmm) < COERCE_FLOAT(LODWORD(a5) & _xmm) )
  {
    LOBYTE(v9) = a5 > 0.0;
    v9 += 2;
  }
  else
  {
    LOBYTE(v9) = a4 > 0.0;
  }
  try
  {
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v11 = IsBiDiLocale(ThreadUILanguage_0);
    LOBYTE(a5) = 0;
    v43 = 0;
    v13 = wil::wnf_query_nothrow<bool>((__int64)&WNF_TMCN_ISTABLETPOSTURE, (char *)&a5, (__int64)&v43, v12);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x22,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
        (const char *)(unsigned int)v13,
        v26);
    v14 = a7;
    v42 = *a7;
    winrt::capture<IImmersiveMonitorManager,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
      &v37,
      (__int64 (__fastcall *)(_QWORD, SID *, const IID *, __int64 *))IUnknown_QueryService,
      &v42);
    v27 = a2;
    v38 = &v27;
    v39[1] = &qword_180990DD8;
    v16 = 1;
    _InterlockedAdd64(&qword_180990DD8, 1uLL);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Input::PointerPoint,winrt::Windows::UI::Input::IPointerPointStatics> )
    {
      winrt::impl::consume_Windows_UI_Input_IPointerPointStatics<winrt::Windows::UI::Input::IPointerPointStatics>::GetCurrentPoint(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Input::PointerPoint,winrt::Windows::UI::Input::IPointerPointStatics>,
        &v28,
        v27);
      _InterlockedDecrement64(&qword_180990DD8);
    }
    else
    {
      _InterlockedDecrement64(&qword_180990DD8);
      winrt::impl::factory_cache_entry<winrt::Windows::UI::Input::PointerPoint,winrt::Windows::UI::Input::IPointerPointStatics>::call<_lambda_e0c989301fb7eeb47b8a27ef133367da_ &>(
        v15,
        (__int64)&v28,
        &v38);
    }
    v17 = (float *)winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::Position(
                     &v28,
                     &v40);
    TouchGestureHelper::GetCurrentImmersiveMonitor(v29, v37, v17);
    if ( v28 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v28);
    v18 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v29 + 24LL))(*(_QWORD *)v29, &v31);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
        (const char *)(unsigned int)v18,
        v26);
    v19 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v29 + 80LL))(*(_QWORD *)v29, &v30);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2D,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
        (const char *)(unsigned int)v19,
        v26);
    v20 = wil::details::static_lazy<TouchGestureLogging>::get(
            (__int64)retaddr,
            (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_);
    v22 = (_DWORD *)v20[1];
    if ( *v22 > 5u )
    {
      LOBYTE(v20) = tlgKeywordOn((__int64)v22, 0x400000000000LL);
      if ( (_BYTE)v20 )
      {
        v39[0] = 0x2000000LL;
        v32 = v30;
        v33 = v31;
        LOBYTE(v42) = a6;
        if ( !LOBYTE(a5) || !v43 )
          v16 = 0;
        LOBYTE(a5) = v16;
        v34 = v11;
        v35 = v9;
        v36 = a3;
        LOBYTE(v20) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                        v23,
                        byte_1808712A8,
                        v24,
                        (__int64)v21,
                        (__int64)&v36,
                        (__int64)&v35,
                        (__int64)&v34,
                        (__int64)&a5,
                        (__int64)&v42,
                        (__int64)&v33,
                        (__int64)&v32,
                        (__int64)v39);
      }
    }
    if ( *(_QWORD *)v29 )
      LOBYTE(v20) = winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)v29);
    if ( v37 )
      LOBYTE(v20) = winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v37);
  }
  catch ( ... )
  {
    LOBYTE(v20) = wil::details::in1diag3::Log_CaughtException(
                    retaddr,
                    (void *)0x39,
                    (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturetelemetry.h",
                    v21);
    v14 = a7;
  }
  if ( *v14 )
    LOBYTE(v20) = winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v14);
  return (char)v20;
}
