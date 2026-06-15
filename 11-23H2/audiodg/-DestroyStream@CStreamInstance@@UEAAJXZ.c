/*
 * XREFs of ?DestroyStream@CStreamInstance@@UEAAJXZ @ 0x1400259B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x1400699FC (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     ?Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z @ 0x140069DDC (-Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CStreamInstance::DestroyStream(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // edx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  unsigned __int64 v8; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 5;
  EnterCriticalSection(this + 5);
  if ( (*(__int64 (__fastcall **)(ULONG_PTR *))(this[-1].SpinCount + 120))(&this[-1].SpinCount) )
  {
    lpCriticalSection = 0LL;
    if ( GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&lpCriticalSection) >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(ULONG_PTR *))(this[-1].SpinCount + 120))(&this[-1].SpinCount);
      CAudioHistoryBufferManager::Remove(lpCriticalSection, v8);
    }
  }
  PublishDeviceGraphWnfState(v4, v3, v5, v6);
  if ( v1 )
    LeaveCriticalSection(v1);
  return 0LL;
}
