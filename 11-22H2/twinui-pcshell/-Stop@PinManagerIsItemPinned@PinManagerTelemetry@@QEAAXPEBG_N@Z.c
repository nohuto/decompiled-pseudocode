/*
 * XREFs of ?Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z @ 0x1806A5BD8
 * Callers:
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x1806A320C (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z @ 0x180084D90 (-get@-$static_lazy@VPinManagerTelemetry@@@details@wil@@QEAAPEAVPinManagerTelemetry@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U4@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564566AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18069B384 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18069B384.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18069B7E0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U-$_tlgWrapperByV.c)
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1806AA3DC (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 */

void __fastcall PinManagerTelemetry::PinManagerIsItemPinned::Stop(
        PinManagerTelemetry::PinManagerIsItemPinned *this,
        const unsigned __int16 *a2,
        char a3)
{
  int *v3; // rax
  int v7; // ecx
  int *v8; // rdi
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 *v15; // rax
  _DWORD *v16; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE v20[4]; // [rsp+B0h] [rbp-80h] BYREF
  int v21; // [rsp+B4h] [rbp-7Ch] BYREF
  DWORD v22; // [rsp+B8h] [rbp-78h] BYREF
  int v23; // [rsp+BCh] [rbp-74h] BYREF
  int v24; // [rsp+C0h] [rbp-70h] BYREF
  int v25; // [rsp+C4h] [rbp-6Ch] BYREF
  int v26; // [rsp+C8h] [rbp-68h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v33; // [rsp+100h] [rbp-30h] BYREF
  __int64 v34; // [rsp+108h] [rbp-28h] BYREF
  __int64 v35; // [rsp+110h] [rbp-20h] BYREF
  __int64 v36; // [rsp+118h] [rbp-18h] BYREF
  __int64 v37; // [rsp+120h] [rbp-10h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 >= 0 || v7 != v3[22] || (v8 = v3 + 20, v3 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v15 = wil::details::static_lazy<PinManagerTelemetry>::get(
            v14,
            (void (__cdecl *)())_lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_);
    v16 = (_DWORD *)v15[1];
    if ( *v16 > 5u && tlgKeywordOn(v15[1], 0x400000000000LL) )
    {
      v20[0] = a3;
      v28 = (__int64)a2;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 6);
      v22 = CurrentThreadId;
      v21 = *(_DWORD *)(v18 + 76);
      v27 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        (__int64)v16,
        (unsigned __int8 *)dword_180877CC6,
        (const GUID *)(v18 + 8),
        v19,
        (__int64)&v27,
        (__int64)&v21,
        (__int64)&v22,
        (const WCHAR **)&v28,
        (__int64)v20);
    }
  }
  else
  {
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v10 = (_DWORD *)wil::details::static_lazy<PinManagerTelemetry>::get(
                      v9,
                      (void (__cdecl *)())_lambda_0da5e8ba5c2e2fa19b2167a51cfd1f3e_::_lambda_invoker_cdecl_)[1];
    if ( *v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      v30 = *((_QWORD *)v8 + 15);
      v31 = *((_QWORD *)v8 + 14);
      v13 = *((_QWORD *)this + 6);
      v23 = v8[26];
      v32 = *((_QWORD *)v8 + 12);
      v33 = *((_QWORD *)v8 + 11);
      v24 = v8[20];
      v34 = *((_QWORD *)v8 + 9);
      v25 = v8[8];
      v35 = *((_QWORD *)v8 + 3);
      v26 = *v8;
      v36 = *((_QWORD *)v8 + 16);
      v21 = v8[16];
      v37 = *((_QWORD *)v8 + 7);
      v22 = v8[2];
      v27 = 0x1000000LL;
      v28 = 0x1000000LL;
      v20[0] = a3;
      v29 = (__int64)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        v11,
        (unsigned __int8 *)dword_180878085,
        (const GUID *)(v13 + 8),
        v12,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v22,
        (const wchar_t **)&v37,
        (__int64)&v21,
        (const wchar_t **)&v36,
        (__int64)&v26,
        (const WCHAR **)&v35,
        (__int64)&v25,
        (const wchar_t **)&v34,
        (__int64)&v24,
        (const wchar_t **)&v33,
        (const WCHAR **)&v32,
        (__int64)&v23,
        (const wchar_t **)&v31,
        (const WCHAR **)&v30,
        (const WCHAR **)&v29,
        (__int64)v20);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
