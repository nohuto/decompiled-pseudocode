/*
 * XREFs of ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x1801A0090
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B20C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18019E234 (--$_Emplace_reallocate@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@-$vect.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x1801A02B0 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ControllerNavigationManager::RegisterOverride(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationManagerStub *a2,
        struct BamoControllerNavigationOverrideProxy *a3)
{
  struct BamoControllerNavigationOverrideProxy *v5; // rbx
  __int64 *v6; // rdx
  struct BamoControllerNavigationOverrideProxy *v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = a3;
  v8 = a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v8);
  v6 = (__int64 *)*((_QWORD *)this + 26);
  if ( v6 == *((__int64 **)this + 27) )
  {
    std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>(
      (__int64 **)this + 25,
      v6,
      (__int64 *)&v8);
    v5 = v8;
  }
  else
  {
    *v6 = 0LL;
    if ( v6 != (__int64 *)&v8 )
    {
      *v6 = (__int64)v5;
      v5 = 0LL;
    }
    *((_QWORD *)this + 26) += 8LL;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct BamoControllerNavigationOverrideProxy *))(*(_QWORD *)v5 + 8LL))(v5);
  ControllerNavigationManager::SetCurrentStateWithOverride(this, a3);
  return 0LL;
}
