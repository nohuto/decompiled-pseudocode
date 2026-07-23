/*
 * XREFs of sub_140A8D720 @ 0x140A8D720
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140461910 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 */

PVOID __fastcall sub_140A8D720(struct _ERESOURCE *a1, __int64 a2)
{
  if ( qword_140D57748 )
    return (PVOID)sub_14042A5E0(a1, a2);
  else
    return ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(a1);
}
