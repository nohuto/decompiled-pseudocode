/*
 * XREFs of RtlULongSub @ 0x140368FD8
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x14053C560 (DbgkpTriageDumpSnapData.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x140569F38 (KiDeduplicateTriageDumpDataArrays.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14068C158 (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x1407CFAA4 (PiForEachDriverQueryRoutine.c)
 *     IopTrackLink @ 0x1407E4318 (IopTrackLink.c)
 *     BiGetFilePathFromEfiPath @ 0x140805CEC (BiGetFilePathFromEfiPath.c)
 *     _RegRtlQueryKeyPathName @ 0x14086216C (_RegRtlQueryKeyPathName.c)
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
