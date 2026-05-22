/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18008402C
 * Callers:
 *     ??1CUIHierarchy@@AEAA@XZ @ 0x18004991C (--1CUIHierarchy@@AEAA@XZ.c)
 *     _std::vector_Microsoft::WRL::ComPtr_CUIWindow__std::allocator_Microsoft::WRL::ComPtr_CUIWindow_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_CUIWindow__const_&__::_1_::catch$0 @ 0x1800841CE (_std--vector_Microsoft--WRL--ComPtr_CUIWindow__std--allocator_Microsoft--WRL--ComPtr_CUIWindow__.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18008425C (--$_Uninitialized_move@PEAV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UCUIWindo.c)
 *     ??1?$vector@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180084864 (--1-$vector@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Micros.c)
 *     ??1CUIWindow@@UEAA@XZ @ 0x1800848B8 (--1CUIWindow@@UEAA@XZ.c)
 *     ?OnWindowWatcherStopped@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x180085E20 (-OnWindowWatcherStopped@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Inte.c)
 *     ?RemoveWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800863AC (-RemoveWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K1@Z @ 0x180086A94 (-_Change_array@-$vector@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UCUIWindow@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
