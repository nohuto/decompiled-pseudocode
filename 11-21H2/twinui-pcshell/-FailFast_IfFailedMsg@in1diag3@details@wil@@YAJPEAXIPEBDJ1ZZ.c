/*
 * XREFs of ?FailFast_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1804A74C8
 * Callers:
 *     ?IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z @ 0x1804A7A34 (-IsSideBarView@PPISideBarHelpers@@SA_NPEAUIApplicationView@@@Z.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1805E389C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1803CB9F4 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 wil::details::in1diag3::FailFast_IfFailedMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  wil::details *v8; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( (int)a4 < 0 )
  {
    LODWORD(v8) = (_DWORD)a4;
    wil::details::ReportFailure_HrMsg<3>((int)this, (int)a2, a3, (__int64)a4, v7, retaddr, v8, a5, (__int64)&a6);
  }
  return (unsigned int)a4;
}
