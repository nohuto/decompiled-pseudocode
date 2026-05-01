/*
 * XREFs of ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x180579A70
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@39456@_K@Z @ 0x18001D210 (-CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA-AU.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UITabProxyWindowInternal@Shell@Internal@Windows@@UTabProxyWindow@implementation@234winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITabProxyWindowInternal@Shell@Internal@Windows@@@1@PEAUTabProxyWindow@implementation@Shell@Internal@Windows@1@@Z @ 0x180579954 (--$as@UITabProxyWindowInternal@Shell@Internal@Windows@@UTabProxyWindow@implementation@234winrt@@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::CreateTabProxyWindowInternal(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *this,
        __int64 a2,
        struct Windows::Internal::Shell::ITabProxyWindowInternal **a3)
{
  const char *v4; // r9
  struct Windows::Internal::Shell::ITabProxyWindowInternal *v5; // rbx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 (__fastcall ***v8[2])(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::Shell::ITabProxyWindowInternal *v10; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  v10 = 0LL;
  try
  {
    winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::CreateTabProxyWindow(
      (__int64)this,
      v8,
      (unsigned int)&v10,
      (int)&v7);
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    if ( v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
    winrt::impl::as<Windows::Internal::Shell::ITabProxyWindowInternal,winrt::Windows::Internal::Shell::implementation::TabProxyWindow,0>(
      &v10,
      v8[0]);
    v5 = v10;
    if ( v10 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ITabProxyWindowInternal *))(*(_QWORD *)v10 + 8LL))(v10);
    *a3 = v5;
    if ( v5 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v10);
    if ( v8[0] )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x80,
                           (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindowfactory.cpp",
                           v4);
  }
  return result;
}
