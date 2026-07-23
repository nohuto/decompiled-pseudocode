/*
 * XREFs of MiIsPfnTradable @ 0x14064DE44
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x140AAC3B0 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_DWORD *a1)
{
  return *a1 & 1;
}
