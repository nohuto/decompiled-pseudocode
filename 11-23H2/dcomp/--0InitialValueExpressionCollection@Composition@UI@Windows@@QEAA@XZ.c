/*
 * XREFs of ??0InitialValueExpressionCollection@Composition@UI@Windows@@QEAA@XZ @ 0x18014EDA8
 * Callers:
 *     ??$MakeAndInitialize2@VInitialValueExpressionCollection@Composition@UI@Windows@@V1234@PEAVCompositionAnimation@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInitialValueExpressionCollection@Composition@UI@Windows@@$$QEAPEAVCompositionAnimation@456@@Z @ 0x18014DFC8 (--$MakeAndInitialize2@VInitialValueExpressionCollection@Composition@UI@Windows@@V1234@PEAVCompos.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0CompositionObject@Composition@UI@Windows@@QEAA@XZ @ 0x180053828 (--0CompositionObject@Composition@UI@Windows@@QEAA@XZ.c)
 */

Windows::UI::Composition::InitialValueExpressionCollection *__fastcall Windows::UI::Composition::InitialValueExpressionCollection::InitialValueExpressionCollection(
        Windows::UI::Composition::InitialValueExpressionCollection *this)
{
  __int64 v2; // rax

  Windows::UI::Composition::CompositionObject::CompositionObject(this);
  *(_QWORD *)this = &Windows::UI::Composition::InitialValueExpressionCollection::`vftable';
  *((_QWORD *)this + 16) = &Windows::UI::Composition::InitialValueExpressionCollection::Api::`vftable'{for `Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>'};
  *((_QWORD *)this + 17) = &Windows::UI::Composition::InitialValueExpressionCollection::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>>'};
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *((_QWORD *)this + 19) = v2;
  return this;
}
