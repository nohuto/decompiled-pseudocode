/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x18017CC90
 * Callers:
 *     ??1?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017CC5C (--1-$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VTask.c)
 * Callees:
 *     ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x18017CE00 (-get@-$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180395D28 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::~_TlgActivityBase<wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>(
        _DWORD *a1)
{
  __int64 v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = wil::details::static_lazy<TaskbarLogging>::get(
           a1,
           _lambda_fb11ae61ca52cbbca3d237d126ab4bed_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<35184372088832,5>(*(_QWORD *)(v2 + 8), a1 + 2);
  }
  *a1 = 3;
}
