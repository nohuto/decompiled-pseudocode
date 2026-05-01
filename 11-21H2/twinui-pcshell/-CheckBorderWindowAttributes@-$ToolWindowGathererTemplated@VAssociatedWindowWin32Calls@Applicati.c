/*
 * XREFs of ?CheckBorderWindowAttributes@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x18022B536
 * Callers:
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x180312494 (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 * Callees:
 *     ?IsEligibleToolWindow@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAHPEAUHWND__@@@Z @ 0x18022B6A0 (-IsEligibleToolWindow@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewM.c)
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x180312048 (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAttributes(
        __int128 *a1,
        HWND a2,
        __int64 a3,
        __int64 a4)
{
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::IsEligibleToolWindow(a2) )
    return 2147500037LL;
  v8 = *a1;
  return ((__int64 (__fastcall *)(__int128 *, HWND, _QWORD, __int64))ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAlignment)(
           &v8,
           a2,
           0LL,
           a4);
}
