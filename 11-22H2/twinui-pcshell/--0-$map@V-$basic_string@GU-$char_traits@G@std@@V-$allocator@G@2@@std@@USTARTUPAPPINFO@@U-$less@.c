/*
 * XREFs of ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@@std@@QEAA@XZ @ 0x18018ADDC
 * Callers:
 *     _dynamic_initializer_for__StartupAppMonitor::s_showNotificationMap__ @ 0x18000A3C0 (_dynamic_initializer_for__StartupAppMonitor--s_showNotificationMap__.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

__int64 *std::map<std::wstring,STARTUPAPPINFO>::map<std::wstring,STARTUPAPPINFO>()
{
  _QWORD *v0; // rax

  StartupAppMonitor::s_showNotificationMap = 0LL;
  qword_18098F188 = 0LL;
  v0 = operator new(0xF8uLL);
  *v0 = v0;
  v0[1] = v0;
  v0[2] = v0;
  *((_WORD *)v0 + 12) = 257;
  StartupAppMonitor::s_showNotificationMap = (__int64)v0;
  return &StartupAppMonitor::s_showNotificationMap;
}
