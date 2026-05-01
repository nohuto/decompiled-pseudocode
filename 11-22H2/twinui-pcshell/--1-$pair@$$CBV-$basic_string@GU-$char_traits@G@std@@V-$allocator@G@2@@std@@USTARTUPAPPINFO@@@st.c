/*
 * XREFs of ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@QEAA@XZ @ 0x18063DEE8
 * Callers:
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$5 @ 0x180640721 (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$5.c)
 * Callees:
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x1802E8A2C (--1STARTUPAPPINFO@@QEAA@XZ.c)
 */

__int64 __fastcall std::pair<std::wstring const,STARTUPAPPINFO>::~pair<std::wstring const,STARTUPAPPINFO>(__int64 a1)
{
  STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)(a1 + 32));
  return std::wstring::_Tidy_deallocate(a1);
}
