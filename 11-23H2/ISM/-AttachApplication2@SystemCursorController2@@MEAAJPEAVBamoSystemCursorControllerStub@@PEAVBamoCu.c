/*
 * XREFs of ?AttachApplication2@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x180101370
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C0A0C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB34 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180100BAC (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ??$make_shared@VCustomCursorApplication2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@std@@YA?AV?$shared_ptr@VCustomCursorApplication2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x180100D5C (--$make_shared@VCustomCursorApplication2@@V-$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAV.c)
 *     ?IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z @ 0x180102528 (-IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursorController2::AttachApplication2(
        std::_Ref_count_base **this,
        struct BamoSystemCursorControllerStub *a2,
        struct BamoCustomCursorControllerClient2Proxy *a3)
{
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // kr00_8
  std::_Ref_count_base *v6; // rax
  float *v7; // rax
  __int64 *v8; // rax
  const char *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v20; // [rsp+48h] [rbp-20h]
  _BYTE v21[24]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v23; // [rsp+70h] [rbp+8h] BYREF
  void (__fastcall ***v24)(_QWORD); // [rsp+80h] [rbp+18h] BYREF

  v24 = (void (__fastcall ***)(_QWORD))a3;
  try
  {
    if ( this[10] )
    {
      v23 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 6) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 6) + 16LL))
                      + 36);
      if ( SystemCursorController2::IsApplicationPeer((SystemCursorController2 *)this, v23) )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          72LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)0x8000FFFFLL,
          v15);
      v4 = (__int64)this[10] - 8;
      v5 = this[10];
      v6 = this[11];
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      v15 = v4 & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64);
      v16 = this[11];
      std::make_shared<CustomCursorApplication2,std::shared_ptr<SystemCursorService2>,unsigned int &,BamoCustomCursorControllerClient2Proxy * &>(
        &v17,
        &v15,
        (int *)&v23,
        &v24);
      if ( v16 )
        std::_Ref_count_base::_Decref(v16);
      v7 = (float *)(*(__int64 (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this[10] + 80LL))(this[10]);
      std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
        v7,
        (__int64)v21,
        (unsigned __int8 *)&v23);
      v8 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v19, &v17);
      v10 = *v8;
      *v8 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)(v11 + 24) = v10;
      v12 = v8[1];
      v8[1] = *(_QWORD *)(v11 + 32);
      *(_QWORD *)(v11 + 32) = v12;
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 24LL))((char *)a3 + 8);
      if ( v13 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          85LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)(unsigned int)v13,
          v15);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x58,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      v9);
  }
  return 0LL;
}
