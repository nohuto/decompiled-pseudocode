/*
 * XREFs of EnumWindowsHelpers::ForEachWindow__lambda_e99dd074b1c39f544766be5cae5c8ed4___ @ 0x180216534
 * Callers:
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAU2@@Z @ 0x18060FC40 (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV-$CCoSimpleA.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall EnumWindowsHelpers::ForEachWindow__lambda_e99dd074b1c39f544766be5cae5c8ed4___(LPARAM a1)
{
  return EnumWindows(
           (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_e99dd074b1c39f544766be5cae5c8ed4___,
           a1);
}
