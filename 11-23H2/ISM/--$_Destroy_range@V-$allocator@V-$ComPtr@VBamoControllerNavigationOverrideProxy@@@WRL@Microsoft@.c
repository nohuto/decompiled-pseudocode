/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x18013F064
 * Callers:
 *     _std::vector_Microsoft::WRL::ComPtr_InputSiteElementProxy__std::allocator_Microsoft::WRL::ComPtr_InputSiteElementProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_InputSiteElementProxy____::_1_::catch$2 @ 0x18006F390 (_std--vector_Microsoft--WRL--ComPtr_InputSiteElementProxy__std--allocator_Microsoft--WRL--ComPtr.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x18013F0B8 (--$_Uninitialized_move@PEAV-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V-$a.c)
 *     ??1InputSiteManager@@UEAA@XZ @ 0x18013F104 (--1InputSiteManager@@UEAA@XZ.c)
 *     ??1InputAttemptedTargetManager@@QEAA@XZ @ 0x1801730EC (--1InputAttemptedTargetManager@@QEAA@XZ.c)
 *     ??1InputDeliveryServer@@UEAA@XZ @ 0x180173138 (--1InputDeliveryServer@@UEAA@XZ.c)
 *     _std::vector_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy__std::allocator_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy__const_&__::_1_::catch$0 @ 0x180173F76 (_std--vector_Microsoft--WRL--ComPtr_BamoInputAttemptedDeliveryClientProxy__std--allocator_Micros.c)
 *     ?Unregister@InputAttemptedTargetManager@@QEAAXAEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@Z @ 0x1801741CC (-Unregister@InputAttemptedTargetManager@@QEAAXAEBV-$ComPtr@VBamoInputAttemptedDeliveryClientProx.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@_K1@Z @ 0x180174288 (-_Change_array@-$vector@V-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@V-$all.c)
 *     _std::vector_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy__std::allocator_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy____::_1_::catch$0 @ 0x180190539 (_std--vector_Microsoft--WRL--ComPtr_BamoControllerNavigationOverrideProxy__std--allocator_Micros.c)
 *     ??1ControllerNavigationManager@@UEAA@XZ @ 0x180190A90 (--1ControllerNavigationManager@@UEAA@XZ.c)
 *     ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x180193280 (-OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
