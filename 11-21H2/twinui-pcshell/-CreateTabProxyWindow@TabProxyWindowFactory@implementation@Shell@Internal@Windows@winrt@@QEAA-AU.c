/*
 * XREFs of ?CreateTabProxyWindow@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@6@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@39456@_K@Z @ 0x18001D210
 * Callers:
 *     ?AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabView@3UI@456@@Z @ 0x18001AFFC (-AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabVi.c)
 *     ?CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJ_KPEAPEAUITabProxyWindowInternal@345@@Z @ 0x180579A70 (-CreateTabProxyWindowInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18001B0D0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f00520507454a36d8de4c18dfc66140a___ @ 0x18001D2E0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f00520507454a36d8de4c18dfc66140a.c)
 *     ??$make_self@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@PEAUIWICImagingFactory@@PEAUITaskbarList4@@AEAUITileStore@Tiles@456@AEBUWindowTabDataModel@3UI@456@AEBUWindowTabView@3UI@456@AEA_K@winrt@@YA?AU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@0@$$QEAPEAUIWICImagingFactory@@$$QEAPEAUITaskbarList4@@AEAUITileStore@Tiles@Internal@Windows@0@AEBUWindowTabDataModel@Shell@UI@670@AEBUWindowTabView@9UI@670@AEA_K@Z @ 0x18001D3D4 (--$make_self@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@PEAUIWICImagingFactory.c)
 *     ?handle_wait@wil@@YA_NPEAXKH@Z @ 0x180062538 (-handle_wait@wil@@YA_NPEAXKH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::CreateTabProxyWindow(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4)
{
  __int64 v7; // rax
  DWORD CurrentThreadId; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _QWORD v13[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v16; // [rsp+80h] [rbp+20h] BYREF

  wil::handle_wait(*(wil **)(a1 + 32), (void *)0xFFFFFFFFLL, a3, a4);
  v13[0] = *(_QWORD *)(a1 + 64);
  v14[0] = *(_QWORD *)(a1 + 56);
  winrt::make_self<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,IWICImagingFactory *,ITaskbarList4 *,winrt::Windows::Internal::Tiles::ITileStore &,winrt::Windows::Internal::UI::Shell::WindowTabDataModel const &,winrt::Windows::Internal::UI::Shell::WindowTabView const &,unsigned __int64 &>(
    &v16,
    v14,
    v13,
    a1 + 72);
  v7 = *(_QWORD *)(a1 + 48);
  v14[0] = &v16;
  v13[0] = v7;
  v13[1] = v14;
  CurrentThreadId = GetCurrentThreadId();
  v10 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f00520507454a36d8de4c18dfc66140a___(
          v9,
          CurrentThreadId,
          v13);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v10,
      a3);
    *a2 = 0LL;
    if ( v16 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v16);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, v16);
    *a2 = v16;
  }
  return a2;
}
