/*
 * XREFs of ?GetMonitorId@VirtualDesktopPersistence@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHMONITOR__@@@Z @ 0x18055C7E0
 * Callers:
 *     ?AssignMonitorToVirtualDesktop@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@@Z @ 0x18055C3AC (-AssignMonitorToVirtualDesktop@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@AEBV-$vector.c)
 *     ?GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMONITOR__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18055C8A0 (-GetVirtualDesktopMonitorRegKeyName@VirtualDesktopPersistence@@AEAAJPEAUIVirtualDesktop@@PEAUHMO.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019033C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

_QWORD *__fastcall VirtualDesktopPersistence::GetMonitorId(__int64 a1, _QWORD *a2, HMONITOR a3)
{
  const char *v4; // r9
  WCHAR *v5; // rdx
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-88h] BYREF
  char v8; // [rsp+58h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  mi.cbSize = 104;
  if ( GetMonitorInfoW(a3, &mi) )
  {
    v5 = (WCHAR *)&v8;
  }
  else
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x208,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      v4);
    v5 = (WCHAR *)L"0";
  }
  std::wstring::wstring(a2, v5);
  return a2;
}
