/*
 * XREFs of memmove_0 @ 0x18000F99C
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000781C (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ??$_Copy_memmove@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z @ 0x18000CBFC (--$_Copy_memmove@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX00@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
