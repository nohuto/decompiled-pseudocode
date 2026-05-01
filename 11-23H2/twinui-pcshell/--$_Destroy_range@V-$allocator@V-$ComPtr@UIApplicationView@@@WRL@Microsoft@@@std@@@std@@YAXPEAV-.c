/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x1804B1738
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IApplicationView__std::allocator_Microsoft::WRL::ComPtr_IApplicationView_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IApplicationView____::_1_::catch$0 @ 0x1804B1885 (_std--vector_Microsoft--WRL--ComPtr_IApplicationView__std--allocator_Microsoft--WRL--ComPtr_IApp.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@0@@Z @ 0x1804B1A08 (--$_Uninitialized_move@PEAV-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UI.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x1804B204C (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@_K1@Z @ 0x1804B655C (-_Change_array@-$vector@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIAp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
