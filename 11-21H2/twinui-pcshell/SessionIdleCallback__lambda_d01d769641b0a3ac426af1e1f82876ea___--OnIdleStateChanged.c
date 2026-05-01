/*
 * XREFs of SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::OnIdleStateChanged @ 0x18003BAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800743DC (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x1800FCA18 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SessionIdleCallback__lambda_d01d769641b0a3ac426af1e1f82876ea___::OnIdleStateChanged(
        __int64 a1,
        int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 + 16;
  ExperienceManagerUtils::AsStrong<IInspectable>(&v10, a1 + 16);
  v4 = 0;
  if ( v10 )
  {
    v5 = CSingleViewShellExperience::OnSessionIdleStateChanged(
           *(CSingleViewShellExperience **)(*(_QWORD *)(v3 + 8) + 8LL),
           a2);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)v5,
        v8);
    v4 = v6;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  return v4;
}
