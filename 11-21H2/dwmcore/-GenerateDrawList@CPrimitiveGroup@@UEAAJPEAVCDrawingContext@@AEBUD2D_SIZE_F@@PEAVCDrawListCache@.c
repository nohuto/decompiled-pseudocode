/*
 * XREFs of ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000B810
 * Callers:
 *     <none>
 * Callees:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x18000C388 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ @ 0x1801042C4 (-ClearPrimitiveContent@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_3187573053@@@details@wil@@QEAA_NXZ @ 0x180104A34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_3187573053@@@details@wil@@QEAA_NX.c)
 */

__int64 __fastcall CPrimitiveGroup::GenerateDrawList(
        CPrimitiveGroup *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // ebx
  unsigned int v8; // ecx
  int v9; // r9d
  int DrawList; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  if ( !*((_QWORD *)this + 59) )
    return 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_3187573053>::__private_IsEnabled(
                           &`wil::Feature<__WilFeatureTraits_Feature_3187573053>::GetImpl'::`2'::impl,
                           a2,
                           a3) )
  {
    DrawList = CPrimitiveGroup::EnsureDrawListGenerator(this);
    v7 = DrawList;
    if ( DrawList < 0 )
    {
      v12 = 140;
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  v7 = CPrimitiveGroup::EnsureDrawListGenerator(this);
  if ( v7 >= 0 )
  {
LABEL_7:
    DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(
                 *((CPrimitiveGroupDrawListGenerator **)this + 16),
                 a2,
                 a4);
    v7 = DrawList;
    if ( DrawList < 0 )
    {
      v12 = 143;
LABEL_10:
      v9 = DrawList;
      goto LABEL_5;
    }
    return 0;
  }
  CPrimitiveGroup::ClearPrimitiveContent(this);
  v9 = v7;
  v12 = 135;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v9, v12, 0LL);
  return (unsigned int)v7;
}
