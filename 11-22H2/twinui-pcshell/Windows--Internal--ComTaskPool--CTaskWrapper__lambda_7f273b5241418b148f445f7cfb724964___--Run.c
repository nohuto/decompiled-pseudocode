/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f273b5241418b148f445f7cfb724964___::Run @ 0x1801DB450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7f273b5241418b148f445f7cfb724964___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 416LL)
                                                                                           + 24LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         *(_QWORD *)(a1 + 32),
         *(_QWORD *)(a1 + 40),
         *(_DWORD *)(a1 + 24));
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x807,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
