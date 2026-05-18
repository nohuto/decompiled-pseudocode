/*
 * XREFs of ??1LoaderResult@ColorTransform@Engine@Spectre@@QEAA@XZ @ 0x18008F5CC
 * Callers:
 *     _Spectre::Engine::ColorTransform::Import_::_1_::dtor$2 @ 0x1800EA8E4 (_Spectre--Engine--ColorTransform--Import_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ColorTransform::LoaderResult::~LoaderResult(
        Spectre::Engine::ColorTransform::LoaderResult *this)
{
  std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Tidy((__int64)this + 8);
}
