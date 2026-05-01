/*
 * XREFs of ?StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x18000CD88
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18000CAF8 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@543@Z @ 0x18000D550 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U2@U1@@-$_tlgWrit.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180075F30 (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall SingleViewExperienceTelemetry::Hide::StartActivity(
        SingleViewExperienceTelemetry::Hide *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4,
        void *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // edx
  int v16; // eax
  int v17; // [rsp+58h] [rbp-41h] BYREF
  DWORD CurrentThreadId; // [rsp+5Ch] [rbp-3Dh] BYREF
  __int64 v19; // [rsp+60h] [rbp-39h] BYREF
  __int64 v20; // [rsp+68h] [rbp-31h] BYREF
  __int64 v21; // [rsp+70h] [rbp-29h] BYREF
  __int64 v22; // [rsp+78h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+88h] [rbp-11h] BYREF
  const unsigned __int16 *v24; // [rsp+A8h] [rbp+Fh]
  int v25; // [rsp+B0h] [rbp+17h]
  int v26; // [rsp+B4h] [rbp+1Bh]
  __int64 *v27; // [rsp+B8h] [rbp+1Fh]
  __int64 v28; // [rsp+C0h] [rbp+27h]

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v11 = *(_QWORD *)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                      v9,
                      _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *(_DWORD *)v11 > 5u )
  {
    v10 = 0x200000000000LL;
    if ( (*(_QWORD *)(v11 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v11 + 24) & 0x200000000000LL) == *(_QWORD *)(v11 + 24) )
    {
      v20 = (__int64)a5;
      v17 = a4;
      v21 = (__int64)a3;
      v22 = (__int64)a2;
      v19 = 0x1000000LL;
      CurrentThreadId = GetCurrentThreadId();
      v16 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v11,
        (int)&dword_1806CFAD5,
        *((_QWORD *)this + 6) + 8,
        v16,
        (__int64)&v19,
        (__int64)&CurrentThreadId,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v17,
        (__int64)&v20);
    }
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((SingleViewExperienceTelemetry::Hide *)((char *)this + 8));
  if ( a4 != 1 )
  {
    v12 = *(_QWORD *)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                        v10,
                        _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v12 > 5u
      && (*(_QWORD *)(v12 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v12 + 24) & 0x400000000000LL) == *(_QWORD *)(v12 + 24) )
    {
      v13 = *((_QWORD *)this + 6) + 8LL;
      v19 = 0x1000000LL;
      v27 = &v19;
      v28 = 8LL;
      if ( a3 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( a3[v14] );
        v15 = 2 * v14 + 2;
      }
      else
      {
        a3 = &LocaleName;
        v15 = 2;
      }
      v25 = v15;
      v24 = a3;
      v26 = 0;
      tlgWriteTransfer_EventWriteTransfer(v12, (int)&dword_1806CFA9B, v13, 0, 4u, &v23);
    }
  }
}
