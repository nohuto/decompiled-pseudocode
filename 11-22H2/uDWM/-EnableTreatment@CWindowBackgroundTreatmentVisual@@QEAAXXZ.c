/*
 * XREFs of ?EnableTreatment@CWindowBackgroundTreatmentVisual@@QEAAXXZ @ 0x180012F18
 * Callers:
 *     ?CloneVisualTree@CWindowBackgroundTreatmentVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180012E90 (-CloneVisualTree@CWindowBackgroundTreatmentVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180023B04 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180045CD4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatmentVisual::EnableTreatment(CWindowBackgroundTreatmentVisual *this)
{
  __int64 v1; // rax

  if ( !*((_BYTE *)this + 280) )
  {
    v1 = *(_QWORD *)this;
    *((_BYTE *)this + 280) = 1;
    (*(void (__fastcall **)(CWindowBackgroundTreatmentVisual *, __int64))(v1 + 24))(this, 4096LL);
  }
}
