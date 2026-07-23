/*
 * XREFs of PopPepComponentSetLatency @ 0x14035B710
 * Callers:
 *     PoFxSetComponentLatency @ 0x14035B660 (PoFxSetComponentLatency.c)
 * Callees:
 *     PopPepUpdateIdleState @ 0x140310C48 (PopPepUpdateIdleState.c)
 *     PopPepCountReadyActivities @ 0x140313CE4 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x140313D30 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x140313D74 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x140313DF8 (PopPepLockActivityLink.c)
 *     PopPepPromoteActivities @ 0x140313EF0 (PopPepPromoteActivities.c)
 *     PopPepComponentGetLatencyIdleState @ 0x14035B800 (PopPepComponentGetLatencyIdleState.c)
 */

void __fastcall PopPepComponentSetLatency(unsigned int *a1, int a2, __int64 a3)
{
  __int64 v4; // rdi
  int LatencyIdleState; // r14d
  char v7; // al
  char v8; // bp
  unsigned int ready; // ebx
  unsigned int v10; // eax
  KIRQL v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0;
  v4 = (__int64)&a1[52 * a2 + 48];
  LatencyIdleState = PopPepComponentGetLatencyIdleState(v4, a3);
  v7 = PopPepLockActivityLink((__int64)a1, (volatile LONG *)v4, 6u, 1u, &v11);
  *(_QWORD *)(v4 + 112) = a3;
  v8 = v7;
  if ( *(_DWORD *)(v4 + 156) != LatencyIdleState )
  {
    *(_DWORD *)(v4 + 156) = LatencyIdleState;
    ready = PopPepCountReadyActivities(a1, v4, 2);
    PopPepUpdateIdleState((__int64)a1, v4, 1);
    PopPepPromoteActivities((__int64)a1, v4, 2);
    v10 = PopPepCountReadyActivities(a1, v4, 2);
    PopPepRequestWork((__int64)a1, ready, v10);
  }
  PopPepReleaseActivityLink((__int64)a1, (volatile LONG *)v4, v8, v11);
}
