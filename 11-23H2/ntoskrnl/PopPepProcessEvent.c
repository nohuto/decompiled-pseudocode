/*
 * XREFs of PopPepProcessEvent @ 0x140313900
 * Callers:
 *     PopFxProcessWork @ 0x140312634 (PopFxProcessWork.c)
 *     PopPluginDevicePower @ 0x140313270 (PopPluginDevicePower.c)
 *     PopPluginComponentActive @ 0x14031378C (PopPluginComponentActive.c)
 *     PopPepNotifyIdleState @ 0x14035C4C0 (PopPepNotifyIdleState.c)
 *     PopPepCompleteComponentIdleState @ 0x14059EBA4 (PopPepCompleteComponentIdleState.c)
 *     PopPepUnregisterDevice @ 0x14099D928 (PopPepUnregisterDevice.c)
 * Callees:
 *     PopPepTryPowerDownDevice @ 0x140310CD0 (PopPepTryPowerDownDevice.c)
 *     PopPepCountReadyActivities @ 0x140313A54 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x140313AA0 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x140313AE4 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x140313B68 (PopPepLockActivityLink.c)
 *     PopPepPromoteActivities @ 0x140313C60 (PopPepPromoteActivities.c)
 *     PopPepComponentGetWork @ 0x140313D9C (PopPepComponentGetWork.c)
 *     PopPepCompleteActivity @ 0x140314020 (PopPepCompleteActivity.c)
 *     PopPepTriggerActivity @ 0x1403140FC (PopPepTriggerActivity.c)
 */

char __fastcall PopPepProcessEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  unsigned int v7; // ebp
  char v10; // r12
  unsigned int v11; // r14d
  unsigned int ready; // r15d
  char Work; // bp
  unsigned int v14; // eax
  bool v15; // si
  __int64 v16; // r9
  __int64 v17; // r8
  char v19; // [rsp+70h] [rbp+18h] BYREF

  v6 = (int)a3;
  v7 = a4;
  v19 = 0;
  v10 = PopPepLockActivityLink(a1, a2, a3, a4, &v19);
  if ( (_DWORD)v6 == 6 || (v11 = dword_140001AEC[34 * v6], (int)v11 < 2) )
    v11 = 2;
  ready = PopPepCountReadyActivities(a1, a2, v11);
  if ( (_DWORD)v6 != 6 )
    PopPepCompleteActivity(a1, a2, (unsigned int)v6);
  if ( v7 != 6 )
    PopPepTriggerActivity(a1, a2, v7, 0LL);
  PopPepPromoteActivities(a1, a2, v11);
  Work = PopPepComponentGetWork(a1, a2, a6);
  v14 = PopPepCountReadyActivities(a1, a2, v11);
  v15 = 0;
  if ( (*(_BYTE *)(a1 + 24) & 1) == 0 && !v14 && !Work && !*(_DWORD *)(a1 + 140) )
    v15 = *(_BYTE *)(a1 + 136) != 0;
  PopPepRequestWork(a1, ready, v14);
  LOBYTE(v16) = v19;
  LOBYTE(v17) = v10;
  PopPepReleaseActivityLink(a1, a2, v17, v16);
  if ( v15 )
    return PopPepTryPowerDownDevice(a1, a6);
  return Work;
}
