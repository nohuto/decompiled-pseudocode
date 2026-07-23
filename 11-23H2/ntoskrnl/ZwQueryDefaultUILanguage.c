/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x14041B970
 * Callers:
 *     DifZwQueryDefaultUILanguageWrapper @ 0x1405F3F80 (DifZwQueryDefaultUILanguageWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DefaultUILanguageId);
}
