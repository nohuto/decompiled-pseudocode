/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@std@@@std@@@2@0@Z @ 0x1800CB504
 * Callers:
 *     ?ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ @ 0x1800CA4FC (-ReconcileFrameStats@RenderOutputD3D11@D3D11@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180028BD0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@V-$_Tree.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@1@@Z @ 0x18002EA80 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_K_K@std@@PEAX@std@@@std@@@-$_Tree_val@U-$.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // r10
  __int64 v10; // r10
  __int64 v11; // r10
  __int64 *v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = (_QWORD *)*a1;
  v6 = a3;
  v13 = a3;
  if ( a3 == *v4 && *(_BYTE *)(a4 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,unsigned __int64>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      v4[1]);
    v4[1] = v4;
    *v4 = v4;
    v4[2] = v4;
    a1[1] = 0LL;
  }
  else
  {
    while ( v6 != a4 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v13);
      v14 = v10;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v14);
      v12 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Extract(a1, v11);
      std::_Deallocate<16,0>(v12, 0x30uLL);
      v6 = v13;
    }
  }
  *a2 = a4;
  return a2;
}
