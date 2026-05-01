/*
 * XREFs of _lambda_94dab6f462a57900563ee3a883074015_::operator() @ 0x1804F08F4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_94dab6f462a57900563ee3a883074015___::Run @ 0x1804F1900 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_94dab6f462a57900563ee3a883074015___--.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_94dab6f462a57900563ee3a883074015_::operator()(_QWORD **a1)
{
  int v2; // eax
  __int32 v3; // edx
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)**a1 + 64LL))(**a1, &v7);
  v3 = 0;
  v4 = v2;
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = v7 != 0;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*a1[1] + 16LL) + 128LL))(
      *a1[1] + 16LL,
      (unsigned int)_InterlockedExchange((volatile __int32 *)(*a1[1] + 168LL), v3));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F2,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v2);
    return v4;
  }
}
