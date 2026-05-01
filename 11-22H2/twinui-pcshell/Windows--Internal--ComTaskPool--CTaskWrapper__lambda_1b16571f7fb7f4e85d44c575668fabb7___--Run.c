/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b16571f7fb7f4e85d44c575668fabb7___::Run @ 0x180016450
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18009CC20 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b16571f7fb7f4e85d44c575668fabb7___::Run(
        __int64 a1)
{
  AgileGitPtr *v1; // rdi
  unsigned int v2; // ebx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (AgileGitPtr *)(a1 + 16);
  v2 = 0;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  v3 = AgileGitPtr::CopyLocal(v1, &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c, &v7);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81,
      (unsigned int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v3,
      v5);
  }
  else
  {
    LOBYTE(v2) = *((_DWORD *)v1 + 2) == 0;
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v7 + 88LL))(v7, v2);
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
}
