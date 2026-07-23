/*
 * XREFs of MiUpdateReserveClusterInfo @ 0x1402956B8
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x14021F234 (MiAdjustModifiedPageLoad.c)
 *     MiReleasePageFileInfo @ 0x14029556C (MiReleasePageFileInfo.c)
 *     MiFinishPageFileExtension @ 0x14063A028 (MiFinishPageFileExtension.c)
 *     MiInsertPageFileInList @ 0x140834390 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateReserveClusterInfo(__int64 a1, signed __int32 *a2, unsigned __int16 a3)
{
  if ( a2 )
    return (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(a1 + 912),
                           *a2 ^ (a3 ^ (unsigned __int16)*a2) & 0x3FF,
                           *a2);
  else
    return (unsigned int)_InterlockedExchange(
                           (volatile __int32 *)(a1 + 912),
                           (*(_DWORD *)(a1 + 912) & 0xFFFFFC00 | 0x200) + 1024);
}
