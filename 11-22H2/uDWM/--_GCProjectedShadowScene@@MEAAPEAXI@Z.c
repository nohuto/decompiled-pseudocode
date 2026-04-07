/*
 * XREFs of ??_GCProjectedShadowScene@@MEAAPEAXI@Z @ 0x1800CE3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800585BC (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CProjectedShadowScene@@MEAA@XZ @ 0x1800CE2C0 (--1CProjectedShadowScene@@MEAA@XZ.c)
 */

CProjectedShadowScene *__fastcall CProjectedShadowScene::`scalar deleting destructor'(
        CProjectedShadowScene *this,
        char a2)
{
  CProjectedShadowScene::~CProjectedShadowScene(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      (*(void (__fastcall **)(WPF::HeapBase *, CProjectedShadowScene *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        this);
  }
  return this;
}
