/*
 * XREFs of BgpFwFreeMemory @ 0x1403A8CB4
 * Callers:
 *     RaspFreeMemory @ 0x1403A8C98 (RaspFreeMemory.c)
 *     RaspScanConvert @ 0x1403A8E50 (RaspScanConvert.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1403AA7E0 (BgpFwQueryBootGraphicsInformation.c)
 *     ResFwFreeContext @ 0x140AAB07C (ResFwFreeContext.c)
 *     ResFwpPageOutBackground @ 0x140AAB7D4 (ResFwpPageOutBackground.c)
 *     AnFwpDisableProgressTimer @ 0x140AABA70 (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayFade @ 0x140AAC1BC (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x140AAC868 (BgpTxtCreateRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x140AAD1C4 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140AAD338 (TxtpAddCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x140AAD3E0 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x140AAD490 (BgpFwLibraryInitialize.c)
 *     ResFwBackgroundTransition @ 0x140AADBBC (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x140AADC00 (ResFwpPageInBackground.c)
 *     BgpConsoleInitialize @ 0x140AAE560 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x140AAE79C (BgpDisplayCharacterGetContext.c)
 *     BgpFwLibraryDestroy @ 0x140AAE918 (BgpFwLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x140AAE968 (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AAE9C8 (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x140AAE9F4 (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x140AAEAF4 (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x140AAEBD8 (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x140AAECA0 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x140AAED14 (FopFreeMappingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140B55C50 (BgpBcInitializeCriticalMode.c)
 *     BgpFoInitialize @ 0x140B5616C (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x140B565BC (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x140B5678C (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x140B568E8 (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x140B56A6C (FopReadNamingTable.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140221A30 (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // rdx
  struct _MDL *v7; // rcx
  ULONG v8; // ebx
  struct _MDL *v9; // rbx

  v1 = a1 - 24;
  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v8 = v1 - qword_140C54910 - 8;
    RtlClearBits(&stru_140C54920, v8, *(_DWORD *)(v1 + 8));
    if ( v8 < HintIndex )
      HintIndex = v8;
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
    if ( *(_QWORD *)(v1 + 8) >= 0x1000uLL )
    {
      v9 = *(struct _MDL **)(v1 + 16);
      MmUnmapLockedPages(v7, v9);
      MiFreePagesFromMdl((ULONG_PTR)v9, 0);
      v7 = v9;
    }
    ExFreeHeapPool((ULONG_PTR)v7);
  }
}
