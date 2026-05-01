/*
 * XREFs of ??0TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x18010B4E8
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapter@KeyboardHosting@@$$QEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1800B91E8 (--$MakeAndInitialize@VTabTipAdapter@KeyboardHosting@@V12@PEAVTouchKeyboardExperienceManager@@@De.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x18010B674 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMessageProxyReconnectAdapterOwner@@U.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180121640 (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
KeyboardHosting::TabTipAdapter *__fastcall KeyboardHosting::TabTipAdapter::TabTipAdapter(
        KeyboardHosting::TabTipAdapter *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>();
  *(_QWORD *)this = &KeyboardHosting::TabTipAdapter::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRemoteTabTipAdapter>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 38) = 0;
  memset_0((char *)this + 160, 0, 0xB8uLL);
  *((_DWORD *)this + 86) = 0;
  *((_WORD *)this + 174) = 0;
  *((_BYTE *)this + 350) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 7LL;
  *((_WORD *)this + 176) = 0;
  *((_WORD *)this + 192) = 0;
  *((_WORD *)this + 194) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 11;
  *((_WORD *)this + 200) = 0;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 102) = 11;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 432), 0, 0);
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *((_BYTE *)this + 492) = 0;
  *((_OWORD *)this + 31) = 0LL;
  *((_OWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 132) = 0;
  *((_WORD *)this + 266) = 0;
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>();
  return this;
}
