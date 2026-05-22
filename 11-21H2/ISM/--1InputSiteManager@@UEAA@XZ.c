/*
 * XREFs of ??1InputSiteManager@@UEAA@XZ @ 0x180124394
 * Callers:
 *     ??_GInputSiteManager@@UEAAPEAXI@Z @ 0x180124400 (--_GInputSiteManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@U_LUID@@V?$allocator@U_LUID@@@std@@@std@@AEAAXXZ @ 0x180086B38 (-_Tidy@-$vector@U_LUID@@V-$allocator@U_LUID@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801242C8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSiteManager::~InputSiteManager(InputSiteManager *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  Microsoft::BamoImpl::BamoImplObject *v6; // rcx

  v2 = (__int64 *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
      v2,
      *((__int64 **)this + 11));
    std::_Deallocate<16,0>(
      *((void **)this + 10),
      (*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  std::vector<_LUID>::_Tidy((__int64)this + 56);
  v6 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v6 )
    Microsoft::BamoImpl::BamoImplObject::Release(v6, v3, v4, v5);
}
