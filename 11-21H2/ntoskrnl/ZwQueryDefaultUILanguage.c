/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x14041BFE0
 * Callers:
 *     sub_140623C90 @ 0x140623C90 (sub_140623C90.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(DefaultUILanguageId, v1);
}
