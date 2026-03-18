/*
 * XREFs of ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000F6B4
 * Callers:
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000F55C (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x18000C3F8 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000F744 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 *     ?CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z @ 0x18000F984 (-CanUseFastShadow@ShadowIntermediates@CDropShadow@@QEBA_NAEBUD2D_SIZE_F@@M@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x1800B5B8C (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z @ 0x1800ED2FC (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCBrush@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x18021243C (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CD.c)
 */

__int64 __fastcall CDropShadow::UpdateShadowIntermediates(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  char v3; // si
  CDropShadow::ShadowIntermediates *v7; // rbp
  CComposition *v8; // rcx
  __int64 v9; // rax
  int updated; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  CVisual *v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  _BYTE v17[56]; // [rsp+30h] [rbp-38h] BYREF
  struct CBrush *v18; // [rsp+70h] [rbp+8h] BYREF
  CVisual *v19; // [rsp+88h] [rbp+20h] BYREF

  v3 = 1;
  if ( *((_DWORD *)this + 31) == 1 )
  {
    v14 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
    v18 = 0LL;
    v19 = v14;
    CVisual::GetContentAsBrushNoRef(v14, &v18);
    v7 = (CDropShadow::ShadowIntermediates *)(*(_QWORD *)std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Try_emplace<CVisual * const &,>(
                                                           (char *)this + 192,
                                                           v17,
                                                           &v19)
                                            + 24LL);
    v15 = CDropShadow::ShadowIntermediates::SetMask(v7, this, v18);
    v12 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x22Fu, 0LL);
      return v12;
    }
  }
  else
  {
    v7 = (CDropShadow *)((char *)this + 128);
  }
  v8 = (CComposition *)*((_QWORD *)this + 2);
  if ( !*((_DWORD *)v8 + 278)
    || !CComposition::IsOverdrawHeatMapEnabled(v8)
    || CDropShadow::ShadowIntermediates::CanUseFastShadow(v7, a3, *((float *)this + 22)) )
  {
    v3 = 0;
  }
  v9 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 256) = v3;
  if ( *(_DWORD *)(v9 + 1112) )
    return 0;
  updated = CDropShadow::ShadowIntermediates::UpdateIntermediates(v7, a2, a3, *((float *)this + 22));
  v12 = updated;
  if ( updated >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x242u, 0LL);
  return v12;
}
