/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b29e2c8ab88c1973ebb3fde9d29c8a78___::Run @ 0x180338C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b29e2c8ab88c1973ebb3fde9d29c8a78___::Run(
        _QWORD *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, int))(**(_QWORD **)(a1[2] + 376LL)
                                                                                        + 24LL))(
         *(_QWORD *)(a1[2] + 376LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[3],
         a1[4],
         1);
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x822,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}
