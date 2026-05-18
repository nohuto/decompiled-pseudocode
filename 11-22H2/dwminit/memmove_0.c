/*
 * XREFs of memmove_0 @ 0x18000E2DC
 * Callers:
 *     ??$_Copy_memmove@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z @ 0x180008F1C (--$_Copy_memmove@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000C7B0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
