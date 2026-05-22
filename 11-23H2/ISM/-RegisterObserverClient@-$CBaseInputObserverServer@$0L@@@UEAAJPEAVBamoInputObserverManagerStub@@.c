/*
 * XREFs of ?RegisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180148D90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A8DC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180148590 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x18014873C (--$find@X@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServer@$0L@@@V-$_Uh.c)
 *     ?CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x1801489E8 (-CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x180148C68 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 *     ?UpdateObservationState@?$CBaseInputObserverServer@$0L@@@AEAAXXZ @ 0x180148F54 (-UpdateObservationState@-$CBaseInputObserverServer@$0L@@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBaseInputObserverServer<11>::RegisterObserverClient(
        __int64 a1,
        __int64 a2,
        struct BamoInputObserverClientProxy *a3)
{
  char **v5; // rax
  char *v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  char v12[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 ClientId; // [rsp+50h] [rbp+8h] BYREF
  struct BamoInputObserverClientProxy *v15; // [rsp+68h] [rbp+20h] BYREF

  ClientId = GetClientId(a3);
  v5 = (char **)std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<11>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>>,0>>::find<void>(
                  (_QWORD *)(a1 + 160),
                  &v15,
                  (const unsigned __int8 *)&ClientId);
  v6 = *(char **)(a1 + 168);
  if ( *v5 == v6 )
  {
    v7 = CheckClientCapability(a3, v6);
    if ( v7 >= 0 )
    {
      *((_DWORD *)a3 + 14) = *(_DWORD *)(a1 + 228);
      v15 = a3;
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v15);
      v8 = std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<11>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>>,0>>::_Try_emplace<unsigned __int64 const &,>(
             (float *)(a1 + 160),
             (__int64)v12,
             (unsigned __int8 *)&ClientId);
      v9 = *(_QWORD *)v8;
      v10 = *(_QWORD *)(*(_QWORD *)v8 + 24LL);
      *(_QWORD *)(*(_QWORD *)v8 + 24LL) = a3;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *(_DWORD *)(v9 + 32) = 2;
      CBaseInputObserverServer<11>::UpdateObservationState(a1);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        67LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputobservers\\server\\BaseInputObserverServer.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  return 0LL;
}
