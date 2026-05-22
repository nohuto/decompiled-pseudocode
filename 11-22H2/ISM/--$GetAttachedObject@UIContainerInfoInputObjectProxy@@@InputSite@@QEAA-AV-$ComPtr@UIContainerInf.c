/*
 * XREFs of ??$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1801662A8
 * Callers:
 *     ?GetInputSiteForContainer@@YA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18016669C (-GetInputSiteForContainer@@YA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV-$vector@V-$ComPtr@VInp.c)
 *     ?GetContainerIdFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@Z @ 0x18017EB5C (-GetContainerIdFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAUCONTAINER_ID@@@.c)
 *     ?GetContainerGuidFromInputTarget@@YA_NV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z @ 0x1801DE32C (-GetContainerGuidFromInputTarget@@YA_NV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ??$As@UIContainerInfoInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014DA0C (--$As@UIContainerInfoInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-.c)
 */

__int64 *__fastcall InputSite::GetAttachedObject<IContainerInfoInputObjectProxy>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 488);
  v4 = *(_QWORD *)(a1 + 496);
  while ( v3 != v4
       && (int)Microsoft::WRL::ComPtr<IUnknown>::As<IContainerInfoInputObjectProxy>(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 8),
                 a2) < 0 )
    v3 += 16LL;
  return a2;
}
