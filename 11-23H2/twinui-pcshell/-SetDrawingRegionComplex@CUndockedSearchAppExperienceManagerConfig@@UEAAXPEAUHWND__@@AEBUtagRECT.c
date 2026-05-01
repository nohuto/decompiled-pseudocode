/*
 * XREFs of ?SetDrawingRegionComplex@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B66B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800B9030 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::SetDrawingRegionComplex(
        __int64 a1,
        HWND a2,
        const RECT *a3,
        __int64 a4)
{
  unsigned int v8; // ebx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v8 = IsRectEmpty(a3) ? 2 : 0;
  CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync(a1, a2, a3, a4);
  if ( !SetPropW(a2, L"UIA_WindowVisibilityOverridden", (HANDLE)v8) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x1ED,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v9);
}
