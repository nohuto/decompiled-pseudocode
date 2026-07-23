/*
 * XREFs of KiIsFlushEntire @ 0x14046099C
 * Callers:
 *     KeFlushTb @ 0x140279C00 (KeFlushTb.c)
 *     KiPreprocessFlushTb @ 0x1402EB52C (KiPreprocessFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14038CA20 (KeFlushCurrentTbOnly.c)
 *     KeFlushEntireTb @ 0x1403B2C20 (KeFlushEntireTb.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsFlushEntire(int a1)
{
  int v1; // ecx

  if ( KiFlushPcid )
    return 0;
  if ( !KiKvaShadow )
  {
    if ( a1 )
    {
      v1 = a1 - 1;
      if ( !v1 )
        return 0;
      return v1 != 1;
    }
    return 1;
  }
  if ( !a1 )
    return 0;
  v1 = a1 - 1;
  if ( !v1 )
    return 1;
  return v1 != 1;
}
