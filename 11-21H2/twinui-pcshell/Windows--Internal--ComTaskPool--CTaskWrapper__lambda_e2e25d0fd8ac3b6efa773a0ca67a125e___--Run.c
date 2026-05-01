/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e2e25d0fd8ac3b6efa773a0ca67a125e___::Run @ 0x18037F020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180072794 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e2e25d0fd8ac3b6efa773a0ca67a125e___::Run(
        __int64 a1)
{
  AgileGitPtr *v1; // rbx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = (AgileGitPtr *)(a1 + 16);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
  v2 = AgileGitPtr::CopyLocal(v1, &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, &v5);
  if ( v2 < 0 || (v2 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v5 + 56LL))(v5), v2 < 0) )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
}
