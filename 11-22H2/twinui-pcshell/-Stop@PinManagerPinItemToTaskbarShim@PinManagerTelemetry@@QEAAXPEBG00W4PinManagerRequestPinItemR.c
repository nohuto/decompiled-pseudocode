/*
 * XREFs of ?Stop@PinManagerPinItemToTaskbarShim@PinManagerTelemetry@@QEAAXPEBG00W4PinManagerRequestPinItemResult@2@@Z @ 0x1806A60F8
 * Callers:
 *     ??R_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x18069F118 (--R_lambda_753097bedced4ae9c1dc4d5cb6b36f6c_@@QEAA@W4PinManagerRequestPinItemResult@PinManagerTe.c)
 *     ?PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806A4550 (-PinItemToTaskbarShim@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDL.c)
 * Callees:
 *     ?get@?$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z @ 0x180084D90 (-get@-$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U4@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564566664@Z @ 0x18069B004 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18069B004.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@554@Z @ 0x18069B68C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U3@U3@U2@@-$_tlgW.c)
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1806AA3DC (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 */

void __fastcall PinManagerTelemetry::PinManagerPinItemToTaskbarShim::Stop(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int *v5; // rax
  int v10; // ecx
  int *v11; // rdi
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 *v18; // rax
  _DWORD *v19; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v24; // [rsp+C4h] [rbp-7Ch] BYREF
  int v25; // [rsp+C8h] [rbp-78h] BYREF
  int v26; // [rsp+CCh] [rbp-74h] BYREF
  int v27; // [rsp+D0h] [rbp-70h] BYREF
  int v28; // [rsp+D4h] [rbp-6Ch] BYREF
  __int64 v29; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v30; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+100h] [rbp-40h] BYREF
  __int64 v35; // [rsp+108h] [rbp-38h] BYREF
  __int64 v36; // [rsp+110h] [rbp-30h] BYREF
  __int64 v37; // [rsp+118h] [rbp-28h] BYREF
  __int64 v38; // [rsp+120h] [rbp-20h] BYREF
  __int64 v39; // [rsp+128h] [rbp-18h] BYREF
  __int64 v40; // [rsp+130h] [rbp-10h] BYREF
  __int64 v41; // [rsp+138h] [rbp-8h] BYREF
  __int64 v42; // [rsp+160h] [rbp+20h] BYREF

  v5 = *(int **)(a1 + 48);
  v10 = v5[19];
  if ( v10 >= 0 || v10 != v5[22] || (v11 = v5 + 20, v5 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v18 = wil::details::static_lazy<PinManagerTelemetry>::get(
            v17,
            (void (__cdecl *)())_lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_);
    v19 = (_DWORD *)v18[1];
    if ( *v19 > 5u && tlgKeywordOn(v18[1], 0x400000000000LL) )
    {
      LODWORD(v42) = a5;
      v32 = a4;
      v31 = a3;
      v30 = a2;
      CurrentThreadId = GetCurrentThreadId();
      v21 = *(_QWORD *)(a1 + 48);
      v24 = CurrentThreadId;
      v23 = *(_DWORD *)(v21 + 76);
      v29 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        (__int64)v19,
        (unsigned __int8 *)dword_180876E5D,
        (const GUID *)(v21 + 8),
        v22,
        (__int64)&v29,
        (__int64)&v23,
        (__int64)&v24,
        (const WCHAR **)&v30,
        (const WCHAR **)&v31,
        (const WCHAR **)&v32,
        (__int64)&v42);
    }
  }
  else
  {
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(a1);
    v13 = (_DWORD *)wil::details::static_lazy<PinManagerTelemetry>::get(
                      v12,
                      (void (__cdecl *)())_lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_)[1];
    if ( *v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
    {
      LODWORD(v42) = a5;
      v36 = *((_QWORD *)v11 + 15);
      v37 = *((_QWORD *)v11 + 14);
      v25 = v11[26];
      v16 = *(_QWORD *)(a1 + 48);
      v38 = *((_QWORD *)v11 + 12);
      v39 = *((_QWORD *)v11 + 11);
      v26 = v11[20];
      v40 = *((_QWORD *)v11 + 9);
      v27 = v11[8];
      v41 = *((_QWORD *)v11 + 3);
      v28 = *v11;
      v29 = *((_QWORD *)v11 + 16);
      v23 = v11[16];
      v30 = *((_QWORD *)v11 + 7);
      v24 = v11[2];
      v33 = a4;
      v34 = a3;
      v35 = a2;
      v31 = 0x1000000LL;
      v32 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v14,
        (unsigned __int8 *)dword_180876CE7,
        (const GUID *)(v16 + 8),
        v15,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v24,
        (const wchar_t **)&v30,
        (__int64)&v23,
        (const wchar_t **)&v29,
        (__int64)&v28,
        (const WCHAR **)&v41,
        (__int64)&v27,
        (const wchar_t **)&v40,
        (__int64)&v26,
        (const wchar_t **)&v39,
        (const WCHAR **)&v38,
        (__int64)&v25,
        (const wchar_t **)&v37,
        (const WCHAR **)&v36,
        (const WCHAR **)&v35,
        (const WCHAR **)&v34,
        (const WCHAR **)&v33,
        (__int64)&v42);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
