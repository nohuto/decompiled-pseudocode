/*
 * XREFs of ??_GCDWMDXGIEnumeration@@MEAAPEAXI@Z @ 0x18003B970
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDWMDXGIEnumeration@@MEAA@XZ @ 0x18003B9CC (--1CDWMDXGIEnumeration@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180048DDC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CDWMDXGIEnumeration *__fastcall CDWMDXGIEnumeration::`scalar deleting destructor'(CDWMDXGIEnumeration *this, char a2)
{
  CDWMDXGIEnumeration::~CDWMDXGIEnumeration(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x58uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CDWMDXGIEnumeration *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
