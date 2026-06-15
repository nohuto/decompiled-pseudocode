/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18002FB54
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033A0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _lambda_ab72ab04c21953f372991cfef701d912_::operator() @ 0x1800346F4 (_lambda_ab72ab04c21953f372991cfef701d912_--operator().c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180037458 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x18002BD80 (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<2>(this, a2, a3, a4, v4, retaddr);
}
