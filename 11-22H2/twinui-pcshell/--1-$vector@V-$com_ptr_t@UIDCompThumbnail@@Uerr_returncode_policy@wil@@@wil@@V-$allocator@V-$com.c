/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1804BCADC
 * Callers:
 *     _AppViewSwitchItemZOrderSort::SortItems_::_1_::dtor$1 @ 0x1802BBFEE (_AppViewSwitchItemZOrderSort--SortItems_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::EnsureDuplicateViewDestroyed_::_1_::dtor$2 @ 0x1804C3971 (_WindowEventDispatcher--EnsureDuplicateViewDestroyed_--_1_--dtor$2.c)
 *     _CAppThumbnailWindow::CAppThumbnailWindow_::_1_::dtor$8 @ 0x18054C0F5 (_CAppThumbnailWindow--CAppThumbnailWindow_--_1_--dtor$8.c)
 *     _CAppThumbnailWindow::CAppThumbnailWindow_::_1_::dtor$9 @ 0x18054C105 (_CAppThumbnailWindow--CAppThumbnailWindow_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18004F428 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(
      v2,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
