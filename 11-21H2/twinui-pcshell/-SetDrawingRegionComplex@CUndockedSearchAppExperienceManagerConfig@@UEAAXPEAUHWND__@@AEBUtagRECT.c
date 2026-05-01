/*
 * XREFs of ?SetDrawingRegionComplex@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801A1030
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1801A10D4 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
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
      (void *)0x185,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v9);
}
