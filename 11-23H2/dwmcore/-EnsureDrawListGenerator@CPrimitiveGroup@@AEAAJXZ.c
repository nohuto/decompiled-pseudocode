/*
 * XREFs of ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18000F2B4
 * Callers:
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18000F0E4 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000F210 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180247FE0 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 * Callees:
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x18000F324 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18000FD94 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x180012E8C (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x1801D5A04 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180247D38 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180247F00 (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x180248198 (-IsCloseColorF@@YA_NAEBU_D3DCOLORVALUE@@0@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::EnsureDrawListGenerator(CPrimitiveGroup *this)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  struct CPrimitiveGroupDrawListGenerator **v4; // rdx
  int NewGenerator; // eax
  unsigned int v6; // ecx
  __int64 TopByReference; // rax
  struct _D3DCOLORVALUE *v9; // rcx
  const struct _D3DCOLORVALUE *v10; // rdx
  int NewGeneratorForHeatMap; // eax
  unsigned int v12; // ecx

  v2 = 0;
  if ( CComposition::IsOverdrawHeatMapEnabled(*((CComposition **)this + 2)) )
  {
    TopByReference = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v3 + 1112);
    v9 = (struct _D3DCOLORVALUE *)((char *)this + 624);
    v10 = (const struct _D3DCOLORVALUE *)(TopByReference + 4);
    if ( !*((_BYTE *)this + 545) || !IsCloseColorF(v9, v10) )
    {
      *((_BYTE *)this + 545) = 1;
      *(struct _D3DCOLORVALUE *)&v9->r = *(const struct _D3DCOLORVALUE *)&v10->r;
      CPrimitiveGroup::BuildHeatMap(this);
    }
  }
  else if ( *((_BYTE *)this + 545) )
  {
    *((_BYTE *)this + 545) = 0;
    CPrimitiveGroup::ReleaseHeatMap(this);
  }
  v4 = (struct CPrimitiveGroupDrawListGenerator **)((char *)this + 128);
  if ( !*((_QWORD *)this + 16) )
  {
    if ( *((_BYTE *)this + 545) )
    {
      NewGeneratorForHeatMap = CPrimitiveGroup::CreateNewGeneratorForHeatMap(this, v4);
      v2 = NewGeneratorForHeatMap;
      if ( NewGeneratorForHeatMap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, NewGeneratorForHeatMap, 0x204u, 0LL);
    }
    else
    {
      NewGenerator = CPrimitiveGroup::CreateNewGenerator(this, v4);
      v2 = NewGenerator;
      if ( NewGenerator < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, NewGenerator, 0x208u, 0LL);
    }
  }
  return v2;
}
