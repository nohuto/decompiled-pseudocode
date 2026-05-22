/*
 * XREFs of ?ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x18015FD48
 * Callers:
 *     ?ProcessResult@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180153630 (-ProcessResult@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IAEBUDragOperationResult@Input.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800D6FF4 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1801612CC (-erase@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x1801C456C (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 */

__int64 __fastcall DragNDropProcessor::ProcessResult(
        DragNDropProcessor *this,
        int a2,
        const struct Windows::UI::Internal::Input::DragOperationResult *a3,
        struct BamoDragManagerClientProxy *a4)
{
  _QWORD *v5; // rbx
  unsigned __int64 appended; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v5 = (_QWORD *)((char *)this + 176);
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v13, 4uLL);
  v8 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
         v5,
         &v11,
         &v13,
         appended)[1];
  if ( !v8 )
    v8 = v5[1];
  if ( v8 != *((_QWORD *)this + 23) )
  {
    if ( *(_BYTE *)a3 && *(_QWORD *)(v8 + 40) )
    {
      v11 = *(_QWORD *)(v8 + 40);
      v12 = *((_DWORD *)a3 + 1);
      ActivationProcessor::TryActivate(v9, &v11);
    }
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::erase(
      v5,
      &v13);
  }
  return 0LL;
}
