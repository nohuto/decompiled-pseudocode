/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800913B8
 * Callers:
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1800E7B40 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800E7D88 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1800E7E80 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x18023985E (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z @ 0x1802F5F10 (-ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z.c)
 *     ?GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1805E93D8 (-GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x1805F5118 (-ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z.c)
 *     ?Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z @ 0x18061AA20 (-Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z.c)
 *     ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x18061AAA0 (-InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        unsigned __int64 a4,
        int a5,
        char **a6)
{
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  char *v10; // rax
  char *v11; // rcx
  const WCHAR *v12; // r10
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  signed __int64 v15; // r10
  _WORD *v16; // r8
  __int64 v17; // r11
  __int16 v18; // ax
  _WORD *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdi

  v6 = a4 + 1;
  v7 = 0;
  *a6 = 0LL;
  if ( a4 + 1 < a4 || !is_mul_ok(v6, 2uLL) )
    return (unsigned int)-2147024362;
  v10 = (char *)CoTaskMemAlloc(2 * v6);
  *a6 = v10;
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-2147024882;
  if ( v6 > 0x7FFFFFFF )
  {
LABEL_22:
    *(_WORD *)v10 = 0;
    return v7;
  }
  if ( a4 >= 0x7FFFFFFF )
  {
    if ( !v6 )
      return v7;
    goto LABEL_22;
  }
  v12 = &LocaleName;
  if ( a3 )
    v12 = a3;
  v13 = -(__int64)a3;
  if ( v6 )
  {
    v14 = v6;
    v15 = (char *)v12 - v10;
    v16 = v10;
    v17 = 0LL;
    do
    {
      if ( !((a4 & -(__int64)(v13 != 0)) - v6 + v14) )
        break;
      v18 = *(_WORD *)((char *)v16 + v15);
      if ( !v18 )
        break;
      *v16 = v18;
      ++v17;
      ++v16;
      --v14;
    }
    while ( v14 );
    v19 = v16 - 1;
    if ( v14 )
      v19 = v16;
    *v19 = 0;
    v20 = v17 - 1;
    if ( v14 )
      v20 = v17;
    v21 = v6 - v20;
    if ( v14 && v21 > 1 && 2 * v21 > 2 )
      memset_0(&v11[2 * v20 + 2], 0, 2 * v21 - 2);
  }
  return v7;
}
