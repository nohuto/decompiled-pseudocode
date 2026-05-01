/*
 * XREFs of ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x180596B24
 * Callers:
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x180594430 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805951F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ @ 0x1805955F0 (-OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18000F0C4 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645634@Z @ 0x180590ED0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180590ED0.c)
 */

void __fastcall CSnapComponentTelemetry::OnSnappingCancelled::Stop(
        CSnapComponentTelemetry::OnSnappingCancelled *this,
        unsigned __int8 a2)
{
  int *v2; // rax
  int v4; // esi
  int v5; // ecx
  int *v6; // rdi
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _DWORD *v15; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v17; // r8
  int v18; // eax
  int v19; // [rsp+B0h] [rbp-80h] BYREF
  DWORD v20; // [rsp+B4h] [rbp-7Ch] BYREF
  int v21; // [rsp+B8h] [rbp-78h] BYREF
  int v22; // [rsp+BCh] [rbp-74h] BYREF
  int v23; // [rsp+C0h] [rbp-70h] BYREF
  int v24; // [rsp+C4h] [rbp-6Ch] BYREF
  int v25; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+100h] [rbp-30h] BYREF
  __int64 v33; // [rsp+108h] [rbp-28h] BYREF
  __int64 v34; // [rsp+110h] [rbp-20h] BYREF
  __int64 v35; // [rsp+118h] [rbp-18h] BYREF
  __int64 v36; // [rsp+120h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+130h] [rbp+0h] BYREF
  __int64 *v38; // [rsp+150h] [rbp+20h]
  int v39; // [rsp+158h] [rbp+28h]
  int v40; // [rsp+15Ch] [rbp+2Ch]
  int *v41; // [rsp+160h] [rbp+30h]
  int v42; // [rsp+168h] [rbp+38h]
  int v43; // [rsp+16Ch] [rbp+3Ch]
  DWORD *v44; // [rsp+170h] [rbp+40h]
  int v45; // [rsp+178h] [rbp+48h]
  int v46; // [rsp+17Ch] [rbp+4Ch]
  __int64 *v47; // [rsp+180h] [rbp+50h]
  int v48; // [rsp+188h] [rbp+58h]
  int v49; // [rsp+18Ch] [rbp+5Ch]
  int *v50; // [rsp+190h] [rbp+60h]
  int v51; // [rsp+198h] [rbp+68h]
  int v52; // [rsp+19Ch] [rbp+6Ch]

  v2 = (int *)*((_QWORD *)this + 6);
  v4 = a2;
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v14 = wil::details::static_lazy<WindowManagementLogging>::get(
            v13,
            _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v15 = (_DWORD *)v14[1];
    if ( *v15 > 5u && tlgKeywordOn(v14[1], 0x400000000000LL) )
    {
      v21 = v4;
      v27 = 0x2000000LL;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 6);
      v52 = 0;
      v49 = 0;
      v46 = 0;
      v43 = 0;
      v40 = 0;
      v20 = CurrentThreadId;
      v18 = *(_DWORD *)(v17 + 76);
      v26 = 0LL;
      v19 = v18;
      v50 = &v21;
      v47 = &v27;
      v44 = &v20;
      v41 = &v19;
      v38 = &v26;
      v51 = 4;
      v45 = 4;
      v42 = 4;
      v48 = 8;
      v39 = 8;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v15,
        (unsigned __int8 *)dword_1806C91BE,
        (const GUID *)(v17 + 8),
        0LL,
        7u,
        &v37);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                     v7,
                     _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
    {
      v29 = *((_QWORD *)v6 + 15);
      v11 = *((_QWORD *)this + 6);
      v30 = *((_QWORD *)v6 + 14);
      v12 = v6[26];
      v27 = 0LL;
      v23 = v12;
      v31 = *((_QWORD *)v6 + 12);
      v32 = *((_QWORD *)v6 + 11);
      v24 = v6[20];
      v33 = *((_QWORD *)v6 + 9);
      v25 = v6[8];
      v34 = *((_QWORD *)v6 + 3);
      v19 = *v6;
      v35 = *((_QWORD *)v6 + 16);
      v20 = v6[16];
      v36 = *((_QWORD *)v6 + 7);
      v21 = v6[2];
      v22 = v4;
      v28 = 0x2000000LL;
      v26 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v9,
        (unsigned __int8 *)dword_1806C922E,
        (const GUID *)(v11 + 8),
        v10,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v21,
        (const wchar_t **)&v36,
        (__int64)&v20,
        (const wchar_t **)&v35,
        (__int64)&v19,
        (const WCHAR **)&v34,
        (__int64)&v25,
        (const wchar_t **)&v33,
        (__int64)&v24,
        (const wchar_t **)&v32,
        (const WCHAR **)&v31,
        (__int64)&v23,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v28,
        (__int64)&v22);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CSnapComponentTelemetry::OnSnappingCancelled *)((char *)this + 8));
}
