/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@PEAX@2@PEAU32@@Z @ 0x18012EA04
 * Callers:
 *     ?UnregisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x18012E870 (-UnregisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>,0>>::_Unchecked_erase(
        __int64 a1,
        unsigned __int8 *a2)
{
  __int64 appended; // rax
  _QWORD *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx

  appended = std::_Fnv1a_append_bytes(a1, a2 + 16, 8uLL);
  v5 = 2 * (appended & v4[6]);
  v6 = v4[3];
  if ( *(unsigned __int8 **)(v6 + 16 * (appended & v4[6]) + 8) == a2 )
  {
    if ( *(unsigned __int8 **)(v6 + 16 * (appended & v4[6])) == a2 )
    {
      v7 = v4[1];
      *(_QWORD *)(v6 + 8 * v5) = v7;
    }
    else
    {
      v7 = *((_QWORD *)a2 + 1);
    }
    *(_QWORD *)(v6 + 8 * v5 + 8) = v7;
  }
  else if ( *(unsigned __int8 **)(v6 + 16 * (appended & v4[6])) == a2 )
  {
    *(_QWORD *)(v6 + 16 * (appended & v4[6])) = *(_QWORD *)a2;
  }
  v8 = *(_QWORD *)a2;
  --v4[2];
  **((_QWORD **)a2 + 1) = v8;
  *(_QWORD *)(v8 + 8) = *((_QWORD *)a2 + 1);
  v9 = *((_QWORD *)a2 + 3);
  if ( v9 )
  {
    *((_QWORD *)a2 + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  std::_Deallocate<16,0>(a2, 0x28uLL);
  return v8;
}
