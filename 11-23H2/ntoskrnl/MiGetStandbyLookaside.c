/*
 * XREFs of MiGetStandbyLookaside @ 0x14026EE00
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiSynchronizeFastPageInsert @ 0x14026E1A0 (MiSynchronizeFastPageInsert.c)
 *     MiReplaceStandbyLookaside @ 0x140330E98 (MiReplaceStandbyLookaside.c)
 *     MiPurgingPageFromLookaside @ 0x140331740 (MiPurgingPageFromLookaside.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetStandbyLookaside(__int64 *a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *a1;
  v3 = *((unsigned int *)a1 + 6);
  if ( !a2 )
    return (v3 << 9) + v2 + 7424;
  if ( a2 == 1 )
    return (v3 << 9) + v2 + 11520;
  return 25408LL * *((unsigned int *)a1 + 2)
       + ((v3 + 8LL * *((unsigned int *)a1 + 7)) << 9)
       + *(_QWORD *)(v2 + 16)
       + 6080LL;
}
