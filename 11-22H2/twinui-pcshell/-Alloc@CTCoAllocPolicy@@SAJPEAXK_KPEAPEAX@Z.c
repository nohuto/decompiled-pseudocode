/*
 * XREFs of ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800ECE64
 * Callers:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800ECDD4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180116E80 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180186908 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x1803CD888 (-CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 *     ?_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z @ 0x180552600 (-_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z.c)
 *     PropVariantToIDList @ 0x1806AA490 (PropVariantToIDList.c)
 *     ?ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z @ 0x180756F04 (-ILCloneWithHiddenID@@YAJPEFBU_ITEMIDLIST@@PEFBU_HIDDENITEMID@@PEAPEFAU1@@Z.c)
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x180757064 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 * Callees:
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x1800EF4B8 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall CTCoAllocPolicy::Alloc(void *a1, char a2, SIZE_T a3, void **a4)
{
  void *v6; // rax
  size_t v8; // rax

  v6 = CoTaskMemAlloc(a3);
  *a4 = v6;
  if ( !v6 )
    return 2147942414LL;
  if ( (a2 & 1) != 0 )
  {
    v8 = CTCoAllocPolicy::_CoTaskMemSize(v6);
    memset_0(*a4, 0, v8);
  }
  return 0LL;
}
