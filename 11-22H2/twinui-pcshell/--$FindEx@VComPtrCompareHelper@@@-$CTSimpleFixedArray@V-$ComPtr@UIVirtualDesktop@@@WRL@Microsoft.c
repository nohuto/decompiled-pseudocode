/*
 * XREFs of ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800DF1F0
 * Callers:
 *     ?ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z @ 0x1800DF070 (-ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z.c)
 *     ?GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAPEAX@Z @ 0x1801B3C90 (-GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAP.c)
 *     ?GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@PEA_K@Z @ 0x1801B7230 (-GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@PEA_K@Z.c)
 *     ?RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1802E71E0 (-RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?DetermineRelativeDirection@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z @ 0x1805FBE50 (-DetermineRelativeDirection@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z.c)
 *     ?RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1805FC434 (-RemoveRemoteDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IVirtualDesktop>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
        _QWORD *a1,
        __int64 a2,
        struct IUnknown **a3,
        _QWORD *a4)
{
  __int64 v4; // rbx

  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( !(unsigned int)SHIsSameObject(*(struct IUnknown **)(*a1 + 8 * v4), *a3) )
  {
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
