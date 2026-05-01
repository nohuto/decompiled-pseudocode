/*
 * XREFs of ?InitializeSnapFlyout@CShellSnapComponent@@AEAAJXZ @ 0x180110D18
 * Callers:
 *     ?OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x1801102F0 (-OnSettingChanged@CShellSnapComponent@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 * Callees:
 *     ?InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ @ 0x180110EBC (-InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShellSnapComponent::InitializeSnapFlyout(
        CShellSnapComponent *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 920) && !*((_BYTE *)this + 921) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x70C,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      a4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 51) + 24LL))(
         *((_QWORD *)this + 51),
         256LL,
         256LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70D,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v5,
      v10);
    return v6;
  }
  else
  {
    v7 = CShellSnapComponent::InitializeSnapFlyoutHost(this);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x70E,
        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v7,
        v10);
      return v8;
    }
    else
    {
      return 0LL;
    }
  }
}
