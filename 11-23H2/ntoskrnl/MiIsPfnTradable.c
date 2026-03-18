/*
 * XREFs of MiIsPfnTradable @ 0x14064D8F4
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x140AAC540 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_DWORD *a1)
{
  return *a1 & 1;
}
