/*
 * XREFs of ?OnImmersiveShellThreadStop@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x18017E360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x18017E7B4 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellThreadStop(CImmersiveShellCreationBehavior *this)
{
  int v2; // eax
  unsigned int v3; // edi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x352,
      (int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  else
  {
    v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v4 )
      (**v4)(v4, 1LL);
    if ( *((_BYTE *)this + 16) )
    {
      OleUninitialize();
      *((_BYTE *)this + 16) = 0;
    }
    return 0LL;
  }
}
