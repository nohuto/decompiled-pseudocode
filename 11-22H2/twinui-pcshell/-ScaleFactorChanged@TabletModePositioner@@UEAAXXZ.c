/*
 * XREFs of ?ScaleFactorChanged@TabletModePositioner@@UEAAXXZ @ 0x1805BE3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x1805BDC4C (-LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ.c)
 */

void __fastcall TabletModePositioner::ScaleFactorChanged(TabletModePositioner *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = TabletModePositioner::LayoutEnvironmentChanged((TabletModePositioner *)((char *)this - 112));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A2,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v1);
}
