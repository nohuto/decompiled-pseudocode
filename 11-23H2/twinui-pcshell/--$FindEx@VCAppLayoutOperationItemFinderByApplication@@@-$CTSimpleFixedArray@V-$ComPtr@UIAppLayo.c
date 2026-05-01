/*
 * XREFs of ??$FindEx@VCAppLayoutOperationItemFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutOperationItemFinderByApplication@@AEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180791874
 * Callers:
 *     ?GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperationItem@@@Z @ 0x180791FC0 (-GetOperationItem@CAppLayoutOperation@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutOperatio.c)
 * Callees:
 *     ?Compare@CAppLayoutOperationItemFinderByApplication@@QEBAHAEBV?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@0@Z @ 0x1807919F0 (-Compare@CAppLayoutOperationItemFinderByApplication@@QEBAHAEBV-$ComPtr@UIAppLayoutOperationItem@.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutOperationItem>>>::FindEx<CAppLayoutOperationItemFinderByApplication>(
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
  while ( (unsigned int)CAppLayoutOperationItemFinderByApplication::Compare(a2, *a1 + 8 * v4) )
  {
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
