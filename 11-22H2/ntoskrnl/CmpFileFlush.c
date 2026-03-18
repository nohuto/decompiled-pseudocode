/*
 * XREFs of CmpFileFlush @ 0x14075127C
 * Callers:
 *     HvLoadHive @ 0x14074F254 (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x1407510D4 (CmpFileFlushAndPurge.c)
 *     CmpSaveKeyByFileCopy @ 0x140A0CF30 (CmpSaveKeyByFileCopy.c)
 *     HvWriteExternal @ 0x140A20BF4 (HvWriteExternal.c)
 * Callees:
 *     CmpDoFileFlush @ 0x1402F641C (CmpDoFileFlush.c)
 */

NTSTATUS __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( v2 )
    return CmpDoFileFlush(v2);
  else
    return 0;
}
