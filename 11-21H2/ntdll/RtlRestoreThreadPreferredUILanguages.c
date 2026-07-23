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

LOGICAL __fastcall RtlRestoreThreadPreferredUILanguages(PVOID BaseAddress)
{
  int v2; // ecx

  v2 = *((_DWORD *)BaseAddress + 6);
  if ( v2 != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    return RtlReportCriticalFailure(v2 != 0 ? -1073740004 : -1073741816, BaseAddress, 1LL);
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
  RtlpFreeTebLanguageList((void **)NtCurrentTeb()->UserPrefLanguages);
  NtCurrentTeb()->PreferredLanguages = *(void **)BaseAddress;
  NtCurrentTeb()->MergedPrefLanguages = (void *)*((_QWORD *)BaseAddress + 1);
  NtCurrentTeb()->UserPrefLanguages = (void *)*((_QWORD *)BaseAddress + 2);
  *((_DWORD *)BaseAddress + 6) = 0;
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
