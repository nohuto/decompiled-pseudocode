/*
 * XREFs of ?SetMaximumSize@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@AEBUSize@Foundation@56@@Z @ 0x180343B3C
 * Callers:
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180341874 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?put_MaximumSize@?$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@UIGameBarWindowControl@3456@@impl@winrt@@UEAAHUSize@Foundation@Windows@3@@Z @ 0x180344FA0 (-put_MaximumSize@-$produce@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetMaximumSize(
        __int64 a1,
        __int64 a2,
        float *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    LODWORD(v11) = (int)*a3;
    HIDWORD(v11) = (int)a3[1];
    v12 = v11;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 80LL))(v5, &v12);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x234,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v6,
        v9);
    v11 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 40) + 32LL))(*(_QWORD *)(a1 + 40), &v11);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x236,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v7,
        v9);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 224LL))(v11);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x237,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
        (const char *)(unsigned int)v8,
        v9);
    *(_QWORD *)(a1 + 72) = *(_QWORD *)a3;
    *(_BYTE *)(a1 + 148) = 0;
    if ( v11 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
  }
  else
  {
    *(_QWORD *)(a1 + 140) = *(_QWORD *)a3;
    if ( !*(_BYTE *)(a1 + 148) )
      *(_BYTE *)(a1 + 148) = 1;
  }
}
