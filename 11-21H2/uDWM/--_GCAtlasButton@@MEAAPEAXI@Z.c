/*
 * XREFs of ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x180020DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasedImage@@MEAA@XZ @ 0x180025EAC (--1CAtlasedImage@@MEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAtlasButton *__fastcall CAtlasButton::`scalar deleting destructor'(CAtlasButton *this, char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CAtlasButton::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 16) = 0LL;
  }
  CAtlasedImage::~CAtlasedImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x98uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CAtlasButton *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
