/*
 * XREFs of ZwSetDefaultUILanguage @ 0x14041EA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetDefaultUILanguage(LANGID DefaultUILanguageId)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(DefaultUILanguageId, v1);
}
