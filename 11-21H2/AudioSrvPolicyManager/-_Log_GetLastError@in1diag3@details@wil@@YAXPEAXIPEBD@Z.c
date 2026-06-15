/*
 * XREFs of ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800256B4
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18002D3D8 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x18001E4FC (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<2>((__int64)this, (int)a2, a3, (__int64)a4, v4, retaddr);
}
