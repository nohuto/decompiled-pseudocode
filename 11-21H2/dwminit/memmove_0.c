/*
 * XREFs of memmove_0 @ 0x18000E13F
 * Callers:
 *     ??$_Copy_memmove@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z @ 0x18000741C (--$_Copy_memmove@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000BDF8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
