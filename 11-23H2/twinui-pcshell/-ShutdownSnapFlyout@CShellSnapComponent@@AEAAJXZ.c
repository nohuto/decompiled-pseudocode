/*
 * XREFs of ?ShutdownSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x18066317C
 * Callers:
 *     ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x1801102F0 (-OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ??4?$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x180110F68 (--4-$com_ptr@VSnapFlyoutHost@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ @ 0x18051D90C (-unconditional_release_ref@-$com_ptr@VSnapFlyoutHost@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::ShutdownSnapFlyout(
        CShellSnapComponent *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  void *v6; // rdx
  unsigned int v7; // edi
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int64 *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 920) || *((_BYTE *)this + 921) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x714,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      a4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 51) + 24LL))(
         *((_QWORD *)this + 51),
         256LL,
         0LL);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v9 = *((_QWORD *)this + 114);
    if ( v9 )
    {
      wil::details::SetEvent(*(wil::details **)(v9 + 80), v6);
      v11 = 0LL;
      winrt::com_ptr<SnapFlyoutHost>::operator=((__int64 *)this + 114, (__int64 *)&v11);
      if ( v11 )
        winrt::com_ptr<SnapFlyoutHost>::unconditional_release_ref(&v11);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x715,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
}
