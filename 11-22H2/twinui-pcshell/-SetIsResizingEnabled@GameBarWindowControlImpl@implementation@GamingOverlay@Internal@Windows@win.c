/*
 * XREFs of ?SetIsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x18041153C
 * Callers:
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18040F4D0 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?IsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18040FF70 (-IsResizingEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsResizingEnabled(
        __int64 a1,
        char a2,
        _BYTE *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 v12; // [rsp+38h] [rbp+10h]

  LOBYTE(v12) = a2;
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    v11 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v5 + 32LL))(v5, &v11);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x294,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v6,
        v9);
    v7 = *v11;
    if ( *a3 )
    {
      result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v7 + 112))(v11, 255LL, 17LL);
      if ( (int)result < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x298,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
          (const char *)(unsigned int)result,
          v9);
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v7 + 112))(v11, 255LL, 16LL);
      if ( (int)result < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x29D,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
          (const char *)(unsigned int)result,
          v9);
    }
    *(_BYTE *)(a1 + 155) = 0;
    if ( v11 )
      return winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v11);
  }
  else
  {
    LOBYTE(v12) = *a3;
    HIBYTE(v12) = 1;
    result = v12;
    *(_WORD *)(a1 + 154) = v12;
  }
  return result;
}
