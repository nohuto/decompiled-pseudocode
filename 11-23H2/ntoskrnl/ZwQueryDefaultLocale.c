/*
 * XREFs of ZwQueryDefaultLocale @ 0x14041B000
 * Callers:
 *     DifZwQueryDefaultLocaleWrapper @ 0x1405F38F0 (DifZwQueryDefaultLocaleWrapper.c)
 *     NtInitializeNlsFiles @ 0x1407A1120 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDefaultLocale(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
