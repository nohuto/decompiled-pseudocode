/*
 * XREFs of _lambda_4c76958155d905f9845754a099fa7af4_::operator() @ 0x18032CC28
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4c76958155d905f9845754a099fa7af4___::Run @ 0x180338BF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4c76958155d905f9845754a099fa7af4___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_4c76958155d905f9845754a099fa7af4_::operator()(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)a1 + 376LL)
                                                                                           + 24LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 376LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         *(_QWORD *)(*(_QWORD *)a1 + 368LL),
         *(_QWORD *)(*(_QWORD *)a1 + 360LL),
         0);
  if ( v2 < 0 )
  {
    v3 = 1962LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, int))(**(_QWORD **)(*(_QWORD *)a1 + 376LL)
                                                                                        + 24LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 376LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         *(_QWORD *)(*(_QWORD *)a1 + 368LL),
         *(_QWORD *)(*(_QWORD *)a1 + 360LL),
         2);
  if ( v2 < 0 )
  {
    v3 = 1967LL;
    goto LABEL_3;
  }
  return 0LL;
}
