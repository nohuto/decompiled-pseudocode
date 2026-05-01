/*
 * XREFs of ?MultitaskingViewDismissed@TabletModePositioner@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180041530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x18004157C (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x1805069C8 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x180506A68 (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::MultitaskingViewDismissed(__int64 a1)
{
  TabletModePositioner *v2; // rbx
  int v3; // edx
  unsigned int v4; // edi
  int v6; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (TabletModePositioner *)(a1 - 176);
  v7 = a1 - 176;
  if ( TabletModePositioner::IsTabletMode((TabletModePositioner *)(a1 - 176))
    && (unsigned int)(v3 - 1) <= 1
    && TabletModePositioner::ShouldShowLauncher(v2)
    && !*(_BYTE *)(a1 + 67) )
  {
    v6 = TabletModePositioner::ShowLauncher(v2, 0);
    v4 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x602,
        (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v6,
        v7);
  }
  else
  {
    v4 = 0;
  }
  *((_BYTE *)v2 + 243) = 0;
  return v4;
}
