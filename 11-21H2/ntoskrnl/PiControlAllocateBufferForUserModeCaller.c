/*
 * XREFs of PiControlAllocateBufferForUserModeCaller @ 0x1402DE7E4
 * Callers:
 *     PiControlQueryDeviceRelations @ 0x1406E3860 (PiControlQueryDeviceRelations.c)
 *     PiControlGetPropertyData @ 0x140775140 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1407753A0 (PiControlGetRelatedDevice.c)
 *     PiControlQueryAndRemoveDevice @ 0x140959330 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x140959490 (PiControlQueryConflictList.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiControlAllocateBufferForUserModeCaller(__int64 *a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 Pool2; // rax

  if ( !a2 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = a4;
    return 0LL;
  }
  Pool2 = ExAllocatePool2(257LL, a2, 538996816LL);
  *a1 = Pool2;
  return Pool2 == 0 ? 0xC000009A : 0;
}
