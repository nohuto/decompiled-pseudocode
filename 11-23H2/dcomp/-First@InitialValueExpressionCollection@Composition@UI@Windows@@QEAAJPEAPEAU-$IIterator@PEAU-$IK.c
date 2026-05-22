/*
 * XREFs of ?First@InitialValueExpressionCollection@Composition@UI@Windows@@QEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@4@@Z @ 0x180194AF0
 * Callers:
 *     ?First@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z @ 0x180194A60 (-First@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAPEAU-$IIterator@PEAU.c)
 *     ?First@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z @ 0x1801A2440 (-First@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAPEAU-$IIterat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VInitialValueExpressionIterator@Composition@UI@Windows@@V1234@PEAVInitialValueExpressionCollection@234@PEAV?$map@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@@std@@@Details@WRL2@Microsoft@@YAJPEAPEAVInitialValueExpressionIterator@Composition@UI@Windows@@$$QEAPEAVInitialValueExpressionCollection@456@$$QEAPEAV?$map@VHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@U?$less@VHString@Wrappers@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$RefPtr@VCompositionAnimation@Composition@UI@Windows@@@WRL2@4@@std@@@8@@std@@@Z @ 0x1801945B4 (--$MakeAndInitialize2@VInitialValueExpressionIterator@Composition@UI@Windows@@V1234@PEAVInitialV.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionCollection::First(__int64 a1, unsigned __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  v7 = 0LL;
  v9 = a1;
  v8 = a1 + 152;
  v3 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InitialValueExpressionIterator,Windows::UI::Composition::InitialValueExpressionIterator,Windows::UI::Composition::InitialValueExpressionCollection *,std::map<Microsoft::WRL::Wrappers::HString,Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionAnimation>> *>(
         &v7,
         &v9,
         &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = ((unsigned __int64)v7 + 40) & -(__int64)(v7 != 0LL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinitialvalueexpressioncollection.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v7);
    return v4;
  }
}
