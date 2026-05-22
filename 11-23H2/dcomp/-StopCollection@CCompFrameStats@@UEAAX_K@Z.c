/*
 * XREFs of ?StopCollection@CCompFrameStats@@UEAAX_K@Z @ 0x1800064E0
 * Callers:
 *     ?StopCollection@CAnimationFrameStats@@UEAAX_K@Z @ 0x1800064D0 (-StopCollection@CAnimationFrameStats@@UEAAX_K@Z.c)
 *     ?EndInteraction@CInteractionFrameStats@@UEAAX_K@Z @ 0x1801A56C0 (-EndInteraction@CInteractionFrameStats@@UEAAX_K@Z.c)
 * Callees:
 *     ?Shutdown@CCompFrameStats@@IEAAXXZ @ 0x180006644 (-Shutdown@CCompFrameStats@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompFrameStats::StopCollection(CCompFrameStats *this, unsigned __int64 a2)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( !a2 )
    a2 = (*(__int64 (__fastcall **)(CCompFrameStats *, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL);
  *((_QWORD *)this + 15) = a2;
  if ( a2 < *((_QWORD *)this + 14) )
    (*(void (__fastcall **)(CCompFrameStats *))(*(_QWORD *)this + 216LL))(this);
  CCompFrameStats::Shutdown(this);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
}
