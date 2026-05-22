/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@0@@Z @ 0x18009CA00
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180034AA0 (--$_Emplace_reallocate@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIM.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E6B40 (--$_Emplace_reallocate@AEBV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@-$vec.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@0@@Z @ 0x18009C7C8 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIInputSiteTransformClientPrivate@@@WRL@Microsoft@@@std.c)
 */

__int64 *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> *,std::allocator<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IInputSiteTransformClientPrivate>>>(a3, a3);
  return a3;
}
