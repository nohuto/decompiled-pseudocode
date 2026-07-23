/*
 * XREFs of RtlRestoreThreadPreferredUILanguages @ 0x18008A970
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFreeTebLanguageList @ 0x1800101D8 (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x1800125EC (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlReportCriticalFailure @ 0x18010D5FC (RtlReportCriticalFailure.c)
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
