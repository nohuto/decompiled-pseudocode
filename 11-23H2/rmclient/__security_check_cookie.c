/*
 * XREFs of __security_check_cookie @ 0x18000AD40
 * Callers:
 *     sub_180001008 @ 0x180001008 (sub_180001008.c)
 *     sub_180001074 @ 0x180001074 (sub_180001074.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     sub_1800011EC @ 0x1800011EC (sub_1800011EC.c)
 *     sub_180001288 @ 0x180001288 (sub_180001288.c)
 *     sub_180001340 @ 0x180001340 (sub_180001340.c)
 *     sub_1800013C0 @ 0x1800013C0 (sub_1800013C0.c)
 *     sub_18000145C @ 0x18000145C (sub_18000145C.c)
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180001AF0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 *     HamConnectToServerEx @ 0x180003150 (HamConnectToServerEx.c)
 *     sub_180003338 @ 0x180003338 (sub_180003338.c)
 *     sub_1800034B0 @ 0x1800034B0 (sub_1800034B0.c)
 *     sub_180003584 @ 0x180003584 (sub_180003584.c)
 *     sub_1800044E0 @ 0x1800044E0 (sub_1800044E0.c)
 *     sub_180005140 @ 0x180005140 (sub_180005140.c)
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 *     HamQueryPackageUsageInfo @ 0x180007090 (HamQueryPackageUsageInfo.c)
 *     HamQueryCallerTerminateReason @ 0x1800072B0 (HamQueryCallerTerminateReason.c)
 *     sub_18000738C @ 0x18000738C (sub_18000738C.c)
 *     sub_180007560 @ 0x180007560 (sub_180007560.c)
 *     sub_180007760 @ 0x180007760 (sub_180007760.c)
 *     sub_180009000 @ 0x180009000 (sub_180009000.c)
 *     sub_180009930 @ 0x180009930 (sub_180009930.c)
 *     HamConnectForStateChangeNotifications @ 0x180009FF0 (HamConnectForStateChangeNotifications.c)
 *     sub_18000C640 @ 0x18000C640 (sub_18000C640.c)
 *     sub_18000C948 @ 0x18000C948 (sub_18000C948.c)
 *     sub_18000D260 @ 0x18000D260 (sub_18000D260.c)
 *     sub_18000D3CC @ 0x18000D3CC (sub_18000D3CC.c)
 *     sub_18000D65C @ 0x18000D65C (sub_18000D65C.c)
 *     sub_18000DF94 @ 0x18000DF94 (sub_18000DF94.c)
 *     sub_18000E3C4 @ 0x18000E3C4 (sub_18000E3C4.c)
 *     sub_18000F6B0 @ 0x18000F6B0 (sub_18000F6B0.c)
 *     sub_18000F864 @ 0x18000F864 (sub_18000F864.c)
 *     sub_18000FFC4 @ 0x18000FFC4 (sub_18000FFC4.c)
 *     sub_180010EF0 @ 0x180010EF0 (sub_180010EF0.c)
 *     sub_180011BFC @ 0x180011BFC (sub_180011BFC.c)
 *     sub_180011DFC @ 0x180011DFC (sub_180011DFC.c)
 *     sub_180012160 @ 0x180012160 (sub_180012160.c)
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_180012EF4 @ 0x180012EF4 (sub_180012EF4.c)
 *     sub_1800131B4 @ 0x1800131B4 (sub_1800131B4.c)
 *     sub_180013460 @ 0x180013460 (sub_180013460.c)
 *     sub_180013784 @ 0x180013784 (sub_180013784.c)
 *     sub_180013B70 @ 0x180013B70 (sub_180013B70.c)
 *     sub_180013C10 @ 0x180013C10 (sub_180013C10.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_180013F04 @ 0x180013F04 (sub_180013F04.c)
 *     sub_18001417C @ 0x18001417C (sub_18001417C.c)
 *     HamAssociateActivityContext @ 0x180014660 (HamAssociateActivityContext.c)
 *     HamQueryHostStateSummary @ 0x180014B30 (HamQueryHostStateSummary.c)
 *     __GSHandlerCheckCommon @ 0x180016948 (__GSHandlerCheckCommon.c)
 *     sub_18001B450 @ 0x18001B450 (sub_18001B450.c)
 *     RmSetProcessManagement @ 0x18001C4A0 (RmSetProcessManagement.c)
 *     sub_18001D0E4 @ 0x18001D0E4 (sub_18001D0E4.c)
 *     HamQueryApplicationUsageInfo @ 0x18001E060 (HamQueryApplicationUsageInfo.c)
 *     sub_18001EC40 @ 0x18001EC40 (sub_18001EC40.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
