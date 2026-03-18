/*
 * XREFs of ZwQueryDefaultLocale @ 0x14041A940
 * Callers:
 *     DifZwQueryDefaultLocaleWrapper @ 0x1405F3980 (DifZwQueryDefaultLocaleWrapper.c)
 *     NtInitializeNlsFiles @ 0x1407A1630 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDefaultLocale(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
