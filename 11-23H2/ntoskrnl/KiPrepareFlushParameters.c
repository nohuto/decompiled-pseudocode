/*
 * XREFs of KiPrepareFlushParameters @ 0x1403CEC2C
 * Callers:
 *     KeFlushTb @ 0x140279C00 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14038C93C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x14038CA20 (KeFlushCurrentTbOnly.c)
 *     KeFlushSingleCurrentTb @ 0x14038CE00 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x140390594 (KeFlushMultipleRangeTb.c)
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
