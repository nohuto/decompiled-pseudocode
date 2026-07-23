/*
 * XREFs of BgpFwFreeMemory @ 0x140386280
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x140384F24 (BgpFwQueryBootGraphicsInformation.c)
 *     RaspFreeMemory @ 0x140386264 (RaspFreeMemory.c)
 *     RaspScanConvert @ 0x140386420 (RaspScanConvert.c)
 *     BgpFwLibraryDisable @ 0x140AEC1EC (BgpFwLibraryDisable.c)
 *     FopFreeMappingTable @ 0x140AEC2E8 (FopFreeMappingTable.c)
 *     FopFreeFontData @ 0x140AEC314 (FopFreeFontData.c)
 *     BgpTxtDestroyRegion @ 0x140AEC904 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140AED9C8 (TxtpAddCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x140AEDA70 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x140AEE2AC (BgpTxtCreateRegion.c)
 *     BgpDisplayCharacterGetContext @ 0x140AEE4B8 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleInitialize @ 0x140AEE6E0 (BgpConsoleInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140AEEA88 (BgpFwLibraryDestroy.c)
 *     ResFwBackgroundTransition @ 0x140AEEAF8 (ResFwBackgroundTransition.c)
 *     ResFwpPageOutBackground @ 0x140AEEBF0 (ResFwpPageOutBackground.c)
 *     BgpFoDestroy @ 0x140AEECA8 (BgpFoDestroy.c)
 *     BgConsoleDestroyInterface @ 0x140AEF504 (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AEF564 (BgpDisplayCharacterDestroyContext.c)
 *     AnFwpDisableProgressTimer @ 0x140AEF610 (AnFwpDisableProgressTimer.c)
 *     ResFwFreeContext @ 0x140AF1EE4 (ResFwFreeContext.c)
 *     BgpBcInitializeCriticalMode @ 0x140B9C3E8 (BgpBcInitializeCriticalMode.c)
 *     FopReadNamingTable @ 0x140B9C740 (FopReadNamingTable.c)
 *     FopReadMappingTable @ 0x140B9CAAC (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140B9CC7C (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140B9CE00 (FopReadCmapTable.c)
 *     BgpFoInitialize @ 0x140B9D09C (BgpFoInitialize.c)
 * Callees:
 *     RtlClearBits @ 0x14022DB10 (RtlClearBits.c)
 *     MmUnmapLockedPages @ 0x1402CB990 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1402EBE10 (MiFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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
    v9 = a1 - 24 - qword_140C70D50 - 8;
    RtlClearBits(&stru_140C70D60, v9, *(_DWORD *)(a1 - 16));
    if ( v9 < dword_140C70D58 )
      dword_140C70D58 = v9;
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
