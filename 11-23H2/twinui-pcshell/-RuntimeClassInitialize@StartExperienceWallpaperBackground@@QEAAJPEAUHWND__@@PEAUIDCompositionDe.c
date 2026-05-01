/*
 * XREFs of ?RuntimeClassInitialize@StartExperienceWallpaperBackground@@QEAAJPEAUHWND__@@PEAUIDCompositionDevice@@@Z @ 0x180470A2C
 * Callers:
 *     ??$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDevice@@@Details@WRL@Microsoft@@YAJPEAPEAVStartExperienceWallpaperBackground@@AEAPEAUHWND__@@$$QEAPEAUIDCompositionDevice@@@Z @ 0x180443F70 (--$MakeAndInitialize@VStartExperienceWallpaperBackground@@V1@AEAPEAUHWND__@@PEAUIDCompositionDev.c)
 * Callees:
 *     McTemplateU0q_EventWriteTransfer @ 0x180024F70 (McTemplateU0q_EventWriteTransfer.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDevice@@@Z @ 0x1802D5344 (--4-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDevice@@@Z.c)
 *     McTemplateU0dddd_EventWriteTransfer @ 0x1803A7F94 (McTemplateU0dddd_EventWriteTransfer.c)
 *     ?RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z @ 0x1804709CC (-RebuildScene@StartExperienceWallpaperBackground@@AEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall StartExperienceWallpaperBackground::RuntimeClassInitialize(
        StartExperienceWallpaperBackground *this,
        HWND a2,
        struct IDCompositionDevice *a3)
{
  int updated; // eax
  HWND v5; // rcx
  int v6; // edi
  __int64 v7; // rcx
  unsigned int Error; // ebx
  struct tagRECT Rect; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *((_QWORD *)this + 3) = a2;
  Microsoft::WRL::ComPtr<IDCompositionDevice>::operator=((__int64 *)this + 4, (__int64)a3);
  updated = UpdateWallpaperTransition(13LL);
  v5 = (HWND)*((_QWORD *)this + 3);
  v6 = updated;
  Rect = 0LL;
  if ( GetWindowRect(v5, &Rect) )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dddd_EventWriteTransfer(
      v7,
      &WallpaperBackground_SceneInitialization_Start,
      (unsigned int)Rect.left,
      Rect.top,
      Rect.right,
      Rect.bottom);
  if ( (Error & 0x80000000) == 0 )
  {
    Error = v6;
    *((_BYTE *)this + 16) = v6 >= 0;
    if ( v6 >= 0 )
      Error = StartExperienceWallpaperBackground::RebuildScene(this, &Rect);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencewallpaperbackground.cpp",
      (const char *)Error);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0q_EventWriteTransfer(v7, (__int64)&WallpaperBackground_SceneInitialization_Stop, Error);
  return Error;
}
