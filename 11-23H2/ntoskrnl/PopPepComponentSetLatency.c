/*
 * XREFs of PopPepComponentSetLatency @ 0x14035B570
 * Callers:
 *     PoFxSetComponentLatency @ 0x14035B4C0 (PoFxSetComponentLatency.c)
 * Callees:
 *     PopPepUpdateIdleState @ 0x1403109B8 (PopPepUpdateIdleState.c)
 *     PopPepCountReadyActivities @ 0x140313A54 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x140313AA0 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x140313AE4 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x140313B68 (PopPepLockActivityLink.c)
 *     PopPepPromoteActivities @ 0x140313C60 (PopPepPromoteActivities.c)
 *     PopPepComponentGetLatencyIdleState @ 0x14035B660 (PopPepComponentGetLatencyIdleState.c)
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
