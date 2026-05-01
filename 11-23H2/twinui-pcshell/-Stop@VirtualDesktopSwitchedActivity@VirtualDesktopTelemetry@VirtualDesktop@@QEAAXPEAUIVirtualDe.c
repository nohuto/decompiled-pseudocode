/*
 * XREFs of ?Stop@VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@0W4SwitcherType@3@@Z @ 0x180604C24
 * Callers:
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1806060A4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1802D2A56 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U5@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@7444@Z @ 0x1805FDA40 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1805FDA40.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U3@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@5444@Z @ 0x1805FE42C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByRef@$0BA@@@U3@U2@U.c)
 *     ?GetFailureInfo@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAPEBUFailureInfo@2@XZ @ 0x180601AC8 (-GetFailureInfo@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRef.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::Stop(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(__int64, GUID *, __int64 *),
        int a4)
{
  int v8; // eax
  int v9; // eax
  __int64 (__fastcall **v10)(__int64, GUID *, __int64 *); // rax
  int v11; // eax
  int v12; // eax
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 FailureInfo; // rdi
  __int64 v18; // rcx
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rcx
  const struct _tlgProvider_t *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r9
  int v26; // [rsp+20h] [rbp-130h]
  int v27; // [rsp+D0h] [rbp-80h] BYREF
  DWORD CurrentThreadId; // [rsp+D4h] [rbp-7Ch] BYREF
  int v29; // [rsp+D8h] [rbp-78h] BYREF
  int v30; // [rsp+DCh] [rbp-74h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-70h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-68h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-58h] BYREF
  int v35; // [rsp+100h] [rbp-50h] BYREF
  int v36; // [rsp+104h] [rbp-4Ch] BYREF
  __int64 v37; // [rsp+108h] [rbp-48h] BYREF
  __int64 v38; // [rsp+110h] [rbp-40h] BYREF
  __int64 v39; // [rsp+118h] [rbp-38h] BYREF
  __int64 v40; // [rsp+120h] [rbp-30h] BYREF
  __int64 v41; // [rsp+128h] [rbp-28h] BYREF
  __int64 v42; // [rsp+130h] [rbp-20h] BYREF
  __int64 v43; // [rsp+138h] [rbp-18h] BYREF
  __int64 v44; // [rsp+140h] [rbp-10h] BYREF
  __int64 v45; // [rsp+148h] [rbp-8h] BYREF
  __int64 v46; // [rsp+150h] [rbp+0h] BYREF
  __int64 v47; // [rsp+158h] [rbp+8h] BYREF
  __int64 v48; // [rsp+160h] [rbp+10h] BYREF
  _BYTE v49[16]; // [rsp+168h] [rbp+18h] BYREF
  _BYTE v50[16]; // [rsp+178h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+68h]

  v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _BYTE *))(*a2)[4])(a2, v50);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v8,
      v26);
  v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), _BYTE *))(*a3)[4])(a3, v49);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v9,
      v26);
  v10 = *a3;
  v32 = 0LL;
  v11 = (*v10)((__int64)a3, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v32);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x53,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v11,
      v26);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 56LL))(v32, &v33);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x54,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v12,
      v26);
  v13 = **a2;
  v14 = v32;
  v32 = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = v13(a2, &GUID_a871910e_6cc0_4e65_8b9b_458ce9115e30, &v32);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x55,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v15,
      v26);
  v16 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v32 + 56LL))(v32, (char *)&v33 + 4);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x56,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\VirtualDesktopTelemetry.h",
      (const char *)(unsigned int)v16,
      v26);
  FailureInfo = wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::GetFailureInfo(a1);
  if ( FailureInfo )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v19 = WindowManagementLogging::Provider(v18);
    if ( *(_DWORD *)v19 > 5u && tlgKeywordOn((__int64)v19, 0x400000000000LL) )
    {
      v34 = v33;
      v35 = a4;
      v40 = (__int64)v49;
      v41 = (__int64)v50;
      v42 = *(_QWORD *)(FailureInfo + 120);
      v43 = *(_QWORD *)(FailureInfo + 112);
      v36 = *(_DWORD *)(FailureInfo + 104);
      v44 = *(_QWORD *)(FailureInfo + 96);
      v45 = *(_QWORD *)(FailureInfo + 88);
      v27 = *(_DWORD *)(FailureInfo + 80);
      v46 = *(_QWORD *)(FailureInfo + 72);
      CurrentThreadId = *(_DWORD *)(FailureInfo + 32);
      v47 = *(_QWORD *)(FailureInfo + 24);
      v29 = *(_DWORD *)FailureInfo;
      v48 = *(_QWORD *)(FailureInfo + 128);
      v30 = *(_DWORD *)(FailureInfo + 64);
      v37 = *(_QWORD *)(FailureInfo + 56);
      LODWORD(v31) = *(_DWORD *)(FailureInfo + 8);
      v38 = 0x1000000LL;
      v39 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v20,
        (unsigned __int8 *)dword_18086DC5F,
        (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
        v20,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v31,
        (const wchar_t **)&v37,
        (__int64)&v30,
        (const wchar_t **)&v48,
        (__int64)&v29,
        (const WCHAR **)&v47,
        (__int64)&CurrentThreadId,
        (const wchar_t **)&v46,
        (__int64)&v27,
        (const wchar_t **)&v45,
        (const WCHAR **)&v44,
        (__int64)&v36,
        (const wchar_t **)&v43,
        (const WCHAR **)&v42,
        &v41,
        &v40,
        (__int64)&v35,
        (__int64)&v34 + 4,
        (__int64)&v34);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v22 = WindowManagementLogging::Provider(v21);
    v23 = (__int64)v22;
    if ( *(_DWORD *)v22 > 5u && tlgKeywordOn((__int64)v22, 0x400000000000LL) )
    {
      v30 = HIDWORD(v33);
      LODWORD(v31) = v33;
      v29 = a4;
      v39 = (__int64)v49;
      v38 = (__int64)v50;
      CurrentThreadId = GetCurrentThreadId();
      v24 = *(_QWORD *)(a1 + 48);
      v27 = *(_DWORD *)(v24 + 76);
      v37 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v23,
        byte_18086DDE7,
        (const GUID *)(v24 + 8),
        v25,
        (__int64)&v37,
        (__int64)&v27,
        (__int64)&CurrentThreadId,
        &v38,
        &v39,
        (__int64)&v29,
        (__int64)&v30,
        (__int64)&v31);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
}
