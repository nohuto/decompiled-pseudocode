/*
 * XREFs of ??1?$list@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x18063DDF8
 * Callers:
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$4 @ 0x180640709 (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$4.c)
 *     _StartupFolderNotification::CheckForRemovedStartupApp_::_1_::dtor$1 @ 0x180643B92 (_StartupFolderNotification--CheckForRemovedStartupApp_--_1_--dtor$1.c)
 *     _StartupRegKeyNotification::CheckForRemovedStartupApp_::_1_::dtor$1 @ 0x180643E75 (_StartupRegKeyNotification--CheckForRemovedStartupApp_--_1_--dtor$1.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::wstring>::~list<std::wstring>(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::wstring::_Tidy_deallocate((__int64)(v3 + 2));
      std::_Deallocate<16,0>(v3, 0x30uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
