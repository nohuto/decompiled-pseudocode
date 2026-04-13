/*
 * XREFs of ??1?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA@XZ @ 0x1800BD224
 * Callers:
 *     _CreativeFramework::NotificationManager::ToastHelpers::GetMacros_::_1_::dtor$3 @ 0x1800F61E4 (_CreativeFramework--NotificationManager--ToastHelpers--GetMacros_--_1_--dtor$3.c)
 * Callees:
 *     ?clear@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAXXZ @ 0x1800C26C0 (-clear@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

void __fastcall std::list<std::wstring>::~list<std::wstring>(void **a1)
{
  std::list<std::wstring>::clear();
  operator delete(*a1);
}
