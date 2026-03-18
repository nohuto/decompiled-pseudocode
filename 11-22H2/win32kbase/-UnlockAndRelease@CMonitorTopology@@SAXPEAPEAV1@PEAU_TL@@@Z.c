/*
 * XREFs of ?UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z @ 0x1C00123C0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMonitorTopology::UnlockAndRelease(struct CMonitorTopology **a1, struct _TL *a2)
{
  volatile signed __int32 *v3; // rdx

  if ( *a1 )
  {
    if ( qword_1C0295460 )
      qword_1C0295460(a2);
    v3 = (volatile signed __int32 *)*a1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)*a1, 0xFFFFFFFF) == 1 )
    {
      if ( v3 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)v3);
    }
    *a1 = 0LL;
  }
}
