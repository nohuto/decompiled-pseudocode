/*
 * XREFs of ?SetZoomDecreasingThresholds@ManipulationInjector@@QEAAXJJ@Z @ 0x18012B574
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x1800CB2F4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801A6620 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ManipulationInjector::SetZoomDecreasingThresholds(ManipulationInjector *this, int a2, int a3)
{
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 < 0 || a3 < 0 || *((_DWORD *)this + 22) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5C6,
      (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)0x80070057LL,
      v3);
  *((_DWORD *)this + 8) = a2;
  *((_DWORD *)this + 9) = a3;
}
