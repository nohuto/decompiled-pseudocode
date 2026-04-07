/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A9F38
 * Callers:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180016E60 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800995EC (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<2>(
    (__int64)this,
    945,
    (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
    0LL,
    0LL,
    retaddr,
    v6);
  return v4;
}
