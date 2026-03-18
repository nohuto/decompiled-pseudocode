/*
 * XREFs of ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02D5364
 * Callers:
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C01366E0 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     NtGdiExtFloodFill @ 0x1C02D4500 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

bool __fastcall bConvertDfbDcToDib(struct XDCOBJ *a1)
{
  return pProcessDfbSurfaces(*(_QWORD *)(*(_QWORD *)a1 + 496LL), 1LL) != 0;
}
