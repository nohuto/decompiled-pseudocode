/*
 * XREFs of ??1InputAttemptedTargetManager@@QEAA@XZ @ 0x1801539FC
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$2 @ 0x180058445 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801242C8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@.c)
 */

void __fastcall InputAttemptedTargetManager::~InputAttemptedTargetManager(InputAttemptedTargetManager *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
      v2,
      *((__int64 **)this + 3));
    std::_Deallocate<16,0>(
      *((void **)this + 2),
      (*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
