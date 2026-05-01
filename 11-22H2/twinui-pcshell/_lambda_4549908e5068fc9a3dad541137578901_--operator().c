/*
 * XREFs of _lambda_4549908e5068fc9a3dad541137578901_::operator() @ 0x1801DA1E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4549908e5068fc9a3dad541137578901___::Run @ 0x1801DB420 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4549908e5068fc9a3dad541137578901___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_4549908e5068fc9a3dad541137578901_::operator()(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, _DWORD))(**(_QWORD **)(*a1 + 416LL)
                                                                                           + 24LL))(
         *(_QWORD *)(*a1 + 416LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[1],
         a1[2],
         0);
  if ( v2 < 0 )
  {
    v3 = 2005LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD, _QWORD, int))(**(_QWORD **)(*a1 + 416LL)
                                                                                        + 24LL))(
         *(_QWORD *)(*a1 + 416LL),
         L"Microsoft.XboxGamingOverlay_8wekyb3d8bbwe!App",
         a1[1],
         a1[2],
         2);
  if ( v2 < 0 )
  {
    v3 = 2010LL;
    goto LABEL_3;
  }
  return 0LL;
}
