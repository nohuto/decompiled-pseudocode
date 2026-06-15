/*
 * XREFs of ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B7D0
 * Callers:
 *     ?RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z @ 0x180029480 (-RpcCheckDataFlowAccess@CProcess@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAH@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180024280 (--$ReportFailure_Hr@$0A@@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_Throw_Hr(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        int a5)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<0>((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6);
}
