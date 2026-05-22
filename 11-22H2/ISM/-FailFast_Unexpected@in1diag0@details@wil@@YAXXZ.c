/*
 * XREFs of ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x180127EE8
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180017E70 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x1800520D0 (--0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z.c)
 *     ??$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1801266BC (--$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z.c)
 *     ??$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1801266F4 (--$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800A3A50 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag0::FailFast_Unexpected(
        wil::details::in1diag0 *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = -2147418113;
  wil::details::ReportFailure_Hr<3>(0LL, 0LL, 0LL, a4, v4, retaddr, v5);
}
