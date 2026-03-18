/*
 * XREFs of ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C00056EC
 * Callers:
 *     ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C00056C0 (-SignalFlipImmediate@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C0004FF8 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00057A0 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 */

void __fastcall CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(CFlipToken *this, char a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  CompositionSurfaceObject *v5; // rcx

  if ( !*((_BYTE *)this + 48) )
  {
    v3 = *((_QWORD *)this + 12);
    if ( v3 > 1 )
      CompositionSurfaceObject::SignalGpuFence(
        *((CompositionSurfaceObject **)this + 4),
        *((_QWORD *)this + 5),
        v3 - 1,
        a2);
  }
  *((_QWORD *)this + 12) = 0LL;
  if ( !*((_BYTE *)this + 89) )
  {
    v4 = *((_QWORD *)this + 5);
    v5 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
    *((_BYTE *)this + 89) = 1;
    CompositionSurfaceObject::SignalPresentLimitSemaphore(v5, v4);
  }
}
