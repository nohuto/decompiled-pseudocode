/*
 * XREFs of ??$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByView@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180794730
 * Callers:
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x180198578 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 *     ?ContainsView@CAppLayout@@UEAAHPEAUIApplicationView@@@Z @ 0x180794EB0 (-ContainsView@CAppLayout@@UEAAHPEAUIApplicationView@@@Z.c)
 *     ?FindViewItem@CAppLayout@@UEAAJPEAUIApplicationView@@PEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1807951C0 (-FindViewItem@CAppLayout@@UEAAJPEAUIApplicationView@@PEAPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z @ 0x180797488 (-_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1807974FC (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ?Compare@CAppLayoutItemFinderByView@AppLayoutFinders@@QEBAHAEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@0@Z @ 0x180794D70 (-Compare@CAppLayoutItemFinderByView@AppLayoutFinders@@QEBAHAEBV-$ComPtr@UIAppLayoutItem@@@WRL@Mi.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByView>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx

  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( (unsigned int)AppLayoutFinders::CAppLayoutItemFinderByView::Compare(a2, *a1 + 8 * v4) )
  {
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
