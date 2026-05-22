/*
 * XREFs of ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A8B5C
 * Callers:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18001ADB0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180033434 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Create@InputSystemInternalServerConnection@@SA?AV?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x1800337C8 (-Create@InputSystemInternalServerConnection@@SA-AV-$ComPtr@VInputSystemInternalServerConnection@.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x1800356A4 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InitPort@NonBamoInputDeliveryServer@@AEAAXXZ @ 0x1800357E8 (-InitPort@NonBamoInputDeliveryServer@@AEAAXXZ.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18004B18C (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18004EDDC (-SetBootstrapProxy@AnimationDataProvider@@QEAAXPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180054C40 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x1800768EC (-ISMShutDown@InputProcessManager@@AEAAXXZ.c)
 *     ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x180076BA0 (-StartProcess@InputProcessManager@@QEAAXXZ.c)
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x1800CD590 (--0MPCCursorManager@@QEAA@XZ.c)
 *     ??1MPCCursorManager@@QEAA@XZ @ 0x1800CD6F8 (--1MPCCursorManager@@QEAA@XZ.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800CDD5C (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     ?StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z @ 0x1800DA780 (-StopProcess@InputProcess@@MEAAJPEAVBamoInputProcessPrincipal@@PEAVBamoInputProcessStub@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1800E1964 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800FA910 (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x18011E170 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@@Z @ 0x18014EB38 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?TimeFromPerfCount@EdgyRecognizer@@AEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801787A4 (-TimeFromPerfCount@EdgyRecognizer@@AEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU.c)
 *     ?UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x1801C0438 (-UpdateMouseAsTouchMode@MouseProcessor@@AEAAXPEAUHKEY__@@@Z.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x1801DC25C (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 * Callees:
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x1800A389C (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
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
