/*
 * XREFs of ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x1800381A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180038120 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CTopLevelWindow3D *__fastcall CTopLevelWindow3D::`scalar deleting destructor'(CTopLevelWindow3D *this, char a2)
{
  CTopLevelWindow3D::~CTopLevelWindow3D(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x298uLL);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CTopLevelWindow3D *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
