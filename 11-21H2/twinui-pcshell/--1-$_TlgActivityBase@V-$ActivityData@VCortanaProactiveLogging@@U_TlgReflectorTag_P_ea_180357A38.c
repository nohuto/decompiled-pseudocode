/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$0A@@@IEAA@XZ @ 0x180357A38
 * Callers:
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803578BC (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1803578BC.c)
 * Callees:
 *     ?get@?$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AXXZ@Z @ 0x18012AF8C (-get@-$static_lazy@VCortanaProactiveLogging@@@details@wil@@QEAAPEAVCortanaProactiveLogging@@P6AX.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$0A@@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180357040 (--$_tlgWriteActivityAutoStop@$0A@$0A@@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>,0,0>::~_TlgActivityBase<wil::ActivityBase<CortanaProactiveLogging,1,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>,0,0>(
        __int64 a1)
{
  __int64 *v2; // rax

  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v2 = wil::details::static_lazy<CortanaProactiveLogging>::get(
           a1,
           _lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<0,0>((_DWORD *)v2[1], (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
}
