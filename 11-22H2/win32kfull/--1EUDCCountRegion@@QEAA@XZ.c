/*
 * XREFs of ??1EUDCCountRegion@@QEAA@XZ @ 0x1C00F8AA8
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1C000E340 (NtGdiGetCharWidthInfo.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0027824 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0027B88 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     NtGdiGetGlyphOutline @ 0x1C00743F0 (NtGdiGetGlyphOutline.c)
 *     NtGdiGetTextCharsetInfo @ 0x1C0076A70 (NtGdiGetTextCharsetInfo.c)
 *     NtGdiExtEscape @ 0x1C0076E90 (NtGdiExtEscape.c)
 *     GetCharDimensions @ 0x1C007A270 (GetCharDimensions.c)
 *     GreGetTextExtentW @ 0x1C007A468 (GreGetTextExtentW.c)
 *     NtGdiGetCharABCWidthsW @ 0x1C007B770 (NtGdiGetCharABCWidthsW.c)
 *     NtGdiGetTextMetricsW @ 0x1C007BBC0 (NtGdiGetTextMetricsW.c)
 *     NtGdiGetRealizationInfo @ 0x1C007CDF0 (NtGdiGetRealizationInfo.c)
 *     NtGdiGetTextExtentExW @ 0x1C007D120 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetFontData @ 0x1C007E840 (NtGdiGetFontData.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C0080730 (NtGdiGetGlyphIndicesWInternal.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C0081200 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetWidthTable @ 0x1C0085310 (NtGdiGetWidthTable.c)
 *     GreExtTextOutW @ 0x1C00A1DB0 (GreExtTextOutW.c)
 *     ?GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00A1E50 (-GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiFontIsLinked @ 0x1C00AB5A0 (NtGdiFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00ABF60 (NtGdiQueryFontAssocInfo.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0106B60 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiExtTextOutW @ 0x1C0118A60 (NtGdiExtTextOutW.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 *     xxxPSMTextOut @ 0x1C02417C4 (xxxPSMTextOut.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024CE58 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 *     NtGdiGetLinkedUFIs @ 0x1C02784A0 (NtGdiGetLinkedUFIs.c)
 *     NtGdiStartDoc @ 0x1C0278A30 (NtGdiStartDoc.c)
 *     GreGetTextCharsetInfo @ 0x1C028E514 (GreGetTextCharsetInfo.c)
 *     NtGdiGetStringBitmapW @ 0x1C02A1060 (NtGdiGetStringBitmapW.c)
 *     NtGdiGetCharWidthW @ 0x1C02C2420 (NtGdiGetCharWidthW.c)
 *     NtGdiGetCharacterPlacementW @ 0x1C02C2630 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x1C02C2CD0 (NtGdiGetEmbUFI.c)
 *     NtGdiGetFontUnicodeRanges @ 0x1C02C3130 (NtGdiGetFontUnicodeRanges.c)
 *     NtGdiGetKerningPairs @ 0x1C02C3220 (NtGdiGetKerningPairs.c)
 *     NtGdiGetTextExtent @ 0x1C02C34E0 (NtGdiGetTextExtent.c)
 *     NtGdiGetUFI @ 0x1C02C36B0 (NtGdiGetUFI.c)
 *     NtGdiPolyTextOutW @ 0x1C02C4050 (NtGdiPolyTextOutW.c)
 *     NtGdiGetETM @ 0x1C02D5D30 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

void __fastcall EUDCCountRegion::~EUDCCountRegion(EUDCCountRegion *this)
{
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
  GreAcquireSemaphore(*(_QWORD *)(*((_QWORD *)this + 5) + 13272LL));
  --*(_DWORD *)(*((_QWORD *)this + 5) + 13300LL);
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(*((_QWORD *)this + 5) + 13272LL));
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
