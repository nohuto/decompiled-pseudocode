/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x14041AF20
 * Callers:
 *     DifZwQueryDefaultUILanguageWrapper @ 0x1405F3AA0 (DifZwQueryDefaultUILanguageWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DefaultUILanguageId);
}
