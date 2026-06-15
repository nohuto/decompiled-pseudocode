/*
 * XREFs of ?StartTimer@RoutingTimer@@UEAAJXZ @ 0x18013DC10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RoutingTimer::StartTimer(PVOID Parameter)
{
  unsigned int v2; // edi
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-18h] BYREF
  char v6; // [rsp+48h] [rbp-10h]

  v2 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    *((struct _RTL_CRITICAL_SECTION **)Parameter + 3));
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Parameter + 8LL))(Parameter);
  if ( !CreateTimerQueueTimer(
          (PHANDLE)Parameter + 4,
          0LL,
          (WAITORTIMERCALLBACK)RoutingTimer::InternalTimerCallback,
          Parameter,
          *((_DWORD *)Parameter + 4),
          0,
          0) )
  {
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError )
    {
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
    }
    else
    {
      v2 = -2147467259;
    }
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
