/*
 * XREFs of ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801C447C
 * Callers:
 *     ?GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@9@@Z @ 0x1801C836C (-GetTaskbarTelemetryFromContext@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AE.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 */

winrt::param::hstring *__fastcall winrt::param::hstring::hstring(winrt::param::hstring *a1, const unsigned __int16 *a2)
{
  __int64 v3; // r8

  v3 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    a2 = *(const unsigned __int16 **)a2;
  winrt::param::hstring::create_string_reference(a1, a2, v3);
  return a1;
}
