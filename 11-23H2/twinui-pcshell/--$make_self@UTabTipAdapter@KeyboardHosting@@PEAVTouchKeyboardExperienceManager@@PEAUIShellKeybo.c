/*
 * XREFs of ??$make_self@UTabTipAdapter@KeyboardHosting@@PEAVTouchKeyboardExperienceManager@@PEAUIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@PEAUIDesktopKeyboardHostingPolicy@2678@@winrt@@YA?AU?$com_ptr@UTabTipAdapter@KeyboardHosting@@@0@$$QEAPEAVTouchKeyboardExperienceManager@@$$QEAPEAUIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@$$QEAPEAUIDesktopKeyboardHostingPolicy@KeyboardHosting@567@@Z @ 0x1800AB814
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800AAE90 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@3456@PEAUIDesktopKeyboardHostingPolicy@1456@@Z @ 0x1800ABDB0 (--0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEA.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
KeyboardHosting::TabTipAdapter **__fastcall winrt::make_self<KeyboardHosting::TabTipAdapter,TouchKeyboardExperienceManager *,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy *,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy *>(
        KeyboardHosting::TabTipAdapter **a1,
        _QWORD *a2,
        struct Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy **a3,
        struct Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy **a4)
{
  KeyboardHosting::TabTipAdapter *v9; // [rsp+50h] [rbp+8h]

  v9 = (KeyboardHosting::TabTipAdapter *)operator new(0x230uLL);
  KeyboardHosting::TabTipAdapter::TabTipAdapter(
    v9,
    (struct Windows::Internal::Shell::Text::IInputExperienceHost *)((*a2 + 200LL) & -(__int64)(*a2 != 0LL)),
    *a3,
    *a4);
  *(_QWORD *)v9 = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,void>'};
  *((_QWORD *)v9 + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IRemoteTabTipAdapter,void>'};
  *((_QWORD *)v9 + 2) = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable';
  *a1 = v9;
  return a1;
}
