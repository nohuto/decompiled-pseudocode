/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VAAMTraceProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x180571528
 * Callers:
 *     ??1?$ActivityData@VAAMTraceProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAAMTraceProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1805714B0 (--1-$ActivityData@VAAMTraceProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VAA.c)
 * Callees:
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?get@?$static_lazy@VAAMTraceProvider@@@details@wil@@QEAAPEAVAAMTraceProvider@@P6AXXZ@Z @ 0x1805756E4 (-get@-$static_lazy@VAAMTraceProvider@@@details@wil@@QEAAPEAVAAMTraceProvider@@P6AXXZ@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AAMTraceProvider,_TlgReflectorTag_Param0IsProviderType>,0,5>::~_TlgActivityBase<wil::ActivityBase<AAMTraceProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AAMTraceProvider,_TlgReflectorTag_Param0IsProviderType>,0,5>(
        __int64 a1)
{
  __int64 v2; // rax

  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v2 = wil::details::static_lazy<AAMTraceProvider>::get(
           a1,
           _lambda_7e8ef9e9b596109f338594047241dcdf_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<0,5>(*(_DWORD **)(v2 + 8), (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
}
