/*
 * XREFs of KiComputeHgsScore @ 0x140576F50
 * Callers:
 *     KiConfigureHeteroProcessorsTarget @ 0x14056B650 (KiConfigureHeteroProcessorsTarget.c)
 *     KeConfigureHeteroProcessors @ 0x1409728E8 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeHgsScore(unsigned __int8 a1, unsigned __int8 a2)
{
  if ( a2 )
    return (a1 << 8) / (unsigned int)a2;
  else
    return 256LL;
}
