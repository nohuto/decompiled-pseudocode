/*
 * XREFs of ?GetIsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA_NUread_lock_required@wil@@@Z @ 0x180341DD0
 * Callers:
 *     ?get_IsResizingEnabled@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180344810 (-get_IsResizingEnabled@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetIsResizingEnabled(
        __int64 a1,
        char a2)
{
  __int64 v2; // r8
  int v3; // eax
  int v4; // eax
  char v5; // bl
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    v9 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v9);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x26F,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v3,
        v7);
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 104LL))(v9, &v10);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x270,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v4,
        v7);
    v5 = v10 & 1;
    if ( v9 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v9);
    return v5;
  }
  else if ( *(_BYTE *)(a1 + 155) )
  {
    return *(_BYTE *)(a1 + 154);
  }
  else
  {
    return 1;
  }
}
