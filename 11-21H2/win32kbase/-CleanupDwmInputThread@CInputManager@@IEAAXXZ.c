/*
 * XREFs of ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C023BDC0
 * Callers:
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C023BE68 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C023C4C0 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputManager::CleanupDwmInputThread(CInputManager *this)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rdx
  char *v5; // rdx

  if ( qword_1C029CA38 )
    qword_1C029CA38((char *)this + 16);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    ZwClose(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  v4 = (char *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  if ( !*((_DWORD *)this + 16) )
    *((_QWORD *)this + 1) = 0LL;
}
