/*
 * XREFs of ZwQueryDefaultLocale @ 0x14041BA00
 * Callers:
 *     DifZwQueryDefaultLocaleWrapper @ 0x140623B60 (DifZwQueryDefaultLocaleWrapper.c)
 *     NtInitializeNlsFiles @ 0x1406C40E0 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDefaultLocale(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
