/*
 * XREFs of ?Destroy@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@UEAAXXZ @ 0x18018D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJXZ @ 0x18018D0DC (-Clear@SceneMeshMaterialAttributeMap@Scenes@Composition@UI@Windows@@QEAAJXZ.c)
 */

void __fastcall Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::Destroy(
        Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap *this)
{
  *((_QWORD *)this + 22) = 0LL;
  Windows::UI::Composition::Scenes::SceneMeshMaterialAttributeMap::Clear((RTL_SRWLOCK **)this);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
