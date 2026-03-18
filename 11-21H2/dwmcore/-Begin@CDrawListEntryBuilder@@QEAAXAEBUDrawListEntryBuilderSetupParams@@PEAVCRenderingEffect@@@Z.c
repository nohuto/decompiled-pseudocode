/*
 * XREFs of ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800CCFF0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180056C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800A8F20 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E37E0 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0KO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0HI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E38A8 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 */

void __fastcall CDrawListEntryBuilder::Begin(
        CDrawListEntryBuilder *this,
        const struct DrawListEntryBuilderSetupParams *a2,
        struct CRenderingEffect *a3)
{
  int v4; // eax
  struct CRenderingEffect *v6; // rcx
  int v7; // eax
  bool v8; // al
  __int64 v9; // rax
  int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // r8

  v4 = 2;
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  if ( *(_DWORD *)this > 2u )
    v4 = 4;
  *(_DWORD *)this = v4;
  v6 = (struct CRenderingEffect *)*((_QWORD *)this + 4);
  if ( v6 != a3 )
  {
    if ( a3 )
    {
      (**(void (__fastcall ***)(struct CRenderingEffect *))a3)(a3);
      v6 = (struct CRenderingEffect *)*((_QWORD *)this + 4);
    }
    *((_QWORD *)this + 4) = a3;
    if ( v6 )
      (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v7 = (*(__int64 (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)a3 + 24LL))(a3);
  *(_WORD *)((char *)this + 4427) = 0;
  *((_DWORD *)this + 1101) = v7;
  v8 = CCommonRegistryData::EnableMegaRects
    && (float)CCommonRegistryData::MegaRectSize > 0.0
    && (*((_BYTE *)this + 24) & 1) != 0;
  *((_BYTE *)this + 4426) = v8;
  v9 = *((_QWORD *)this + 2);
  if ( !*(_QWORD *)v9 && !*(_QWORD *)(v9 + 80) || *((_DWORD *)this + 3) == 1 )
    *((_BYTE *)this + 28) = 0;
  v10 = *((_DWORD *)this + 6) | *(_DWORD *)(v9 + 96);
  *((_DWORD *)this + 6) = v10;
  if ( (*(_BYTE *)(v9 + 96) & 0x10) != 0 )
  {
    *((_BYTE *)this + 4425) = 1;
    v11 = v10 | 0x10;
  }
  else
  {
    v11 = v10 & 0xFFFFFFEF;
    *((_BYTE *)this + 4425) = CCommonRegistryData::EnableCpuClipping;
  }
  *((_DWORD *)this + 6) = v11;
  if ( (__int64)(*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 4 )
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 112,
      0LL);
  if ( (__int64)(*((_QWORD *)this + 259) - *((_QWORD *)this + 258)) >> 4 )
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,120,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 2064,
      0LL);
  v12 = (__int64)(*((_QWORD *)this + 504) - *((_QWORD *)this + 503)) >> 1;
  if ( v12 )
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 4024,
      0LL,
      v12);
  *((_DWORD *)this + 1004) = 0;
  *((_DWORD *)this + 1100) = 0;
}
