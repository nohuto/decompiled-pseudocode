/*
 * XREFs of EtwpGetEnableInfoIndex @ 0x140228758
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406BFE70 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140780A68 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpBufferingModeFlush @ 0x1408A7C78 (EtwpBufferingModeFlush.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E7760 (EtwpNotifyDisallowedGuidChange.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409ED060 (SendCaptureStateNotificationsWorker.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5874 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpGetEnableInfoIndex(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9

  *a3 = 0;
  v3 = 0LL;
  while ( *(unsigned __int16 *)(32LL * (unsigned int)v3 + a1 + 134) != a2 || !*(_DWORD *)(32 * (v3 + 4) + a1) )
  {
    v3 = (unsigned int)(v3 + 1);
    *a3 = v3;
    if ( (unsigned int)v3 >= 8 )
      return 0;
  }
  return 1;
}
