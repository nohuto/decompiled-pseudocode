/*
 * XREFs of ??1CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x18012D09C
 * Callers:
 *     ??_GCompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18012D0E0 (--_GCompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 */

void __fastcall Windows::UI::Composition::Interactions::CompositionConditionalValue::~CompositionConditionalValue(
        Windows::UI::Composition::Interactions::CompositionConditionalValue *this)
{
  __int64 v2; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 19);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 18);
  CSparseStorage::~CSparseStorage((void **)this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v2);
}
