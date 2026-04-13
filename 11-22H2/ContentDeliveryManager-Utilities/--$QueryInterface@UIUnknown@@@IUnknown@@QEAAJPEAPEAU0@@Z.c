/*
 * XREFs of ??$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z @ 0x180027D78
 * Callers:
 *     ??$?RUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@0PEA_N@Z @ 0x1800243C4 (--$-RUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceEquals@X.c)
 *     ??$?RUIAppInstallInfoRecord@ContentManagement@@@InterfaceEquals@XWinRT@@QEBAJPEAUIAppInstallInfoRecord@ContentManagement@@0PEA_N@Z @ 0x180079D40 (--$-RUIAppInstallInfoRecord@ContentManagement@@@InterfaceEquals@XWinRT@@QEBAJPEAUIAppInstallInfo.c)
 *     ??$?RUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@0PEA_N@Z @ 0x180079DFC (--$-RUIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Interface.c)
 *     ??$?RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@0PEA_N@Z @ 0x180085388 (--$-RUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Interfa.c)
 *     ??$?RUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@0PEA_N@Z @ 0x18008BDD4 (--$-RUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceEqual.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800A7730 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$?RUIInspectable@@@InterfaceEquals@XWinRT@@QEBAJPEAUIInspectable@@0PEA_N@Z @ 0x1800C48B0 (--$-RUIInspectable@@@InterfaceEquals@XWinRT@@QEBAJPEAUIInspectable@@0PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IUnknown::QueryInterface<IUnknown>(__int64 (__fastcall ***a1)(_QWORD, GUID *, __int64), __int64 a2)
{
  return (**a1)(a1, &GUID_00000000_0000_0000_c000_000000000046, a2);
}
