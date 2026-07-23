/*
 * XREFs of PsSetPagePriorityThread @ 0x1402C19D8
 * Callers:
 *     CcCompleteAsyncRead @ 0x1402C16C0 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x14030ECB0 (CcPerformReadAhead.c)
 *     SmSetThreadPagePriority @ 0x140368EA0 (SmSetThreadPagePriority.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     EtwTracePriority @ 0x14046778E (EtwTracePriority.c)
 */

__int64 __fastcall PsSetPagePriorityThread(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1376);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1376), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1331, v4, a2, 0LL);
  return v4;
}
