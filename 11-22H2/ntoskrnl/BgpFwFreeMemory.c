/*
 * XREFs of BgpFwFreeMemory @ 0x1403852A0
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x140383F44 (BgpFwQueryBootGraphicsInformation.c)
 *     RaspFreeMemory @ 0x140385284 (RaspFreeMemory.c)
 *     RaspScanConvert @ 0x140385440 (RaspScanConvert.c)
 *     BgpFwLibraryDisable @ 0x140AED1B0 (BgpFwLibraryDisable.c)
 *     FopFreeMappingTable @ 0x140AED2AC (FopFreeMappingTable.c)
 *     FopFreeFontData @ 0x140AED2D8 (FopFreeFontData.c)
 *     BgpTxtDestroyRegion @ 0x140AED8C8 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayFade @ 0x140AED9AC (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEE558 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140AEE988 (TxtpAddCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x140AEEA30 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x140AEEC38 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x140AEF26C (BgpTxtCreateRegion.c)
 *     BgpDisplayCharacterGetContext @ 0x140AEF478 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleInitialize @ 0x140AEF6A0 (BgpConsoleInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140AEFA48 (BgpFwLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x140AF0254 (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AF02B4 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFoDestroy @ 0x140AF0360 (BgpFoDestroy.c)
 *     ResFwBackgroundTransition @ 0x140AF0428 (ResFwBackgroundTransition.c)
 *     ResFwpPageOutBackground @ 0x140AF0490 (ResFwpPageOutBackground.c)
 *     AnFwpDisableProgressTimer @ 0x140AF05E0 (AnFwpDisableProgressTimer.c)
 *     ResFwFreeContext @ 0x140AF2ED4 (ResFwFreeContext.c)
 *     BgpBcInitializeCriticalMode @ 0x140B9D3E8 (BgpBcInitializeCriticalMode.c)
 *     FopReadNamingTable @ 0x140B9D740 (FopReadNamingTable.c)
 *     FopReadMappingTable @ 0x140B9DAAC (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140B9DC7C (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140B9DE00 (FopReadCmapTable.c)
 *     BgpFoInitialize @ 0x140B9E09C (BgpFoInitialize.c)
 * Callees:
 *     RtlClearBits @ 0x14022DA20 (RtlClearBits.c)
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1402EBB80 (MiFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  ULONG v2; // edx
  __int64 v3; // rax
  __int64 v4; // r10
  _QWORD *v5; // r9
  __int64 v6; // rax
  struct _MDL *v7; // rcx
  struct _MDL *v8; // rbx
  ULONG v9; // ebx

  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v9 = a1 - 24 - qword_140C70E10 - 8;
    RtlClearBits(&stru_140C70E20, v9, *(_DWORD *)(a1 - 16));
    if ( v9 < dword_140C70E18 )
      dword_140C70E18 = v9;
  }
  else
  {
    if ( v2 == 1262634818 )
    {
      v3 = a1 - 40;
      v4 = *(_QWORD *)(a1 - 40);
      if ( *(_QWORD *)(v4 + 8) != a1 - 40 || (v5 = *(_QWORD **)(v3 + 8), *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v6 = 48LL;
      *(_QWORD *)(v4 + 8) = v5;
    }
    else
    {
      v6 = 32LL;
    }
    v7 = (struct _MDL *)(a1 - v6);
    if ( *(_QWORD *)(a1 - 16) >= 0x1000uLL )
    {
      v8 = *(struct _MDL **)(a1 - 8);
      MmUnmapLockedPages(v7, v8);
      MiFreePagesFromMdl((ULONG_PTR)v8, 0);
      v2 = 0;
      v7 = v8;
    }
    ExFreePoolWithTag(v7, v2);
  }
}
