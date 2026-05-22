/*
 * XREFs of ??0MPC3DStateHelper@@AEAA@XZ @ 0x18002DE48
 * Callers:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18002C220 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002E200 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoteInputPostProcessor@@@details@wil@@Q.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800480B0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180090E9C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=11
MPC3DStateHelper *__fastcall MPC3DStateHelper::MPC3DStateHelper(MPC3DStateHelper *this)
{
  __int64 *v2; // r14
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  wil::details **v6; // r15
  void *v7; // rdx
  wil::details *Event; // rbp
  unsigned int v9; // r8d
  const char *v10; // r9
  wil::details *v11; // rsi
  DWORD LastError; // ebx
  void *v13; // rdx
  wil::details **v14; // rsi
  void *v15; // rdx
  unsigned int v16; // r8d
  const char *v17; // r9
  wil::details *v18; // r15
  wil::details *v19; // rbp
  DWORD v20; // ebx
  void *v21; // rdx
  int v22; // eax
  const char *v23; // r9
  int v25; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  v2 = (__int64 *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 1LL;
  *((_QWORD *)this + 3) = 0LL;
  v3 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *v3 = v4;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 6) = v5;
  v6 = (wil::details **)((char *)this + 64);
  *((_QWORD *)this + 8) = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(retaddr, v7, v9, v10);
  GetLastError();
  v11 = *v6;
  if ( *v6 )
  {
    LastError = GetLastError();
    wil::details::CloseHandle(v11, v13);
    SetLastError(LastError);
  }
  *v6 = Event;
  v14 = (wil::details **)((char *)this + 72);
  *((_QWORD *)this + 9) = 0LL;
  v18 = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !v18 )
    wil::details::in1diag3::Throw_GetLastError(retaddr, v15, v16, v17);
  GetLastError();
  v19 = *v14;
  if ( *v14 )
  {
    v20 = GetLastError();
    wil::details::CloseHandle(v19, v21);
    SetLastError(v20);
  }
  *v14 = v18;
  *((_QWORD *)this + 10) = 0LL;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v2);
  v22 = CoreUICreate(v2);
  if ( v22 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      (const char *)(unsigned int)v22,
      v25);
  if ( !*v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x52,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v23);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_RemoteInputPostProcessor>::GetImpl'::`2'::impl,
    0LL);
  return this;
}
