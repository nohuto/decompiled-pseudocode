/*
 * XREFs of ?SetZoomIncreasingThresholds@ManipulationInjector@@QEAAXJJ@Z @ 0x18004DA04
 * Callers:
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180179220 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18007AFB4 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall ManipulationInjector::SetZoomIncreasingThresholds(ManipulationInjector *this, int a2)
{
  unsigned int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 < 0 || *((_DWORD *)this + 22) )
  {
    v2 = wil::verify_hresult<long>(2147942487LL);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5B6,
      (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)v2,
      v3);
  }
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 7) = 600;
}
