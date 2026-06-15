/*
 * XREFs of ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x18011EDAC
 * Callers:
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x180111AFC (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 * Callees:
 *     ?Reevaluate@CPowerReference@@QEAAXPEAVCVADServer@@@Z @ 0x18011A610 (-Reevaluate@CPowerReference@@QEAAXPEAVCVADServer@@@Z.c)
 */

void __fastcall CVADServer::ReevaluateTimerActivationRequest(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  CPowerReference *v3; // rcx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 448);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 448));
  v3 = (CPowerReference *)*((_QWORD *)this + 61);
  if ( v3 )
    CPowerReference::Reevaluate(v3, this);
  if ( v1 )
    LeaveCriticalSection(v1);
}
