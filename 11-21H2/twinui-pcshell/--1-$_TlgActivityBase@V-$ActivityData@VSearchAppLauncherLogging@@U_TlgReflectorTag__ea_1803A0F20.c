/*
 * XREFs of ??1?$_TlgActivityBase@V?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0CAAAAAAAAAAA@$04@@IEAA@XZ @ 0x1803A0F20
 * Callers:
 *     ??1?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803A0EBC (--1-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType_ea_1803A0EBC.c)
 * Callees:
 *     ?get@?$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6AXXZ@Z @ 0x180092A5C (-get@-$static_lazy@VSearchAppLauncherLogging@@@details@wil@@QEAAPEAVSearchAppLauncherLogging@@P6.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEEA4 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall _TlgActivityBase<wil::ActivityBase<SearchAppLauncherLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>::~_TlgActivityBase<wil::ActivityBase<SearchAppLauncherLogging,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>(
        _DWORD *a1)
{
  __int64 *v2; // rax

  if ( *a1 == 1 )
  {
    *a1 = 2;
    v2 = wil::details::static_lazy<SearchAppLauncherLogging>::get(
           (__int64)a1,
           _lambda_96ed31eb20dc318a71419abe3e3a699d_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<35184372088832,5>((_DWORD *)v2[1]);
  }
  *a1 = 3;
}
