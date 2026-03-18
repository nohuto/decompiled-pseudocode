/*
 * XREFs of ??1CDesktopTree@@UEAA@XZ @ 0x1801F5E24
 * Callers:
 *     ??_GCDesktopTree@@UEAAPEAXI@Z @ 0x18019ECE0 (--_GCDesktopTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?clear@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18008E754 (-clear@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_polic.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?clear@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B9C18 (-clear@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion.c)
 *     ?SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z @ 0x1800F7A0C (-SetRootVisual@CDesktopTree@@AEAAJPEAVCVisual@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CComposeTop@@QEAA@XZ @ 0x18019DB30 (--1CComposeTop@@QEAA@XZ.c)
 */

void __fastcall CDesktopTree::~CDesktopTree(CVisual **this)
{
  __int64 *v2; // rsi
  _DWORD *v3; // r10
  __int64 v4; // rcx
  unsigned int Slot; // eax
  __int64 v6; // r10
  __int64 v7; // rcx
  void **v8; // rcx
  void *v9; // r8
  bool v10; // zf
  CDesktopTree *v11; // rcx
  void **v12; // rcx
  void *v13; // r8
  CVisual *v14; // rbx

  *this = (CVisual *)&CDesktopTree::`vftable';
  CDesktopTree::SetRootVisual(this, 0LL);
  v2 = (__int64 *)(this + 590);
  v3 = (_DWORD *)*((_QWORD *)this[590] + 29);
  if ( (*v3 & 0x4000000) != 0 )
  {
    v4 = *((_QWORD *)this[590] + 29);
    *v3 &= ~0x4000000u;
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v4, 6);
    if ( Slot < *(_DWORD *)(v6 + 4) )
      *(_BYTE *)(Slot + v6 + 8) = 0;
  }
  v7 = *v2;
  *v2 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  this[8] = 0LL;
  detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::clear(this + 685);
  v9 = *v8;
  v10 = *v8 == v8 + 3;
  *v8 = 0LL;
  if ( v10 )
    v9 = 0LL;
  DefaultHeap::Free(v9);
  detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::clear(this + 602);
  v11 = this[602];
  this[602] = 0LL;
  if ( v11 == (CDesktopTree *)(this + 605) )
    v11 = 0LL;
  DefaultHeap::Free(v11);
  detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::clear(this + 594);
  v13 = *v12;
  v10 = *v12 == v12 + 3;
  *v12 = 0LL;
  if ( v10 )
    v13 = 0LL;
  DefaultHeap::Free(v13);
  v14 = this[593];
  if ( v14 )
  {
    CComposeTop::~CComposeTop(this[593]);
    operator delete(v14);
  }
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 590);
  CVisualTree::~CVisualTree((CVisualTree *)this);
}
