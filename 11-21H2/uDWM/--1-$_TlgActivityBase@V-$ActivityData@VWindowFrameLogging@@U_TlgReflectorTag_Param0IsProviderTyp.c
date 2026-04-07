/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1800CB7D8
 * Callers:
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800CB774 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x1800065A8 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800CB624 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::~_TlgActivityBase<wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>(
        _DWORD *a1)
{
  __int64 *v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = wil::details::static_lazy<WindowFrameLogging>::get(
           (__int64)a1,
           _lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<35184372088832,5>((_DWORD *)v2[1]);
  }
  *a1 = 3;
}
