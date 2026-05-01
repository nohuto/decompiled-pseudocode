/*
 * XREFs of ?GetAppFrameWindow@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA_KUread_lock_required@wil@@@Z @ 0x180341AE0
 * Callers:
 *     ?get_AppFrameWindow@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHPEA_K@Z @ 0x1803446B0 (-get_AppFrameWindow@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Wi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::GetAppFrameWindow(
        __int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v3; // eax
  __int64 v4; // rbx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0LL;
  v8 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 32LL))(v1, &v8);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x30A,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
      (const char *)(unsigned int)v2,
      v6);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v9);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x30B,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
      (const char *)(unsigned int)v3,
      v6);
  v4 = v9;
  if ( v8 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v8);
  return v4;
}
