/*
 * XREFs of ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@@std@@QEAA@XZ @ 0x180156A10
 * Callers:
 *     _dynamic_initializer_for__StartupAppMonitor::s_showNotificationMap__ @ 0x180009A60 (_dynamic_initializer_for__StartupAppMonitor--s_showNotificationMap__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 *std::map<std::wstring,STARTUPAPPINFO>::map<std::wstring,STARTUPAPPINFO>()
{
  _QWORD *v0; // rax

  StartupAppMonitor::s_showNotificationMap = 0LL;
  qword_1807B4AF8 = 0LL;
  v0 = std::_Allocate<16,std::_Default_allocate_traits,0>(0xF8uLL);
  *v0 = v0;
  v0[1] = v0;
  v0[2] = v0;
  *((_WORD *)v0 + 12) = 257;
  StartupAppMonitor::s_showNotificationMap = (__int64)v0;
  return &StartupAppMonitor::s_showNotificationMap;
}
