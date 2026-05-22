/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180095F8C
 * Callers:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180031890 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180031C78 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Create@InputSystemInternalServerConnection@@SA?AV?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180031FD8 (-Create@InputSystemInternalServerConnection@@SA-AV-$ComPtr@VInputSystemInternalServerConnection@.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180039474 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InitPort@NonBamoInputDeliveryServer@@AEAAXXZ @ 0x1800395B8 (-InitPort@NonBamoInputDeliveryServer@@AEAAXXZ.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18004A82C (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18004E4AC (-SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180053E80 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x1800BCC44 (--0MPCCursorManager@@QEAA@XZ.c)
 *     ??1MPCCursorManager@@QEAA@XZ @ 0x1800BCDAC (--1MPCCursorManager@@QEAA@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800BD4F4 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     ?StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z @ 0x1800CB530 (-StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800D27F4 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800EB970 (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x180110100 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@@Z @ 0x180140A88 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?TimeFromPerfCount@EdgyRecognizer@@AEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x18016A524 (-TimeFromPerfCount@EdgyRecognizer@@AEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU.c)
 *     ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x1801B2458 (-UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801CE9EC (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180090CEC (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::ReportFailure_GetLastError<3>(this, a2, a3, a4, v4, retaddr);
}
