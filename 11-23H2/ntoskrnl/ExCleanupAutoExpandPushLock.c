/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1402FD630
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140705BF8 (MmDeleteProcessAddressSpace.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1407654A8 (FsRtlPTeardownPerFileObjectContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x1407BB0F0 (FsRtlTeardownPerFileContexts.c)
 *     MiDeleteAweInfo @ 0x140A41CF8 (MiDeleteAweInfo.c)
 * Callees:
 *     ExSaFree @ 0x14035CA7C (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
