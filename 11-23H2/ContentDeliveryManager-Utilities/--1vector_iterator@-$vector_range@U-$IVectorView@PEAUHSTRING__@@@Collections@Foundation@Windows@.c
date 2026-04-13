/*
 * XREFs of ??1vector_iterator@?$vector_range@U?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800C74AC
 * Callers:
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::dtor$7 @ 0x1800DD249 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800DD249.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::dtor$8 @ 0x1800DD25B (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800DD25B.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::vector_range<Windows::Foundation::Collections::IVectorView<HSTRING__ *>,wil::err_exception_policy>::vector_iterator::~vector_iterator(
        __int64 a1)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
