/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x18006DAB0
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800FAF00 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18004A42C (RtlpMuiRegFreeLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x18006DB7C (RtlpFreeTebLanguageList.c)
 */

struct _TEB *RtlCleanUpTEBLangLists()
{
  struct _TEB *result; // rax

  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  RtlpFreeTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  result = NtCurrentTeb();
  if ( result->ResourceRetValue )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)NtCurrentTeb()->ResourceRetValue);
    result = NtCurrentTeb();
    result->ResourceRetValue = 0LL;
  }
  return result;
}
