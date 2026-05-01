/*
 * XREFs of CoTaskMemFree_0 @ 0x180189A5F
 * Callers:
 *     ??1?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@XZ @ 0x180424188 (--1-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@XZ.c)
 *     ?DestructElementsAndFree@?$array_helper@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$0A@@Details@Platform@@SAXPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180433504 (-DestructElementsAndFree@-$array_helper@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@.c)
 *     ?DestructElementsAndFree@?$array_helper@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$0A@@Details@Platform@@SAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x180442A3C (-DestructElementsAndFree@-$array_helper@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experience.c)
 *     ??1?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180588EDC (--1-$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@QEAA@.c)
 *     ?GetUnoccludedSnappedWindowsForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@IPEAIPEAPEAU423@@Z @ 0x180589A60 (-GetUnoccludedSnappedWindowsForWindow@-$produce@UTaskGroupsComponent@implementation@TaskGroups@S.c)
 *     ?GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AU?$com_array@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@UWindowId@WindowManagement@ApplicationModel@567@W4UnoccludedWindowsOptions@34567@@Z @ 0x180589AFC (-GetUnoccludedSnappedWindowsForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Intern.c)
 *     ?IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058A4B8 (-IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@.c)
 *     ?OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAAXAEBUIGuidedSnapAssistController@WindowSnapping@4567@AEBUGuidedSnapAssistCompletedArgs@94567@@Z @ 0x18058AF40 (-OnGuidedSnapAssistCompletedEvent@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@W.c)
 *     ?clear@?$com_array@Uguid@winrt@@@winrt@@QEAAXXZ @ 0x1805B4CA0 (-clear@-$com_array@Uguid@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get_SnapAssistSnappedWindows@?$produce@UGuidedSnapAssistCompletedArgs@implementation@WindowSnapping@Shell@Internal@Windows@winrt@@UIGuidedSnapAssistCompletedArgs@34567@@impl@winrt@@UEAAHPEAIPEAPEAUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@@Z @ 0x1805B55E0 (-get_SnapAssistSnappedWindows@-$produce@UGuidedSnapAssistCompletedArgs@implementation@WindowSnap.c)
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805C07D0 (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     EncodeRelativePath @ 0x1805F37E4 (EncodeRelativePath.c)
 *     ?GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z @ 0x18061B470 (-GetInfoFor32BitHBITMAP@@YAJPEAUHBITMAP__@@PEAH1PEAPEAUtagRGBQUAD@@1@Z.c)
 *     ?TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z @ 0x18061B670 (-TryGetDominantColorFromHBITMAP@@YA_NPEAUHBITMAP__@@_N1PEAKPEA_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall CoTaskMemFree_0(LPVOID pv)
{
  CoTaskMemFree(pv);
}
