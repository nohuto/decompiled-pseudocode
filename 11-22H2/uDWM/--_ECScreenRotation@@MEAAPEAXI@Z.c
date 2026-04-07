/*
 * XREFs of ??_ECScreenRotation@@MEAAPEAXI@Z @ 0x1800D6D60
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CScreenRotation@@MEAA@XZ @ 0x1800D6C90 (--1CScreenRotation@@MEAA@XZ.c)
 */

CScreenRotation *__fastcall CScreenRotation::`vector deleting destructor'(CScreenRotation *this, char a2)
{
  CScreenRotation::~CScreenRotation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CScreenRotation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
