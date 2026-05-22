/*
 * XREFs of ?SetParentForTransform@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x180063354
 * Callers:
 *     ?put_ParentForTransform@Api@Visual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x180062840 (-put_ParentForTransform@Api@Visual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 *     ?SetTransformParent@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z @ 0x18010C390 (-SetTransformParent@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?GetWeakReferenceBase@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEAPEAVCWeakReferenceBase@@@Z @ 0x18007E660 (-GetWeakReferenceBase@CompositorCommon@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PE.c)
 *     ?InternalRelease@?$ComPtr@V?$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C038 (-InternalRelease@-$ComPtr@V-$CWeakReference@VVisual@Composition@UI@Windows@@@@@WRL@Microsoft@@IE.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetParentForTransform(
        Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::Visual *a2)
{
  int v2; // ebx
  CSparseStorage *v5; // rbp
  Windows::UI::Composition::CompositorCommon *v7; // rcx
  int WeakReferenceBase; // eax
  unsigned int v9; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CWeakReferenceBase *v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v7 = (Windows::UI::Composition::CompositorCommon *)*((_QWORD *)this + 3);
    v11 = 0LL;
    WeakReferenceBase = Windows::UI::Composition::CompositorCommon::GetWeakReferenceBase(v7, a2, &v11);
    v9 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x438,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
        (const char *)(unsigned int)WeakReferenceBase);
      Microsoft::WRL::ComPtr<CWeakReference<Windows::UI::Composition::Visual>>::InternalRelease(&v11);
      return v9;
    }
    v5 = (Windows::UI::Composition::Visual *)((char *)this + 112);
    CSparseStorage::SetReference(
      (Windows::UI::Composition::Visual *)((char *)this + 112),
      0xBu,
      v11,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_CWeakReferenceBase);
    Microsoft::WRL::ComPtr<CWeakReference<Windows::UI::Composition::Visual>>::InternalRelease(&v11);
  }
  else
  {
    v5 = (Windows::UI::Composition::Visual *)((char *)this + 112);
    CSparseStorage::SetReference(
      (Windows::UI::Composition::Visual *)((char *)this + 112),
      0xBu,
      0LL,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_CWeakReferenceBase);
  }
  CSparseStorage::SetReference(
    v5,
    0xCu,
    0LL,
    (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass);
  if ( a2 )
    v2 = *((_DWORD *)a2 + 32);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    38,
    v2);
  return 0LL;
}
