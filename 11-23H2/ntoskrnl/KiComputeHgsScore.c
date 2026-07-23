/*
 * XREFs of KiComputeHgsScore @ 0x140577440
 * Callers:
 *     KiConfigureHeteroProcessorsTarget @ 0x14056BD10 (KiConfigureHeteroProcessorsTarget.c)
 *     KeConfigureHeteroProcessors @ 0x140972AE8 (KeConfigureHeteroProcessors.c)
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
