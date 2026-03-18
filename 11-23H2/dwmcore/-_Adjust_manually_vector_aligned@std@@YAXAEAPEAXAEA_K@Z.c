/*
 * XREFs of ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800DC7A0
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x18003C2D0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ??$_Insert_range@PEAVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VCMilPoint2F@@@std@@@std@@@1@PEAVCMilPoint2F@@1Uforward_iterator_tag@1@@Z @ 0x18003D280 (--$_Insert_range@PEAVCMilPoint2F@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@@@std@.c)
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x18003D460 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x18003E178 (--$_Emplace_reallocate@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@st.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18005EF70 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x180079928 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007DC00 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800B71B4 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x1800CE2A4 (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ.c)
 *     ??_EFlattenedShapeSharedData@CRoundedRectangleShape@@UEAAPEAXI@Z @ 0x1800DC280 (--_EFlattenedShapeSharedData@CRoundedRectangleShape@@UEAAPEAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800DC75C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CShapeDrawingContext@@QEAA@XZ @ 0x18026B2A4 (--1CShapeDrawingContext@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Adjust_manually_vector_aligned(void **a1, unsigned __int64 *a2)
{
  _BYTE *v2; // rdx

  *a2 += 39LL;
  v2 = (_BYTE *)*((_QWORD *)*a1 - 1);
  if ( (unsigned __int64)((_BYTE *)*a1 - v2 - 8) > 0x1F )
    _invalid_parameter_noinfo_noreturn();
  *a1 = v2;
}
