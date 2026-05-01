/*
 * XREFs of ?SstpInitialize@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x18004844C
 * Callers:
 *     SystemStateTrackerCreate @ 0x1800483B4 (SystemStateTrackerCreate.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall SstpInitialize(struct _SYSTEM_STATE_TRACKER *a1)
{
  __int128 v2; // xmm0

  memset_0((char *)a1 + 16, 0, 0xD8uLL);
  *(_OWORD *)a1 = 0LL;
  RtlInitializeSRWLock(a1);
  *((_DWORD *)a1 + 2) = 0;
  *(_OWORD *)((char *)a1 + 24) = g_TrackedWnfs;
  *(_OWORD *)((char *)a1 + 40) = *((_OWORD *)&g_TrackedWnfs + 1);
  *(_OWORD *)((char *)a1 + 56) = *((_OWORD *)&g_TrackedWnfs + 2);
  *(_OWORD *)((char *)a1 + 72) = *((_OWORD *)&g_TrackedWnfs + 3);
  *(_OWORD *)((char *)a1 + 88) = *((_OWORD *)&g_TrackedWnfs + 4);
  *(_OWORD *)((char *)a1 + 104) = *((_OWORD *)&g_TrackedWnfs + 5);
  *(_OWORD *)((char *)a1 + 120) = *((_OWORD *)&g_TrackedWnfs + 6);
  *(_OWORD *)((char *)a1 + 136) = *((_OWORD *)&g_TrackedWnfs + 7);
  *(_OWORD *)((char *)a1 + 152) = *((_OWORD *)&g_TrackedWnfs + 8);
  v2 = *((_OWORD *)&g_TrackedWnfs + 9);
  *((_DWORD *)a1 + 54) = 5;
  *(_OWORD *)((char *)a1 + 168) = v2;
  *(_QWORD *)((char *)a1 + 220) = WNF_HAM_SYSTEM_STATE_CHANGED;
  *((_DWORD *)a1 + 4) = 2;
}
