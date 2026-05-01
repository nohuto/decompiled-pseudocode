/*
 * XREFs of ?SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x18046A400
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x18046A530 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1.c)
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::SetDrawingRegion(
        CUndockedSearchAppExperienceManagerConfig *this,
        HWND a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  unsigned int v8; // ebx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v8 = IsRectEmpty(a3) ? 2 : 0;
  CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync(this, a2, a3, a4);
  if ( !SetPropW(a2, L"UIA_WindowVisibilityOverridden", (HANDLE)v8) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x1E2,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v9);
}
