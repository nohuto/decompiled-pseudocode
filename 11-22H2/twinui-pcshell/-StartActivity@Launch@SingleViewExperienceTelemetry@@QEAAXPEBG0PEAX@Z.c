/*
 * XREFs of ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z @ 0x18010DCFC
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18010D260 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@53@Z @ 0x18006ED98 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U1@@-$_tlgWriteTe.c)
 *     ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B978C (-zInternalStart@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_Tl.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall SingleViewExperienceTelemetry::Launch::StartActivity(
        SingleViewExperienceTelemetry::Launch *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rax
  _DWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h] BYREF
  __int64 v14; // [rsp+60h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp-20h] BYREF
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v9 = wil::details::static_lazy<SingleViewExperienceLogging>::get(
         v8,
         (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
  v10 = (_DWORD *)v9[1];
  if ( *v10 > 5u && tlgKeywordOn(v9[1], 0x200000000000LL) )
  {
    v12 = a4;
    v13 = (__int64)a3;
    v14 = (__int64)a2;
    v15 = 0x1000000LL;
    LODWORD(v16) = GetCurrentThreadId();
    v11 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      (int)v10,
      (int)&dword_18087ED41,
      *((_QWORD *)this + 6) + 8,
      v11,
      (__int64)&v15,
      (__int64)&v16,
      (const WCHAR **)&v14,
      (const WCHAR **)&v13,
      (__int64)&v12);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
