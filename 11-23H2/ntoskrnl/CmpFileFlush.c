/*
 * XREFs of CmpFileFlush @ 0x140750D6C
 * Callers:
 *     HvLoadHive @ 0x14074ED44 (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x140750BC4 (CmpFileFlushAndPurge.c)
 *     CmpSaveKeyByFileCopy @ 0x140A0CE80 (CmpSaveKeyByFileCopy.c)
 *     HvWriteExternal @ 0x140A20B44 (HvWriteExternal.c)
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
