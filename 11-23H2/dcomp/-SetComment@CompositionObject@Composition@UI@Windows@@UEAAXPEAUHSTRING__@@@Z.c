/*
 * XREFs of ?SetComment@CompositionObject@Composition@UI@Windows@@UEAAXPEAUHSTRING__@@@Z @ 0x180088330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::CompositionObject::SetComment(
        Windows::UI::Composition::CompositionObject *this,
        HSTRING a2)
{
  CSparseStorage::SetReference(
    (Windows::UI::Composition::CompositionObject *)((char *)this + 112),
    1,
    a2,
    (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_HSTRING);
}
