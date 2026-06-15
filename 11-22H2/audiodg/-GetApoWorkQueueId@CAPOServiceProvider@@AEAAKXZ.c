/*
 * XREFs of ?GetApoWorkQueueId@CAPOServiceProvider@@AEAAKXZ @ 0x14006F2C8
 * Callers:
 *     ?GetRealTimeWorkQueue@CAPOServiceProvider@@UEAAJPEAK@Z @ 0x14006F390 (-GetRealTimeWorkQueue@CAPOServiceProvider@@UEAAJPEAK@Z.c)
 * Callees:
 *     ?GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z @ 0x140023514 (-GetRTThreadManagerInstance@CRTThreadManager@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ @ 0x140074AFC (-GetApoWorkQueueId@CRTThreadManager@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAPOServiceProvider::GetApoWorkQueueId(CAPOServiceProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v3 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( (int)CRTThreadManager::GetRTThreadManagerInstance((struct CRTThreadManager **)this + 11) < 0 )
    RtwqAllocateWorkQueue(RTWQ_STANDARD_WORKQUEUE, (DWORD *)this + 24);
  else
    *((_DWORD *)this + 24) = CRTThreadManager::GetApoWorkQueueId(*((CRTThreadManager **)this + 11));
  v4 = *((_DWORD *)this + 24);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
