/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007EE54
 * Callers:
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180029FAC (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?Create@InputSystemInternalServerConnection@@SA?AV?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18002C6E4 (-Create@InputSystemInternalServerConnection@@SA-AV-$ComPtr@VInputSystemInternalServerConnection@.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002DBC0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x1800333D8 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?InitPort@NonBamoInputDeliveryServer@@AEAAXXZ @ 0x180034670 (-InitPort@NonBamoInputDeliveryServer@@AEAAXXZ.c)
 *     ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x1800449B4 (-SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800480B0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180048A8C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x1800A4DCC (--0MPCCursorManager@@QEAA@XZ.c)
 *     ??1MPCCursorManager@@QEAA@XZ @ 0x1800A4F5C (--1MPCCursorManager@@QEAA@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800A55F4 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     ?StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z @ 0x1800B2300 (-StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800B9934 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D1F50 (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x1800F5830 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@@Z @ 0x180126408 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?TimeFromPerfCount@EdgyRecognizer@@AEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x18014BCE0 (-TimeFromPerfCount@EdgyRecognizer@@AEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU.c)
 *     ?TimeFromPerfCount@ShellGesturesRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x18014EE70 (-TimeFromPerfCount@ShellGesturesRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$dur.c)
 *     ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x180194548 (-UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801B05B8 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x180079EFC (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
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
