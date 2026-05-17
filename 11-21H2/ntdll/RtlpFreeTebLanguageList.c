/*
 * XREFs of RtlpFreeTebLanguageList @ 0x18006DB7C
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x18006DAB0 (RtlCleanUpTEBLangLists.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x18006DD30 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x180091E80 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpDupTebLanguageList @ 0x1800920B0 (RtlpDupTebLanguageList.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x18004A42C (RtlpMuiRegFreeLanguageList.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18006F850 (RtlpMuiRegFreeLanguageConfigList.c)
 */

__int64 __fastcall RtlpFreeTebLanguageList(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *a1;
    if ( v2 )
      RtlpMuiRegFreeLanguageList(v2);
    if ( a1[1] )
      RtlpMuiRegFreeLanguageConfigList();
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
  }
  return result;
}
