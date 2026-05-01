/*
 * XREFs of ?Stop@VirtualDesktopSetNameActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@_NW4SwitcherType@3@@Z @ 0x1806045CC
 * Callers:
 *     ?SetDesktopName@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180603590 (-SetDesktopName@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800ADBAC (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1805FE064 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1805FE064.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSetNameActivity::Stop(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4)
{
  int *v7; // rax
  int v8; // ecx
  int *v9; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _DWORD *v17; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v19; // r8
  _BYTE v20[4]; // [rsp+C0h] [rbp-80h] BYREF
  int v21; // [rsp+C4h] [rbp-7Ch] BYREF
  DWORD v22; // [rsp+C8h] [rbp-78h] BYREF
  int v23; // [rsp+CCh] [rbp-74h] BYREF
  int v24; // [rsp+D0h] [rbp-70h] BYREF
  int v25; // [rsp+D4h] [rbp-6Ch] BYREF
  int v26; // [rsp+D8h] [rbp-68h] BYREF
  int v27; // [rsp+DCh] [rbp-64h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+100h] [rbp-40h] BYREF
  __int64 v33; // [rsp+108h] [rbp-38h] BYREF
  __int64 v34; // [rsp+110h] [rbp-30h] BYREF
  __int64 v35; // [rsp+118h] [rbp-28h] BYREF
  __int64 v36; // [rsp+120h] [rbp-20h] BYREF
  __int64 v37; // [rsp+128h] [rbp-18h] BYREF
  __int64 v38; // [rsp+130h] [rbp-10h] BYREF
  _BYTE v39[24]; // [rsp+138h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+150h] [rbp+10h] BYREF
  __int64 *v41; // [rsp+170h] [rbp+30h]
  int v42; // [rsp+178h] [rbp+38h]
  int v43; // [rsp+17Ch] [rbp+3Ch]
  int *v44; // [rsp+180h] [rbp+40h]
  int v45; // [rsp+188h] [rbp+48h]
  int v46; // [rsp+18Ch] [rbp+4Ch]
  DWORD *v47; // [rsp+190h] [rbp+50h]
  int v48; // [rsp+198h] [rbp+58h]
  int v49; // [rsp+19Ch] [rbp+5Ch]
  _BYTE *v50; // [rsp+1A0h] [rbp+60h]
  int v51; // [rsp+1A8h] [rbp+68h]
  int v52; // [rsp+1ACh] [rbp+6Ch]
  _BYTE *v53; // [rsp+1B0h] [rbp+70h]
  int v54; // [rsp+1B8h] [rbp+78h]
  int v55; // [rsp+1BCh] [rbp+7Ch]
  int *v56; // [rsp+1C0h] [rbp+80h]
  int v57; // [rsp+1C8h] [rbp+88h]
  int v58; // [rsp+1CCh] [rbp+8Ch]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 32LL))(a2, v39);
  v7 = *(int **)(a1 + 48);
  v8 = v7[19];
  if ( v8 >= 0 || v8 != v7[22] || (v9 = v7 + 20, v7 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v16 = wil::details::static_lazy<WindowManagementLogging>::get(
            v15,
            (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v17 = (_DWORD *)v16[1];
    if ( *v17 > 5u && tlgKeywordOn(v16[1], 0x400000000000LL) )
    {
      v23 = a4;
      v20[0] = a3;
      CurrentThreadId = GetCurrentThreadId();
      v19 = *(_QWORD *)(a1 + 48);
      v58 = 0;
      v55 = 0;
      v52 = 0;
      v49 = 0;
      v46 = 0;
      v43 = 0;
      v22 = CurrentThreadId;
      v21 = *(_DWORD *)(v19 + 76);
      v56 = &v23;
      v53 = v20;
      v50 = v39;
      v47 = &v22;
      v44 = &v21;
      v41 = &v28;
      v57 = 4;
      v48 = 4;
      v45 = 4;
      v28 = 50331648LL;
      v54 = 1;
      v51 = 16;
      v42 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v17,
        (unsigned __int8 *)dword_18086D730,
        (const GUID *)(v19 + 8),
        0LL,
        8u,
        &v40);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v11 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v10,
                      (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v11 > 5u && tlgKeywordOn((__int64)v11, 0x400000000000LL) )
    {
      v14 = *(_QWORD *)(a1 + 48);
      v29 = (__int64)v39;
      v30 = *((_QWORD *)v9 + 15);
      v31 = *((_QWORD *)v9 + 14);
      v25 = v9[26];
      v32 = *((_QWORD *)v9 + 12);
      v33 = *((_QWORD *)v9 + 11);
      v26 = v9[20];
      v34 = *((_QWORD *)v9 + 9);
      v27 = v9[8];
      v35 = *((_QWORD *)v9 + 3);
      v21 = *v9;
      v36 = *((_QWORD *)v9 + 16);
      v22 = v9[16];
      v37 = *((_QWORD *)v9 + 7);
      v23 = v9[2];
      v24 = a4;
      v20[0] = a3;
      v38 = 0x1000000LL;
      v28 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v12,
        (unsigned __int8 *)dword_18086D3DA,
        (const GUID *)(v14 + 8),
        v13,
        (__int64)&v28,
        (__int64)&v38,
        (__int64)&v23,
        (const wchar_t **)&v37,
        (__int64)&v22,
        (const wchar_t **)&v36,
        (__int64)&v21,
        (const WCHAR **)&v35,
        (__int64)&v27,
        (const wchar_t **)&v34,
        (__int64)&v26,
        (const wchar_t **)&v33,
        (const WCHAR **)&v32,
        (__int64)&v25,
        (const wchar_t **)&v31,
        (const WCHAR **)&v30,
        &v29,
        (__int64)v20,
        (__int64)&v24);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
