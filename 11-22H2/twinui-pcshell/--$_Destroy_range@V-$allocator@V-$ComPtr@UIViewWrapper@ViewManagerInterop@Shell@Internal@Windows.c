/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1802D7468
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1802D74A0 (--$_Uninitialized_move@PEAV-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WR.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K1@Z @ 0x1802D8580 (-_Change_array@-$vector@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V-$allocator@V.c)
 *     _lambda_279b59b1da187398d137b7ca9bd87eac_::operator() @ 0x1802D8824 (_lambda_279b59b1da187398d137b7ca9bd87eac_--operator().c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper__std::allocator_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_Windows::Internal::Shell::ViewManagerInterop::IViewWrapper____::_1_::catch$0 @ 0x18039575D (_std--vector_Microsoft--WRL--ComPtr_Windows--Internal--Shell--ViewManagerInterop--I_ea_18039575D.c)
 *     ??1CReportWindowVisibilityChange@@QEAA@XZ @ 0x180396D48 (--1CReportWindowVisibilityChange@@QEAA@XZ.c)
 *     ??1?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1804D4248 (--1-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
