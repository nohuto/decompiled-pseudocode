/*
 * XREFs of ?Stop@VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x180604284
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180602EA0 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U5@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@74@Z @ 0x1805FD730 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1805FD730.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@54@Z @ 0x1805FE364 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U3@U2@@.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::Stop(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v7; // eax
  int v8; // eax
  int *v9; // rax
  int v10; // ecx
  int *v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _DWORD *v19; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+20h] [rbp-120h]
  int v24; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v25; // [rsp+C4h] [rbp-7Ch] BYREF
  int v26; // [rsp+C8h] [rbp-78h] BYREF
  int v27; // [rsp+CCh] [rbp-74h] BYREF
  int v28; // [rsp+D0h] [rbp-70h] BYREF
  int v29; // [rsp+D4h] [rbp-6Ch] BYREF
  int v30; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v35; // [rsp+100h] [rbp-40h] BYREF
  __int64 v36; // [rsp+108h] [rbp-38h] BYREF
  __int64 v37; // [rsp+110h] [rbp-30h] BYREF
  __int64 v38; // [rsp+118h] [rbp-28h] BYREF
  __int64 v39; // [rsp+120h] [rbp-20h] BYREF
  __int64 v40; // [rsp+128h] [rbp-18h] BYREF
  __int64 v41; // [rsp+130h] [rbp-10h] BYREF
  __int64 v42; // [rsp+138h] [rbp-8h] BYREF
  _BYTE v43[16]; // [rsp+140h] [rbp+0h] BYREF
  _BYTE v44[16]; // [rsp+150h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+48h]

  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v44);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3E,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v7,
      v23);
  v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 32LL))(a3, v43);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v8,
      v23);
  v9 = *(int **)(a1 + 48);
  v10 = v9[19];
  if ( v10 >= 0 || v10 != v9[22] || (v11 = v9 + 20, v9 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v18 = wil::details::static_lazy<WindowManagementLogging>::get(
            v17,
            (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v19 = (_DWORD *)v18[1];
    if ( *v19 > 5u && tlgKeywordOn(v18[1], 0x400000000000LL) )
    {
      v26 = a4;
      v33 = (__int64)v43;
      v32 = (__int64)v44;
      CurrentThreadId = GetCurrentThreadId();
      v21 = *(_QWORD *)(a1 + 48);
      v25 = CurrentThreadId;
      v24 = *(_DWORD *)(v21 + 76);
      v31 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        (__int64)v19,
        byte_18086D345,
        (const GUID *)(v21 + 8),
        v22,
        (__int64)&v31,
        (__int64)&v24,
        (__int64)&v25,
        &v32,
        &v33,
        (__int64)&v26);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v13 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v12,
                      (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      v16 = *(_QWORD *)(a1 + 48);
      v34 = (__int64)v43;
      v27 = a4;
      v35 = (__int64)v44;
      v36 = *((_QWORD *)v11 + 15);
      v37 = *((_QWORD *)v11 + 14);
      v28 = v11[26];
      v38 = *((_QWORD *)v11 + 12);
      v39 = *((_QWORD *)v11 + 11);
      v29 = v11[20];
      v40 = *((_QWORD *)v11 + 9);
      v30 = v11[8];
      v41 = *((_QWORD *)v11 + 3);
      v24 = *v11;
      v42 = *((_QWORD *)v11 + 16);
      v25 = v11[16];
      v31 = *((_QWORD *)v11 + 7);
      v26 = v11[2];
      v32 = 0x1000000LL;
      v33 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v14,
        (unsigned __int8 *)dword_18086D1D9,
        (const GUID *)(v16 + 8),
        v15,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v26,
        (const wchar_t **)&v31,
        (__int64)&v25,
        (const wchar_t **)&v42,
        (__int64)&v24,
        (const WCHAR **)&v41,
        (__int64)&v30,
        (const wchar_t **)&v40,
        (__int64)&v29,
        (const wchar_t **)&v39,
        (const WCHAR **)&v38,
        (__int64)&v28,
        (const wchar_t **)&v37,
        (const WCHAR **)&v36,
        &v35,
        &v34,
        (__int64)&v27);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
