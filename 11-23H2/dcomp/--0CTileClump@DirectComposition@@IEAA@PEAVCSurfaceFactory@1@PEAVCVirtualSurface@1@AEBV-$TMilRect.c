/*
 * XREFs of ??0CTileClump@DirectComposition@@IEAA@PEAVCSurfaceFactory@1@PEAVCVirtualSurface@1@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180037330
 * Callers:
 *     ?Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAV12@@Z @ 0x1800372A4 (-Create@CTileClump@DirectComposition@@SAJPEAVCSurfaceFactory@2@PEAVCVirtualSurface@2@AEBV-$TMilR.c)
 * Callees:
 *     ??0UnavailableRegion@DirectComposition@@QEAA@XZ @ 0x180088728 (--0UnavailableRegion@DirectComposition@@QEAA@XZ.c)
 *     McTemplateU0xxqqqq_EventWriteTransfer @ 0x1800FD4E8 (McTemplateU0xxqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CTileClump::CTileClump(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DirectComposition::UnavailableRegion *v4; // rsi
  int v6; // r15d
  __int64 v9; // rbp
  int v10; // edx
  int v11; // ecx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &DirectComposition::CTileClump::`vftable';
  v4 = (DirectComposition::UnavailableRegion *)(a1 + 176);
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = a3;
  v6 = a3;
  v9 = 4LL;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 96) = a1 + 104;
  *(_DWORD *)(a1 + 104) = 0;
  do
  {
    DirectComposition::UnavailableRegion::UnavailableRegion(v4);
    v4 = (DirectComposition::UnavailableRegion *)((char *)v4 + 80);
    --v9;
  }
  while ( v9 );
  v11 = (*(_DWORD *)(a4 + 8) - *(_DWORD *)a4) * (*(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4));
  *(_DWORD *)(a1 + 92) = v11;
  if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
    McTemplateU0xxqqqq_EventWriteTransfer(
      v11,
      v10,
      a1,
      v6,
      *(_DWORD *)a4,
      *(_DWORD *)(a4 + 4),
      *(_DWORD *)(a4 + 8),
      *(_DWORD *)(a4 + 12));
  *(_DWORD *)(a1 + 168) = **(_DWORD **)(*(_QWORD *)(a2 + 24) + 464LL);
  return a1;
}
