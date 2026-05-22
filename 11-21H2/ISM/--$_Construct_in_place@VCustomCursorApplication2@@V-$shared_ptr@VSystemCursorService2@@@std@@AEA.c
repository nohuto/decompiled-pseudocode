/*
 * XREFs of ??$_Construct_in_place@VCustomCursorApplication2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@std@@YAXAEAVCustomCursorApplication2@@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800E7C88
 * Callers:
 *     ??$make_shared@VCustomCursorApplication2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@std@@YA?AV?$shared_ptr@VCustomCursorApplication2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800E7EF0 (--$make_shared@VCustomCursorApplication2@@V-$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAV.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$unordered_set@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@V?$allocator@PEAUIHeatSystemContextClient@@@3@@std@@QEAA@XZ @ 0x180089AE4 (--0-$unordered_set@PEAUIHeatSystemContextClient@@U-$hash@PEAUIHeatSystemContextClient@@@std@@U-$.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::_Construct_in_place<CustomCursorApplication2,std::shared_ptr<SystemCursorService2>,unsigned int &,BamoCustomCursorControllerClient2Proxy * &>(
        __int64 a1,
        __int64 *a2,
        int *a3,
        void (__fastcall ****a4)(_QWORD))
{
  void (__fastcall ***v5)(_QWORD); // rdi
  int v6; // esi
  __int64 v7; // rcx
  volatile signed __int32 *v8; // [rsp+28h] [rbp-10h]

  v5 = *a4;
  v6 = *a3;
  v7 = *a2;
  v8 = (volatile signed __int32 *)a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v8 )
  {
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    _InterlockedIncrement(v8 + 3);
  }
  std::unordered_set<IHeatSystemContextClient *>::unordered_set<IHeatSystemContextClient *>(a1 + 16);
  *(_DWORD *)(a1 + 80) = v6;
  *(_QWORD *)(a1 + 88) = v5;
  if ( v5 )
    (**v5)(v5);
  if ( v8 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
}
