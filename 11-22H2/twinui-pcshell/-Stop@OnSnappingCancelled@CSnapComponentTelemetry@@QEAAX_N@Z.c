/*
 * XREFs of ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x1806645AC
 * Callers:
 *     ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x1802E8EE0 (-OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEven.c)
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1806623F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ @ 0x180662AF0 (-OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ.c)
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002D3B8 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645634@Z @ 0x18065D6F8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18065D6F8.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@434@Z @ 0x18065E31C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
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
  __int64 v19; // r9
  int v20; // [rsp+B0h] [rbp-80h] BYREF
  int v21; // [rsp+B4h] [rbp-7Ch] BYREF
  int v22; // [rsp+B8h] [rbp-78h] BYREF
  int v23; // [rsp+BCh] [rbp-74h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v29; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+100h] [rbp-30h] BYREF
  __int64 v33; // [rsp+108h] [rbp-28h] BYREF
  __int64 v34; // [rsp+110h] [rbp-20h] BYREF
  __int64 v35; // [rsp+140h] [rbp+10h] BYREF
  __int64 v36; // [rsp+150h] [rbp+20h] BYREF
  __int64 v37; // [rsp+158h] [rbp+28h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v4 = a2;
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v6 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v14 = wil::details::static_lazy<WindowManagementLogging>::get(
            v13,
            (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    v15 = (_DWORD *)v14[1];
    if ( *v15 > 5u && tlgKeywordOn(v14[1], 0x400000000000LL) )
    {
      LODWORD(v35) = v4;
      v25 = 0x2000000LL;
      CurrentThreadId = GetCurrentThreadId();
      v17 = *((_QWORD *)this + 6);
      LODWORD(v36) = CurrentThreadId;
      v18 = *(_DWORD *)(v17 + 76);
      v24 = 0LL;
      LODWORD(v37) = v18;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (__int64)v15,
        byte_180872399,
        (const GUID *)(v17 + 8),
        v19,
        (__int64)&v24,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v25,
        (__int64)&v35);
    }
  }
  else
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v8 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                     v7,
                     (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
    {
      v27 = *((_QWORD *)v6 + 15);
      v11 = *((_QWORD *)this + 6);
      v28 = *((_QWORD *)v6 + 14);
      v12 = v6[26];
      v25 = 0LL;
      LODWORD(v36) = v12;
      v29 = *((_QWORD *)v6 + 12);
      v30 = *((_QWORD *)v6 + 11);
      LODWORD(v37) = v6[20];
      v31 = *((_QWORD *)v6 + 9);
      v20 = v6[8];
      v32 = *((_QWORD *)v6 + 3);
      v21 = *v6;
      v33 = *((_QWORD *)v6 + 16);
      v22 = v6[16];
      v34 = *((_QWORD *)v6 + 7);
      v23 = v6[2];
      LODWORD(v35) = v4;
      v26 = 0x2000000LL;
      v24 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v9,
        (unsigned __int8 *)dword_180872409,
        (const GUID *)(v11 + 8),
        v10,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (const wchar_t **)&v34,
        (__int64)&v22,
        (const wchar_t **)&v33,
        (__int64)&v21,
        (const WCHAR **)&v32,
        (__int64)&v20,
        (const wchar_t **)&v31,
        (__int64)&v37,
        (const wchar_t **)&v30,
        (const WCHAR **)&v29,
        (__int64)&v36,
        (const wchar_t **)&v28,
        (const WCHAR **)&v27,
        (__int64)&v26,
        (__int64)&v35);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
