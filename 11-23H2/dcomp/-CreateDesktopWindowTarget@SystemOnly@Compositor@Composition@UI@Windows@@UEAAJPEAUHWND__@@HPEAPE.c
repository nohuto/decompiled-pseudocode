/*
 * XREFs of ?CreateDesktopWindowTarget@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@HPEAPEAUIDesktopWindowTarget@Desktop@345@@Z @ 0x18008A990
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VGlobalDesktopWindowTarget@Desktop@Composition@UI@Windows@@VDesktopWindowTarget@2345@AEAPEAVCompositor@345@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Details@WRL2@Microsoft@@YAJPEAPEAVDesktopWindowTarget@Desktop@Composition@UI@Windows@@AEAPEAVCompositor@567@AEAPEAUHWND__@@AEAW4_HwndTargetType@@@Z @ 0x180085020 (--$MakeAndInitialize2@VGlobalDesktopWindowTarget@Desktop@Composition@UI@Windows@@VDesktopWindowT.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::SystemOnly::CreateDesktopWindowTarget(
        Windows::UI::Composition::Compositor::SystemOnly *this,
        HWND a2,
        __int64 a3,
        struct Windows::UI::Composition::Desktop::IDesktopWindowTarget **a4)
{
  struct Windows::UI::Composition::Compositor *v4; // rdi
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  char v10; // al
  __int64 v11; // rdx
  struct Windows::UI::Composition::Desktop::IDesktopWindowTarget *v12; // rdx
  unsigned int v14; // edx
  bool v15; // zf
  struct Windows::UI::Composition::Compositor *v16; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Windows::UI::Composition::Desktop::DesktopWindowTarget *v18; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v4 = (Windows::UI::Composition::Compositor::SystemOnly *)((char *)this - 1136);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1136));
  if ( (*((_BYTE *)v4 + 32) & 2) == 0 )
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_8;
  }
  if ( !a2 )
  {
    v9 = -2147024809;
    v14 = 2217;
LABEL_13:
    DoStackCaptureDirect(v9, v14);
    goto LABEL_8;
  }
  v18 = 0LL;
  v16 = v4;
  v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Desktop::GlobalDesktopWindowTarget,Windows::UI::Composition::Desktop::DesktopWindowTarget,Windows::UI::Composition::Compositor * &,HWND__ * &,enum _HwndTargetType &>(
         &v18,
         &v16);
  v9 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v18);
    v14 = 2220;
    goto LABEL_13;
  }
  v10 = *((_BYTE *)v4 + 452);
  if ( (v10 & 1) == 0 )
  {
    v15 = *((_DWORD *)v4 + 112) == 0;
    *((_BYTE *)v4 + 452) = v10 | 1;
    if ( v15 )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(v4, v8);
  }
  v11 = ((unsigned __int64)v18 + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)v18 >> 64);
  if ( v11 )
    v12 = (struct Windows::UI::Composition::Desktop::IDesktopWindowTarget *)(v11 + 8);
  else
    v12 = 0LL;
  *a4 = v12;
  v9 = 0;
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v4);
  return v9;
}
