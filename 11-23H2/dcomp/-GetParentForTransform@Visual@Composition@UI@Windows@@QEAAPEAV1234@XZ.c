/*
 * XREFs of ?GetParentForTransform@Visual@Composition@UI@Windows@@QEAAPEAV1234@XZ @ 0x18010B4D4
 * Callers:
 *     ?get_ParentForTransform@Api@Visual@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z @ 0x18010CD80 (-get_ParentForTransform@Api@Visual@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z.c)
 * Callees:
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C038 (-InternalRelease@-$ComPtr@V-$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IE.c)
 */

struct Windows::UI::Composition::Visual *__fastcall Windows::UI::Composition::Visual::GetParentForTransform(
        Windows::UI::Composition::Visual *this)
{
  CSparseStorage *v1; // rdi
  __int64 v2; // rbx
  CWeakReferenceBase *Reference; // rax
  CWeakReferenceBase *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (Windows::UI::Composition::Visual *)((char *)this + 112);
  v2 = 0LL;
  Reference = (CWeakReferenceBase *)CSparseStorage::GetReference(
                                      (Windows::UI::Composition::Visual *)((char *)this + 112),
                                      11);
  v5 = Reference;
  if ( Reference )
  {
    ++*((_DWORD *)Reference + 6);
    v2 = *((_QWORD *)Reference + 1);
    if ( !v2 )
    {
      Microsoft::WRL::ComPtr<CWeakReference<Windows::UI::Composition::Visual>>::InternalRelease(&v5);
      CSparseStorage::SetReference(
        v1,
        11,
        0LL,
        (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_CWeakReferenceBase);
    }
  }
  Microsoft::WRL::ComPtr<CWeakReference<Windows::UI::Composition::Visual>>::InternalRelease(&v5);
  return (struct Windows::UI::Composition::Visual *)v2;
}
