/*
 * XREFs of RtlULongSub @ 0x140369178
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x14053CAB0 (DbgkpTriageDumpSnapData.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x14056A5F8 (KiDeduplicateTriageDumpDataArrays.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14068C158 (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x1407CFD74 (PiForEachDriverQueryRoutine.c)
 *     IopTrackLink @ 0x1407E45E8 (IopTrackLink.c)
 *     BiGetFilePathFromEfiPath @ 0x140805FBC (BiGetFilePathFromEfiPath.c)
 *     _RegRtlQueryKeyPathName @ 0x1408623AC (_RegRtlQueryKeyPathName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongSub(ULONG ulMinuend, ULONG ulSubtrahend, ULONG *pulResult)
{
  ULONG v3; // r9d

  if ( ulMinuend < ulSubtrahend )
    v3 = -1;
  else
    v3 = ulMinuend - ulSubtrahend;
  *pulResult = v3;
  return ulMinuend < ulSubtrahend ? 0xC0000095 : 0;
}
