/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1402A3D50
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x14039EB60 (ExFreeAutoExpandPushLock.c)
 *     FsRtlFreeAePushLock @ 0x1405417A0 (FsRtlFreeAePushLock.c)
 *     sub_140693C24 @ 0x140693C24 (sub_140693C24.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406B41F0 (FsRtlTeardownPerFileContexts.c)
 *     sub_14071CD2C @ 0x14071CD2C (sub_14071CD2C.c)
 *     sub_14097CFDC @ 0x14097CFDC (sub_14097CFDC.c)
 * Callees:
 *     sub_140360F40 @ 0x140360F40 (sub_140360F40.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return sub_140360F40((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
