/*
 * XREFs of ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@23@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18002EA80
 * Callers:
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18002E9AC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@Q.c)
 *     _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x180109928 (_lambda_16e39da7052e4c67737ceb9c18ac8be9_--operator().c)
 *     _lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator() @ 0x18041BC48 (_lambda_687e5a8c7a4f05ed052b2b78739515ed_--operator().c)
 *     ?GetMonitor@WindowingEnvironmentConfig@@UEAAJIPEAPEAUIImmersiveMonitor@@@Z @ 0x18041BF00 (-GetMonitor@WindowingEnvironmentConfig@@UEAAJIPEAPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x1803E74E0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

__int64 *__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,Microsoft::WRL::ComPtr<IOcclusionBasedApplicationViewPosition>>>>,std::_Iterator_base0>::operator++(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // r8
  __int64 v5; // rcx
  __int64 i; // rax

  v4 = a1;
  v5 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 16) + 25LL) )
  {
    for ( i = *(_QWORD *)(v5 + 8); !*(_BYTE *)(i + 25) && v5 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
    {
      *v4 = i;
      v5 = i;
    }
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min(
          *(_QWORD *)(v5 + 16),
          0LL,
          v4,
          a4);
  }
  *v4 = i;
  return v4;
}
