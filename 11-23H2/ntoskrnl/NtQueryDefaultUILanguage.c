/*
 * XREFs of NtQueryDefaultUILanguage @ 0x1407FCAC0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInstallUILanguage @ 0x1407FCAE0 (NtQueryInstallUILanguage.c)
 */

NTSTATUS __cdecl NtQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  return NtQueryInstallUILanguage(DefaultUILanguageId);
}
