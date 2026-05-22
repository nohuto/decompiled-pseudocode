/*
 * XREFs of ?ClearAnimationDataForSource@DragManagerClientProxy@@QEAAX_K@Z @ 0x180162C18
 * Callers:
 *     ?UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180002700 (-UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragMa.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1800B2F00 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KV-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$al.c)
 *     ?OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z @ 0x1801615BC (-OnManagerAnimationDataChange@GestureServices@@QEAAX_K0@Z.c)
 */

void __fastcall DragManagerClientProxy::ClearAnimationDataForSource(DragManagerClientProxy *this, __int64 a2)
{
  unsigned __int64 appended; // rax
  __int64 *v4; // rbx
  struct InputSystemServerConnection *BamoServerConnection; // rax
  GestureServices *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v14, 8uLL);
  v4 = (__int64 *)std::_Hash<std::_Umap_traits<unsigned __int64,std::vector<Microsoft::WRL::ComPtr<InputSite>>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::vector<Microsoft::WRL::ComPtr<InputSite>>>>,0>>::_Find_last<unsigned __int64>(
                    (_QWORD *)this + 8,
                    v13,
                    &v14,
                    appended)[1];
  if ( !v4 )
    v4 = (__int64 *)*((_QWORD *)this + 9);
  if ( v4 != *((__int64 **)this + 9) )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v6 = (GestureServices *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                                                               + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    GestureServices::OnManagerAnimationDataChange(v6, v4[3], 0LL);
    v8 = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)v4 + 16, 8uLL);
    v9 = *((_QWORD *)this + 11);
    v10 = 2 * (*((_QWORD *)this + 14) & v8);
    if ( *(__int64 **)(v9 + 16 * (*((_QWORD *)this + 14) & v8) + 8) == v4 )
    {
      if ( *(__int64 **)(v9 + 16 * (*((_QWORD *)this + 14) & v8)) == v4 )
      {
        v11 = *((_QWORD *)this + 9);
        *(_QWORD *)(v9 + 8 * v10) = v11;
      }
      else
      {
        v11 = v4[1];
      }
      *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
    }
    else if ( *(__int64 **)(v9 + 16 * (*((_QWORD *)this + 14) & v8)) == v4 )
    {
      *(_QWORD *)(v9 + 16 * (*((_QWORD *)this + 14) & v8)) = *v4;
    }
    v12 = *v4;
    --*((_QWORD *)this + 10);
    *(_QWORD *)v4[1] = v12;
    *(_QWORD *)(v12 + 8) = v4[1];
    std::_Deallocate<16,0>(v4, 0x28uLL);
  }
}
