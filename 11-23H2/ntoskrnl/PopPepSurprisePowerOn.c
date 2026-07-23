/*
 * XREFs of PopPepSurprisePowerOn @ 0x1405A02B0
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x1405884A0 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     PopPepRequestWork @ 0x140313D30 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x140313D74 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x140313DF8 (PopPepLockActivityLink.c)
 *     PopPepPromoteActivities @ 0x140313EF0 (PopPepPromoteActivities.c)
 *     PopPepTriggerActivity @ 0x14031438C (PopPepTriggerActivity.c)
 */

void __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  char v2; // si
  unsigned int v3; // ebx
  KIRQL v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v2 = PopPepLockActivityLink(a1, 0LL, 6u, 0, &v4);
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v3 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    PopPepRequestWork(a1, v3, *(_DWORD *)(a1 + 120));
  }
  PopPepReleaseActivityLink(a1, 0LL, v2, v4);
}
