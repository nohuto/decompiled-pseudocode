/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj2@VUIAutomationHelpers@KeyboardHosting@@@std@@QEAA@XZ @ 0x1805303CC
 * Callers:
 *     ??$make_shared@VUIAutomationHelpers@KeyboardHosting@@$$V@std@@YA?AV?$shared_ptr@VUIAutomationHelpers@KeyboardHosting@@@0@XZ @ 0x180531C1C (--$make_shared@VUIAutomationHelpers@KeyboardHosting@@$$V@std@@YA-AV-$shared_ptr@VUIAutomationHel.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj2<KeyboardHosting::UIAutomationHelpers>::_Ref_count_obj2<KeyboardHosting::UIAutomationHelpers>(
        __int64 a1)
{
  HRESULT Instance; // eax
  int ppv; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<KeyboardHosting::UIAutomationHelpers>::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  Instance = CoCreateInstance(
               &GUID_e22ad333_b25f_460c_83d0_0581107395c9,
               0LL,
               1u,
               &GUID_30cbe57d_d9d0_452a_ab13_7ac5ac4825ee,
               (LPVOID *)(a1 + 16));
  if ( Instance < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\uiautomationhelpers.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
  return a1;
}
