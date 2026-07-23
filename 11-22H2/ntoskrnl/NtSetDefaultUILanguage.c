/*
 * XREFs of NtSetDefaultUILanguage @ 0x1407FD140
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetPendingUILanguage @ 0x1407FC998 (ExpSetPendingUILanguage.c)
 */

NTSTATUS __cdecl NtSetDefaultUILanguage(LANGID DefaultUILanguageId)
{
  if ( DefaultUILanguageId )
    return 0;
  else
    return ExpSetPendingUILanguage();
}
