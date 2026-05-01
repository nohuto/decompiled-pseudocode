/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@0@@Z @ 0x1803B2A3C
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_IUnknown__std::allocator_Microsoft::WRL::ComPtr_IUnknown_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IUnknown____::_1_::catch$0 @ 0x1803B2B89 (_std--vector_Microsoft--WRL--ComPtr_IUnknown__std--allocator_Microsoft--WRL--ComPtr_IUnknown____.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@0@@Z @ 0x1803B2BC8 (--$_Uninitialized_move@PEAV-$ComPtr@UIUnknown@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIUnknown@.c)
 *     ??_GObjectArray@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1803B31A0 (--_GObjectArray@Discover@PenWorkspace@@UEAAPEAXI@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@_K1@Z @ 0x1803B4268 (-_Change_array@-$vector@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIUnknown@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IUnknown>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
