/*
 * XREFs of ??1CompositionObject@Composition@UI@Windows@@UEAA@XZ @ 0x1801091F0
 * Callers:
 *     ??1CompositionTexture@Composition@UI@Windows@@UEAA@XZ @ 0x1800A2060 (--1CompositionTexture@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180060868 (--1CSparseStorage@@QEAA@XZ.c)
 */

void __fastcall Windows::UI::Composition::CompositionObject::~CompositionObject(void **this)
{
  __int64 v2; // rdx

  CSparseStorage::~CSparseStorage(this + 14);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass((Microsoft::WRL2::ContextRuntimeClass *)this, v2);
}
