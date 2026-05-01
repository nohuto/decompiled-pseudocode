/*
 * XREFs of ?SetIsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x1803438FC
 * Callers:
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180341874 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1803424C4 (-IsTitleBarEnabled@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetIsTitleBarEnabled(
        __int64 a1,
        char a2,
        _BYTE *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 result; // rax
  int v12; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 *v15; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int16 v16; // [rsp+48h] [rbp+28h]
  __int64 v17; // [rsp+58h] [rbp+38h] BYREF

  LOBYTE(v16) = a2;
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    v17 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, &v17);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B1,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v6,
        savedregs);
    v15 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v17 + 144LL))(v17, &v15);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B3,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v7,
        savedregs);
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*v15 + 48))(v15, 1LL, 1LL);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2BC,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v8,
        savedregs);
    v9 = *v15;
    if ( *a3 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v9 + 88))(v15, 1023LL, 0LL);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2C1,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
          (const char *)(unsigned int)v10,
          savedregs);
      result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v15 + 32))(v15, 1LL);
      if ( (int)result < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2C2,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
          (const char *)(unsigned int)result,
          savedregs);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v9 + 120))(v15, 256LL);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2C7,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
          (const char *)(unsigned int)v12,
          savedregs);
      result = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v15 + 32))(v15, 0LL);
      if ( (int)result < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2C8,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
          (const char *)(unsigned int)result,
          savedregs);
    }
    *(_BYTE *)(a1 + 157) = 0;
    if ( v15 )
      result = winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v15);
    if ( v17 )
      return winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v17);
  }
  else
  {
    LOBYTE(v16) = *a3;
    HIBYTE(v16) = 1;
    result = v16;
    *(_WORD *)(a1 + 156) = v16;
  }
  return result;
}
