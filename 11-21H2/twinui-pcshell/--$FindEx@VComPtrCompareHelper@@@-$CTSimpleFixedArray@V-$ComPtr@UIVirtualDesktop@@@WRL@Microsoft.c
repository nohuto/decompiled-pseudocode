/*
 * XREFs of ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1801653DC
 * Callers:
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18010FFB0 (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     ?ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z @ 0x180165940 (-ContainsVirtualDesktop@CVirtualDesktopCollection@@UEAA_NPEAUIVirtualDesktop@@@Z.c)
 *     ?GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAPEAX@Z @ 0x180178090 (-GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAP.c)
 *     ?GetDesktopCollectionForDesktop@CVirtualDesktopCollection@@AEAAAEAV?$CCoSimpleArray@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$0PPPPPPPO@VComPtrCompareHelper@@@@PEAUIVirtualDesktop@@@Z @ 0x180178150 (-GetDesktopCollectionForDesktop@CVirtualDesktopCollection@@AEAAAEAV-$CCoSimpleArray@V-$ComPtr@UI.c)
 *     ?GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEA_K@Z @ 0x18017D080 (-GetDesktopIndex@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEA_K@Z.c)
 *     ?DetermineRelativeDirection@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z @ 0x180541320 (-DetermineRelativeDirection@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0PEAI@Z.c)
 *     ?OnMonitorDetached@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@@Z @ 0x180541920 (-OnMonitorDetached@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180541C10 (-RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
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
