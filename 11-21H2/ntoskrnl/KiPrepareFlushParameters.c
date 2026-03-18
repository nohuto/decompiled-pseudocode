/*
 * XREFs of KiPrepareFlushParameters @ 0x14039E48C
 * Callers:
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1402F3C40 (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     KeFlushCurrentTbOnly @ 0x1403AD034 (KeFlushCurrentTbOnly.c)
 *     KeFlushSingleCurrentTb @ 0x1403AD304 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403AD40C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     <none>
 */

void __fastcall KiPrepareFlushParameters(int a1, unsigned __int64 *a2, char *a3)
{
  char v3; // al
  int v4; // ecx
  int v5; // ecx

  if ( KiKvaShadow )
  {
    if ( !a1 || (v4 = a1 - 1) != 0 && v4 == 1 )
    {
      v3 = 0;
LABEL_4:
      *a2 = 0LL;
      *a3 = v3;
      return;
    }
LABEL_6:
    v3 = 1;
    goto LABEL_4;
  }
  if ( !a1 )
    goto LABEL_6;
  v5 = a1 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_6;
    *a2 = 0LL;
  }
  else
  {
    *a2 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  }
  *a3 = 0;
}
