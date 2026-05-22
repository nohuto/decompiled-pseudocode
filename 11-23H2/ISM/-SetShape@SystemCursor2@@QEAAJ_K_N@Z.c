/*
 * XREFs of ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x180106924
 * Callers:
 *     ?AddShape@SystemCursor2@@QEAAJV?$shared_ptr@VSystemCursorShape2@@@std@@@Z @ 0x1801047EC (-AddShape@SystemCursor2@@QEAAJV-$shared_ptr@VSystemCursorShape2@@@std@@@Z.c)
 *     ?OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x180105BC0 (-OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?RemoveShape@SystemCursor2@@QEAAX_K@Z @ 0x18010608C (-RemoveShape@SystemCursor2@@QEAAX_K@Z.c)
 *     ?SetRasterizationScale@SystemCursor2@@QEAAJI@Z @ 0x1801068C4 (-SetRasterizationScale@SystemCursor2@@QEAAJI@Z.c)
 *     ?SetShellMagnification@SystemCursor2@@QEAAJM@Z @ 0x180106BB8 (-SetShellMagnification@SystemCursor2@@QEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800BE150 (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB34 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ShapeExists@SystemCursor2@@QEBA_N_K@Z @ 0x180102E1C (-ShapeExists@SystemCursor2@@QEBA_N_K@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180103A88 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801045A4 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH00H@Z @ 0x180104B3C (-ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH00H@Z.c)
 *     ?FindClosestShapeBitmap@SystemCursorShape2@@QEAA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@I@Z @ 0x180105690 (-FindClosestShapeBitmap@SystemCursorShape2@@QEAA-AV-$shared_ptr@VSystemCursorShapeBitmap2@@@std@.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAX_K@Z @ 0x1801063A0 (-SetCursorImage@Cursor@InputTraceLogging@@SAX_K@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18010703C (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?SetShape@HardwareCursorVisual@SystemCursors@@QEAAJPEAXIIII_NM@Z @ 0x180107760 (-SetShape@HardwareCursorVisual@SystemCursors@@QEAAJPEAXIIII_NM@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursor2::SetShape(SystemCursor2 *this, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rsi
  float v10; // xmm6_4
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+58h] [rbp+7h] BYREF
  std::_Ref_count_base *v14; // [rsp+60h] [rbp+Fh]
  __int64 v15; // [rsp+68h] [rbp+17h] BYREF
  std::_Ref_count_base *v16; // [rsp+70h] [rbp+1Fh]
  __int64 v17; // [rsp+78h] [rbp+27h] BYREF
  std::_Ref_count_base *v18; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  unsigned __int64 v20; // [rsp+C0h] [rbp+6Fh] BYREF

  v20 = a2;
  InputTraceLogging::Cursor::SetCursorImage(a2);
  v5 = v20;
  *((_QWORD *)this + 6) = v20;
  if ( !SystemCursor2::ShapeExists(this, v5) )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)0x80070057LL);
    return v6;
  }
  std::weak_ptr<SystemCursorService2>::lock((char *)this + 56, &v15);
  if ( !v15 )
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)0x8000FFFFLL);
LABEL_6:
    std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)&v15);
    return v6;
  }
  v8 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
         (float *)this + 22,
         (__int64)&v17,
         (unsigned __int8 *)&v20);
  SystemCursorShape2::FindClosestShapeBitmap(*(_QWORD *)(*(_QWORD *)v8 + 24LL), &v13, *((_DWORD *)this + 8));
  if ( !v13 )
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)0x8000FFFFLL);
LABEL_14:
    std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)&v13);
    goto LABEL_6;
  }
  if ( *((_QWORD *)this + 9) != v13 || a3 )
  {
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v17, (_QWORD *)(v13 + 16));
    v9 = v17;
    v10 = (float)*(int *)(v17 + 4) / *((float *)this + 48);
    v11 = SystemCursors::HardwareCursorVisual::SetShape(
            *((SystemCursors::HardwareCursorVisual **)this + 21),
            *(void **)(v17 + 24),
            *(_DWORD *)(v17 + 8),
            *(_DWORD *)(v17 + 12),
            *(_DWORD *)(v17 + 16),
            *(_DWORD *)(v17 + 20),
            *(_BYTE *)v17,
            v10);
    v6 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice2.cpp",
        (const char *)(unsigned int)v11);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
      goto LABEL_14;
    }
    LOBYTE(v12) = 1;
    InputTraceLogging::Cursor::ChangeDwmCursorShape(
      v12,
      0,
      *(_DWORD *)(v9 + 8),
      *(_DWORD *)(v9 + 12),
      *(_DWORD *)(v9 + 16),
      *(_DWORD *)(v9 + 20),
      *(_BYTE *)v9,
      0,
      (int)(float)(v10 * 100.0));
    std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)this + 9, &v13);
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
  }
  *((_QWORD *)this + 5) = v20;
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  return 0LL;
}
