/*
 * XREFs of ??1?$_Tidy_deallocate_guard@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QEAA@XZ @ 0x18003176C
 * Callers:
 *     ?GetHardwareVersion@Engine@1Spectre@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180034420 (-GetHardwareVersion@Engine@1Spectre@@IEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     _Spectre::GetHardwareVersion::Engine::GetHardwareVersion_::_1_::dtor$18 @ 0x1800E5CB3 (_Spectre--GetHardwareVersion--Engine--GetHardwareVersion_--_1_--dtor$18.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_deallocate_guard<std::string>::~_Tidy_deallocate_guard<std::string>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::string::_Tidy_deallocate(v1);
}
