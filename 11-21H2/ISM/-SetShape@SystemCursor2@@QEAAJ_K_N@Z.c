/*
 * XREFs of ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800EDC6C
 * Callers:
 *     ?AddShape@SystemCursor2@@QEAAJV?$shared_ptr@VSystemCursorShape2@@@std@@@Z @ 0x1800EBB9C (-AddShape@SystemCursor2@@QEAAJV-$shared_ptr@VSystemCursorShape2@@@std@@@Z.c)
 *     ?OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800ECF50 (-OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z.c)
 *     ?RemoveShape@SystemCursor2@@QEAAX_K@Z @ 0x1800ED3EC (-RemoveShape@SystemCursor2@@QEAAX_K@Z.c)
 *     ?SetRasterizationScale@SystemCursor2@@QEAAJI@Z @ 0x1800EDC0C (-SetRasterizationScale@SystemCursor2@@QEAAJI@Z.c)
 *     ?SetShellMagnification@SystemCursor2@@QEAAJM@Z @ 0x1800EDEE8 (-SetShellMagnification@SystemCursor2@@QEAAJM@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800B5CC8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ShapeExists@SystemCursor2@@QEBA_N_K@Z @ 0x1800EA274 (-ShapeExists@SystemCursor2@@QEBA_N_K@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800EAF2C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EB958 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH00H@Z @ 0x1800EBED4 (-ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH00H@Z.c)
 *     ?FindClosestShapeBitmap@SystemCursorShape2@@QEAA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@I@Z @ 0x1800ECA14 (-FindClosestShapeBitmap@SystemCursorShape2@@QEAA-AV-$shared_ptr@VSystemCursorShapeBitmap2@@@std@.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAX_K@Z @ 0x1800ED700 (-SetCursorImage@Cursor@InputTraceLogging@@SAX_K@Z.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800EE2FC (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?SetShape@HardwareCursorVisual@SystemCursors@@QEAAJPEAXIIII_NM@Z @ 0x1800EE770 (-SetShape@HardwareCursorVisual@SystemCursors@@QEAAJPEAXIIII_NM@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursor2::SetShape(SystemCursor2 *this, unsigned __int64 a2, char a3)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rsi
  float v9; // xmm6_4
  int v10; // eax
  __int64 v11; // rcx
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
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)0x80070057LL);
    return v6;
  }
  std::weak_ptr<SystemCursorService2>::lock((char *)this + 56, &v17);
  if ( v17 )
  {
    v7 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
           (float *)this + 22,
           (__int64)&v13,
           (unsigned __int8 *)&v20);
    SystemCursorShape2::FindClosestShapeBitmap(*(_QWORD *)(*(_QWORD *)v7 + 24LL), &v15, *((_DWORD *)this + 8));
    if ( v15 )
    {
      if ( *((_QWORD *)this + 9) != v15 || a3 )
      {
        std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v13, (_QWORD *)(v15 + 16));
        v8 = v13;
        v9 = (float)*(int *)(v13 + 4) / *((float *)this + 48);
        v10 = SystemCursors::HardwareCursorVisual::SetShape(
                *((SystemCursors::HardwareCursorVisual **)this + 21),
                *(void **)(v13 + 24),
                *(_DWORD *)(v13 + 8),
                *(_DWORD *)(v13 + 12),
                *(_DWORD *)(v13 + 16),
                *(_DWORD *)(v13 + 20),
                *(_BYTE *)v13,
                v9);
        v6 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2D4,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice2.cpp",
            (const char *)(unsigned int)v10);
          if ( v14 )
            std::_Ref_count_base::_Decref(v14);
          goto LABEL_15;
        }
        LOBYTE(v11) = 1;
        InputTraceLogging::Cursor::ChangeDwmCursorShape(
          v11,
          0,
          *(_DWORD *)(v8 + 8),
          *(_DWORD *)(v8 + 12),
          *(_DWORD *)(v8 + 16),
          *(_DWORD *)(v8 + 20),
          *(_BYTE *)v8,
          0,
          (int)(float)(v9 * 100.0));
        std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)this + 9, &v15);
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
      }
      *((_QWORD *)this + 5) = v20;
      v6 = 0;
    }
    else
    {
      v6 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice2.cpp",
        (const char *)0x8000FFFFLL);
    }
LABEL_15:
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    goto LABEL_17;
  }
  v6 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C2,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcursorservice2.cpp",
    (const char *)0x8000FFFFLL);
LABEL_17:
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  return v6;
}
