/*
 * XREFs of ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800EC230
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18004D9B0 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA-AV-$shared_ptr@VSy.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800B5CC8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800E7D4C (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@1@@?$_Ref_count_obj2@VSystemCursorShapeBitmap2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@1@@Z @ 0x1800EA73C (--$-0V-$shared_ptr@VSystemCursorService2@@@std@@AEAV-$shared_ptr@VCursorBitmapData@SystemCursors.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800EAF2C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??$make_shared@VSystemCursorShape2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA?AV?$shared_ptr@VSystemCursorShape2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEA_K@Z @ 0x1800EB194 (--$make_shared@VSystemCursorShape2@@V-$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA-AV-.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EB958 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddShape@SystemCursor2@@QEAAJV?$shared_ptr@VSystemCursorShape2@@@std@@@Z @ 0x1800EBB9C (-AddShape@SystemCursor2@@QEAAJV-$shared_ptr@VSystemCursorShape2@@@std@@@Z.c)
 *     ?InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z @ 0x180156EA4 (-InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall SystemCursorService2::CreateCursorShape(
        SystemCursorService2 *this,
        __int64 a2,
        __int64 a3,
        const struct CursorBitmapDataHeader *a4,
        unsigned int a5,
        unsigned __int8 *a6,
        unsigned int a7)
{
  const struct CursorBitmapDataHeader *v7; // rsi
  unsigned int v9; // ebx
  char *v10; // r12
  _QWORD *v11; // rax
  unsigned int v12; // edi
  __int64 v13; // r13
  const struct CursorBitmapDataHeader *v14; // rbx
  _DWORD *v15; // rsi
  int v16; // eax
  __int64 v17; // rbx
  std::_Ref_count_base *v18; // rbx
  _QWORD *v19; // rsi
  __int64 v20; // rax
  std::_Ref_count_base *v21; // rcx
  _QWORD *v22; // rax
  SystemCursor2 *v23; // r8
  char *v25; // [rsp+28h] [rbp-81h] BYREF
  std::_Ref_count_base *v26; // [rsp+30h] [rbp-79h]
  __int64 v27; // [rsp+38h] [rbp-71h] BYREF
  std::_Ref_count_base *v28; // [rsp+40h] [rbp-69h]
  _QWORD v29[2]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v30[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v31; // [rsp+68h] [rbp-41h] BYREF
  std::_Ref_count_base *v32; // [rsp+70h] [rbp-39h]
  __int64 v33; // [rsp+78h] [rbp-31h] BYREF
  std::_Ref_count_base *v34; // [rsp+80h] [rbp-29h]
  __int64 v35; // [rsp+88h] [rbp-21h] BYREF
  std::_Ref_count_base *v36; // [rsp+90h] [rbp-19h]
  _BYTE v37[16]; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v38[64]; // [rsp+A8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+47h]
  void *v40; // [rsp+F8h] [rbp+4Fh]
  __int64 v41; // [rsp+100h] [rbp+57h] BYREF
  __int64 v42; // [rsp+108h] [rbp+5Fh] BYREF
  const struct CursorBitmapDataHeader *v43; // [rsp+110h] [rbp+67h]

  v43 = a4;
  v42 = a3;
  v41 = a2;
  v7 = a4;
  if ( (*(unsigned __int8 (__fastcall **)(SystemCursorService2 *))(*(_QWORD *)this + 96LL))(this) )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
      (float *)this + 12,
      (__int64)v37,
      (unsigned __int8 *)&v41);
    v10 = (char *)this + 24;
    v11 = (_QWORD *)std::enable_shared_from_this<SystemCursorService2>::shared_from_this((__int64)this + 24, &v33);
    std::make_shared<SystemCursorShape2,std::shared_ptr<SystemCursorService2>,unsigned __int64 &>(&v27, v11, &v42);
    if ( v34 )
      std::_Ref_count_base::_Decref(v34);
    v12 = 0;
    if ( a5 )
    {
      v13 = v27;
      while ( 1 )
      {
        v14 = (const struct CursorBitmapDataHeader *)((char *)v7 + 29 * v12);
        v15 = operator new(0x40uLL);
        *(_OWORD *)v15 = 0LL;
        v15[2] = 1;
        v15[3] = 1;
        *(_QWORD *)v15 = &std::_Ref_count_obj2<SystemCursors::CursorBitmapData>::`vftable';
        *((_QWORD *)v15 + 5) = 0LL;
        *((_QWORD *)v15 + 6) = 0LL;
        *((_QWORD *)v15 + 7) = 0LL;
        v25 = (char *)(v15 + 4);
        v26 = (std::_Ref_count_base *)v15;
        v16 = SystemCursors::CursorBitmapData::InitializeFromBamoBlob(
                (SystemCursors::CursorBitmapData *)(v15 + 4),
                v14,
                a6,
                a7);
        v9 = v16;
        if ( v16 < 0 )
          break;
        v17 = std::enable_shared_from_this<SystemCursorService2>::shared_from_this((__int64)v10, &v35);
        v40 = operator new(0x30uLL);
        v18 = (std::_Ref_count_base *)std::_Ref_count_obj2<SystemCursorShapeBitmap2>::_Ref_count_obj2<SystemCursorShapeBitmap2>(
                                        (__int64)v40,
                                        v17,
                                        &v25);
        v30[0] = (char *)v18 + 16;
        v30[1] = v18;
        if ( v36 )
          std::_Ref_count_base::_Decref(v36);
        v19 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v29, v30);
        std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v31, (_QWORD *)(*v19 + 16LL));
        v20 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
                (float *)(v13 + 16),
                (__int64)v38,
                (unsigned __int8 *)(v31 + 4));
        std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)(*(_QWORD *)v20 + 24LL), v19);
        if ( v32 )
          std::_Ref_count_base::_Decref(v32);
        v21 = (std::_Ref_count_base *)v19[1];
        if ( v21 )
          std::_Ref_count_base::_Decref(v21);
        if ( v18 )
          std::_Ref_count_base::_Decref(v18);
        if ( v26 )
          std::_Ref_count_base::_Decref(v26);
        ++v12;
        v7 = v43;
        if ( v12 >= a5 )
          goto LABEL_19;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x82,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice2.cpp",
        (const char *)(unsigned int)v16);
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v15);
    }
    else
    {
LABEL_19:
      v22 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v29, &v27);
      SystemCursor2::AddShape(v23, v22);
      v9 = 0;
    }
    if ( v28 )
      std::_Ref_count_base::_Decref(v28);
  }
  else
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)0x80070057LL);
  }
  return v9;
}
