/*
 * XREFs of ?InitializeOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x1801006E8
 * Callers:
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x180100230 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x1800FFF4C (-CreateOverlapEvent@ManipulationInjector@@AEAAXXZ.c)
 */

void __fastcall ManipulationInjector::InitializeOverlapEvent(
        ManipulationInjector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  HANDLE v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 98) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      63LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
  v5 = OpenEventA(0x1F0003u, 0, "ManipulationInjectorEnableOverlapEvent");
  *((_QWORD *)this + 98) = v5;
  if ( !v5 )
    ManipulationInjector::CreateOverlapEvent(this);
}
