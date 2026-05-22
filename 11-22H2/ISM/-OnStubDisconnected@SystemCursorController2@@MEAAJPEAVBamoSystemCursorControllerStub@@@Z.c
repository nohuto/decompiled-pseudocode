/*
 * XREFs of ?OnStubDisconnected@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z @ 0x18001B2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800DDDB4 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18010F6CC (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ?IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z @ 0x180111068 (-IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180111B74 (-erase@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@IU-$hash@.c)
 *     ?Cleanup@CustomCursorApplication2@@QEAAXXZ @ 0x1801137A0 (-Cleanup@CustomCursorApplication2@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorController2::OnStubDisconnected(
        SystemCursorController2 *this,
        struct BamoSystemCursorControllerStub *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rax
  CustomCursorApplication2 *v7; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-20h]
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 6) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL))
                  + 36);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3) )
    {
      if ( SystemCursorController2::IsApplicationPeer(this, v10) )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 80LL))(*((_QWORD *)this + 10));
        v6 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
                         v5,
                         v9,
                         &v10);
        std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v7, *v6 + 24LL);
        std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GestureHandler>>>,0>>::erase(
          v5,
          &v10);
        CustomCursorApplication2::Cleanup(v7);
        if ( v8 )
          std::_Ref_count_base::_Decref(v8);
      }
    }
  }
  return 0LL;
}
