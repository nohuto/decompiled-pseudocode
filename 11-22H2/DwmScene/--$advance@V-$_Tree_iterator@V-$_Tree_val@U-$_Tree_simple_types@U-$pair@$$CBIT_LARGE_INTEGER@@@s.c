/*
 * XREFs of ??$advance@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@std@@@std@@@std@@_K@std@@YAXAEAV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@std@@@std@@@0@_K@Z @ 0x1800C8A7C
 * Callers:
 *     ?ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA4FC (-ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 */

__int64 __fastcall std::advance<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,_LARGE_INTEGER>>>>,unsigned __int64>(
        __int64 *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r10
  __int64 v4; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  v5 = *a1;
  v3 = a1;
  if ( a2 )
  {
    do
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v5);
    while ( v4 != 1 );
    result = v5;
  }
  *v3 = result;
  return result;
}
