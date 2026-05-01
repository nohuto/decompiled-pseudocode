/*
 * XREFs of ??0STARTUPAPPINFO@@QEAA@AEBU0@@Z @ 0x1802E8956
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x18063FC30 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=4
STARTUPAPPINFO *__fastcall STARTUPAPPINFO::STARTUPAPPINFO(STARTUPAPPINFO *this, const struct STARTUPAPPINFO *a2)
{
  *(_QWORD *)this = *(_QWORD *)a2;
  std::wstring::wstring((_QWORD *)this + 1, (__int64)a2 + 8);
  std::wstring::wstring((_QWORD *)this + 5, (__int64)a2 + 40);
  std::wstring::wstring((_QWORD *)this + 9, (__int64)a2 + 72);
  std::wstring::wstring((_QWORD *)this + 13, (__int64)a2 + 104);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_QWORD *)this + 18) = *((_QWORD *)a2 + 18);
  std::wstring::wstring((_QWORD *)this + 19, (__int64)a2 + 152);
  return this;
}
