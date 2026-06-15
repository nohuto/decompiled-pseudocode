/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18002FD44
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _lambda_7af2eb194479c71b10cc30af6f218930_::operator() @ 0x18003473C (_lambda_7af2eb194479c71b10cc30af6f218930_--operator().c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x1800380EC (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x18002BF70 (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
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
