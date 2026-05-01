/*
 * XREFs of ??0BUCKET@@QEAA@XZ @ 0x180799C10
 * Callers:
 *     ?_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z @ 0x180799F98 (-_GetNthMostDominantColorFromBits@@YA_NPEAUtagRGBQUAD@@HHHI_N1PEAK@Z.c)
 * Callees:
 *     DPA_Create @ 0x18079B7D0 (DPA_Create.c)
 */

BUCKET *__fastcall BUCKET::BUCKET(BUCKET *this)
{
  *(_QWORD *)this = 0LL;
  *(_QWORD *)this = g_pfn_DPA_Create(16);
  return this;
}
