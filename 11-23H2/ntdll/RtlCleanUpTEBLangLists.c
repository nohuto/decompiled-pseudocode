/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x180011690
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800FBD00 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpFreeTebLanguageList @ 0x1800101D8 (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800125EC (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

struct _TEB *RtlCleanUpTEBLangLists()
{
  struct _TEB *result; // rax

  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  RtlpFreeTebLanguageList((__int64 *)NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  result = NtCurrentTeb();
  if ( result->ResourceRetValue )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, NtCurrentTeb()->ResourceRetValue);
    result = NtCurrentTeb();
    result->ResourceRetValue = 0LL;
  }
  return result;
}
