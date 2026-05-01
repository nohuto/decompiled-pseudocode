/*
 * XREFs of _dynamic_initializer_for__StartupAppMonitor::s_showNotificationMap__ @ 0x180009A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@@2@@std@@QEAA@XZ @ 0x180156A10 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPINFO@@U-$less@.c)
 */

int dynamic_initializer_for__StartupAppMonitor::s_showNotificationMap__()
{
  std::map<std::wstring,STARTUPAPPINFO>::map<std::wstring,STARTUPAPPINFO>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__StartupAppMonitor::s_showNotificationMap__);
}
