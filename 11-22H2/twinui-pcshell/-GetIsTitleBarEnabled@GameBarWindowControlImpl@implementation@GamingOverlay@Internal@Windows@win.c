/*
 * XREFs of ?GetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA_NUread_lock_required@wil@@@Z @ 0x18040FB2C
 * Callers:
 *     ?get_IsTitleBarEnabled@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180412730 (-get_IsTitleBarEnabled@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetIsTitleBarEnabled(
        __int64 a1,
        char a2)
{
  __int64 v2; // r8
  int v3; // eax
  int v4; // eax
  int v5; // eax
  bool v6; // bl
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v10; // [rsp+30h] [rbp+10h] BYREF
  int v11; // [rsp+38h] [rbp+18h] BYREF
  __int64 v12; // [rsp+40h] [rbp+20h] BYREF

  LOBYTE(v11) = a2;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    v12 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v12);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2AD,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v3,
        savedregs);
    v10 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 144LL))(v12, &v10);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2AF,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v4,
        savedregs);
    v11 = 1;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 40LL))(v10, &v11);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B1,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v5,
        savedregs);
    v6 = v11 != 0;
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v10);
    if ( v12 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v12);
    return v6;
  }
  else if ( *(_BYTE *)(a1 + 157) )
  {
    return *(_BYTE *)(a1 + 156);
  }
  else
  {
    return 1;
  }
}
