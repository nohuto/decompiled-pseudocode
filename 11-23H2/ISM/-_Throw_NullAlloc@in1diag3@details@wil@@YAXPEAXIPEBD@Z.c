/*
 * XREFs of ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18017E684
 * Callers:
 *     wil::MakeAgileCallback_Windows::System::IDispatcherQueueHandler__lambda_be14e41fc69e48f10010ada4f55a452e___ @ 0x180177238 (wil--MakeAgileCallback_Windows--System--IDispatcherQueueHandler__lambda_be14e41fc69e48f10010ada4.c)
 * Callees:
 *     ??$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800C0928 (--$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_NullAlloc(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = -2147024882;
  wil::details::ReportFailure_Hr<0>(
    (__int64)this,
    83LL,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
    (__int64)a4,
    v4,
    retaddr,
    v5);
}
