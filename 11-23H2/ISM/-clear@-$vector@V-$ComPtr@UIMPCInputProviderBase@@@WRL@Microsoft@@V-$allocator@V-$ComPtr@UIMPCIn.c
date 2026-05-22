/*
 * XREFs of ?clear@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800B8DE4
 * Callers:
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800B7EA4 (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x1800B8398 (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800B8514 (-TrySetProviderAsPrimary@MPCHolographicInputManager@@AEAA_NAEBV-$ComPtr@UIMPCInputProviderBase@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@0@@Z @ 0x1800B3D4C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::clear(__int64 **a1)
{
  __int64 *result; // rax

  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
