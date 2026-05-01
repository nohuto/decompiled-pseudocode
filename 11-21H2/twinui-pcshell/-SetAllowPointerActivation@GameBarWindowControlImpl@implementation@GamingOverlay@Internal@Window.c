/*
 * XREFs of ?SetAllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEB_N@Z @ 0x180343420
 * Callers:
 *     ?AllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180341824 (-AllowPointerActivation@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@w.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180341874 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetAllowPointerActivation(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int16 v8; // [rsp+38h] [rbp+10h]

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    result = (*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v4 + 120LL))(v4, *a3 == 0);
    if ( (int)result < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x25F,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)result,
        v6);
    *(_BYTE *)(a1 + 153) = 0;
  }
  else
  {
    LOBYTE(v8) = *a3;
    HIBYTE(v8) = 1;
    result = v8;
    *(_WORD *)(a1 + 152) = v8;
  }
  return result;
}
