/*
 * XREFs of RtlRestoreThreadPreferredUILanguages @ 0x180091E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18004A42C (RtlpMuiRegFreeLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x18006DB7C (RtlpFreeTebLanguageList.c)
 *     RtlReportCriticalFailure @ 0x18010C00C (RtlReportCriticalFailure.c)
 */

__int64 __fastcall RtlRestoreThreadPreferredUILanguages(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    return RtlReportCriticalFailure(v2 != 0 ? -1073740004 : -1073741816, a1, 1LL);
  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->PreferredLanguages);
  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages);
  RtlpFreeTebLanguageList((__int64 *)NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->PreferredLanguages = *(void **)a1;
  NtCurrentTeb()->MergedPrefLanguages = *(void **)(a1 + 8);
  NtCurrentTeb()->UserPrefLanguages = *(void **)(a1 + 16);
  *(_DWORD *)(a1 + 24) = 0;
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
