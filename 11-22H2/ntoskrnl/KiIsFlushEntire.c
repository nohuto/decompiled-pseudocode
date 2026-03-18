/*
 * XREFs of KiIsFlushEntire @ 0x14045FF3C
 * Callers:
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     KiPreprocessFlushTb @ 0x1402EB29C (KiPreprocessFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14038A330 (KeFlushCurrentTbOnly.c)
 *     KeFlushEntireTb @ 0x1403B23B0 (KeFlushEntireTb.c)
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
