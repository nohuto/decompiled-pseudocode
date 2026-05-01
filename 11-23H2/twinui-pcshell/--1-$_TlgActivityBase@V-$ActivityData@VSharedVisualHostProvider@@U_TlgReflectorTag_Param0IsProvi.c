/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1806E6B7C
 * Callers:
 *     ??1?$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSharedVisualHostProvider@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1806E6B14 (--1-$ActivityData@VSharedVisualHostProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 * Callees:
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180395D28 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?get@?$static_lazy@VSharedVisualHostProvider@@@details@wil@@QEAAPEAVSharedVisualHostProvider@@P6AXXZ@Z @ 0x1806ED0C8 (-get@-$static_lazy@VSharedVisualHostProvider@@@details@wil@@QEAAPEAVSharedVisualHostProvider@@P6.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::~_TlgActivityBase<wil::ActivityBase<SharedVisualHostProvider,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SharedVisualHostProvider,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>(
        _DWORD *a1)
{
  __int64 v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = wil::details::static_lazy<SharedVisualHostProvider>::get(
           a1,
           _lambda_33f7b6abc9dd15539bbd1f422d65a3e7_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<35184372088832,5>(*(_DWORD **)(v2 + 8));
  }
  *a1 = 3;
}
