/*
 * XREFs of ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@W4SwitcherType@3@@Z @ 0x180603EE8
 * Callers:
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180600C80 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@44@Z @ 0x1805FD10C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1805FD10C.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::Stop(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        int a4)
{
  int v7; // eax
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _DWORD *v20; // rdi
  __int64 v21; // rax
  DWORD CurrentThreadId; // eax
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-120h]
  int v25; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v26; // [rsp+C4h] [rbp-7Ch] BYREF
  int v27; // [rsp+C8h] [rbp-78h] BYREF
  int v28; // [rsp+CCh] [rbp-74h] BYREF
  int v29; // [rsp+D0h] [rbp-70h] BYREF
  int v30; // [rsp+D4h] [rbp-6Ch] BYREF
  int v31; // [rsp+D8h] [rbp-68h] BYREF
  int v32; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v35; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v36; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v37; // [rsp+100h] [rbp-40h] BYREF
  __int64 v38; // [rsp+108h] [rbp-38h] BYREF
  __int64 v39; // [rsp+110h] [rbp-30h] BYREF
  __int64 v40; // [rsp+118h] [rbp-28h] BYREF
  __int64 v41; // [rsp+120h] [rbp-20h] BYREF
  __int64 v42; // [rsp+128h] [rbp-18h] BYREF
  __int64 v43; // [rsp+130h] [rbp-10h] BYREF
  _BYTE v44[24]; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+150h] [rbp+10h] BYREF
  __int64 *v46; // [rsp+170h] [rbp+30h]
  int v47; // [rsp+178h] [rbp+38h]
  int v48; // [rsp+17Ch] [rbp+3Ch]
  int *v49; // [rsp+180h] [rbp+40h]
  int v50; // [rsp+188h] [rbp+48h]
  int v51; // [rsp+18Ch] [rbp+4Ch]
  DWORD *v52; // [rsp+190h] [rbp+50h]
  int v53; // [rsp+198h] [rbp+58h]
  int v54; // [rsp+19Ch] [rbp+5Ch]
  _BYTE *v55; // [rsp+1A0h] [rbp+60h]
  int v56; // [rsp+1A8h] [rbp+68h]
  int v57; // [rsp+1ACh] [rbp+6Ch]
  int *v58; // [rsp+1B0h] [rbp+70h]
  int v59; // [rsp+1B8h] [rbp+78h]
  int v60; // [rsp+1BCh] [rbp+7Ch]
  int *v61; // [rsp+1C0h] [rbp+80h]
  int v62; // [rsp+1C8h] [rbp+88h]
  int v63; // [rsp+1CCh] [rbp+8Ch]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+C8h]

  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v44);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v7,
      v24);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_DWORD *)(v8 + 76);
  if ( v9 >= 0 || v9 != *(_DWORD *)(v8 + 88) || (v10 = v8 + 80, v8 == -80) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v19 = wil::details::static_lazy<WindowManagementLogging>::get(
            v18,
            (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v20 = (_DWORD *)v19[1];
    if ( *v20 > 5u && tlgKeywordOn(v19[1], 0x400000000000LL) )
    {
      v21 = *a3;
      v28 = a4;
      v27 = (*(__int64 (__fastcall **)(__int64 *))(v21 + 24))(a3);
      CurrentThreadId = GetCurrentThreadId();
      v23 = *(_QWORD *)(a1 + 48);
      v63 = 0;
      v60 = 0;
      v57 = 0;
      v54 = 0;
      v51 = 0;
      v48 = 0;
      v26 = CurrentThreadId;
      v25 = *(_DWORD *)(v23 + 76);
      v61 = &v28;
      v58 = &v27;
      v55 = v44;
      v52 = &v26;
      v49 = &v25;
      v46 = &v33;
      v62 = 4;
      v59 = 4;
      v53 = 4;
      v50 = 4;
      v33 = 50331648LL;
      v56 = 16;
      v47 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v20,
        (unsigned __int8 *)dword_18086D94D,
        (const GUID *)(v23 + 8),
        0LL,
        8u,
        &v45);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v12 = wil::details::static_lazy<WindowManagementLogging>::get(
            v11,
            (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v13 = (_DWORD *)v12[1];
    if ( *v13 > 5u && tlgKeywordOn(v12[1], 0x400000000000LL) )
    {
      v14 = *a3;
      v29 = a4;
      v15 = (*(__int64 (__fastcall **)(__int64 *))(v14 + 24))(a3);
      v16 = *(_QWORD *)(a1 + 48);
      v30 = v15;
      v43 = 0x1000000LL;
      v34 = (__int64)v44;
      v35 = *(_QWORD *)(v10 + 120);
      v36 = *(_QWORD *)(v10 + 112);
      v31 = *(_DWORD *)(v10 + 104);
      v37 = *(_QWORD *)(v10 + 96);
      v38 = *(_QWORD *)(v10 + 88);
      v32 = *(_DWORD *)(v10 + 80);
      v39 = *(_QWORD *)(v10 + 72);
      v25 = *(_DWORD *)(v10 + 32);
      v40 = *(_QWORD *)(v10 + 24);
      v26 = *(_DWORD *)v10;
      v41 = *(_QWORD *)(v10 + 128);
      v27 = *(_DWORD *)(v10 + 64);
      v42 = *(_QWORD *)(v10 + 56);
      v28 = *(_DWORD *)(v10 + 8);
      v33 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v13,
        (unsigned __int8 *)dword_18086DB05,
        (const GUID *)(v16 + 8),
        v17,
        (__int64)&v33,
        (__int64)&v43,
        (__int64)&v28,
        (const wchar_t **)&v42,
        (__int64)&v27,
        (const wchar_t **)&v41,
        (__int64)&v26,
        (const WCHAR **)&v40,
        (__int64)&v25,
        (const wchar_t **)&v39,
        (__int64)&v32,
        (const wchar_t **)&v38,
        (const WCHAR **)&v37,
        (__int64)&v31,
        (const wchar_t **)&v36,
        (const WCHAR **)&v35,
        &v34,
        (__int64)&v30,
        (__int64)&v29);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
