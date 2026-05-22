/*
 * XREFs of ?SetProgressBehavior@AnimationController@Composition@UI@Windows@@QEAAJW4AnimationControllerProgressBehavior@234@@Z @ 0x18011BED0
 * Callers:
 *     ?put_ProgressBehavior@Api@AnimationController@Composition@UI@Windows@@UEAAJW4AnimationControllerProgressBehavior@345@@Z @ 0x18011C210 (-put_ProgressBehavior@Api@AnimationController@Composition@UI@Windows@@UEAAJW4AnimationController.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationController::SetProgressBehavior(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  const char *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  *(_DWORD *)(a1 + 192) = a2;
  v3 = *(__int64 **)(a1 + 200);
  v4 = *(__int64 **)(a1 + 208);
  while ( 1 )
  {
    if ( v3 == v4 )
      return 0LL;
    v5 = *v3;
    if ( (unsigned int)v2 > 1 )
      break;
    v6 = *(_QWORD *)(v5 + 24);
    v7 = *(_DWORD *)(v5 + 128);
    *(_DWORD *)(v5 + 360) = v2;
    DirectComposition::CDevice::ResourceSetIntegerProperty(*(DirectComposition::CDevice **)(v6 + 456), v7, 34, v2);
    ++v3;
  }
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x1FD,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtkeyframeanimator.cpp",
    (const char *)0x80070057LL,
    (int)"Unknown ProgressBehavior.",
    v9);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEC,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationcontroller.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
