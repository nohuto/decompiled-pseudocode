/*
 * XREFs of ??0ExeData@@QEAA@AEBU0@@Z @ 0x180624CC0
 * Callers:
 *     ?GetCachedExeData@ExeDataCache@@QEAA?AV?$optional@UExeData@@@std@@PEAUHWND__@@@Z @ 0x18062584C (-GetCachedExeData@ExeDataCache@@QEAA-AV-$optional@UExeData@@@std@@PEAUHWND__@@@Z.c)
 *     ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x18062690C (-TryGetWindowFromAppId@ExeDataCache@@QEAA-AV-$optional@PEAUHWND__@@@std@@AEBV-$basic_string@GU-$.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
ExeData *__fastcall ExeData::ExeData(ExeData *this, const struct ExeData *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  std::wstring::wstring((_QWORD *)this + 1, (__int64)a2 + 8);
  std::wstring::wstring((_QWORD *)this + 5, (__int64)a2 + 40);
  return this;
}
