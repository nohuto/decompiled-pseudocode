/*
 * XREFs of __tailMerge_windowscodecs_dll @ 0x1800619D4
 * Callers:
 *     __imp_load_WICCreateImagingFactory_Proxy @ 0x1800619C8 (__imp_load_WICCreateImagingFactory_Proxy.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18005E580 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_windowscodecs_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_windowscodecs_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
