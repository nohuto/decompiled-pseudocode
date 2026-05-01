/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@0@@Z @ 0x1802DE558
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal__std::allocator_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal____::_1_::catch$0 @ 0x1802DE811 (_std--vector_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal__std--allocator_Microsoft--WRL.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@0@@Z @ 0x1802DEB64 (--$_Uninitialized_move@PEAV-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V-$allocator.c)
 *     ??1CReportWindowVisibilityChange@@QEAA@XZ @ 0x1802E0170 (--1CReportWindowVisibilityChange@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K1@Z @ 0x1802E9214 (-_Change_array@-$vector@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V-$allocator@V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>(
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
