/*
 * XREFs of ?StatsCollectionThread@CCompFrameStats@@IEAAXXZ @ 0x180007C50
 * Callers:
 *     ?ThreadEntryPoint@CCompFrameStats@@KAKPEAX@Z @ 0x180007C40 (-ThreadEntryPoint@CCompFrameStats@@KAKPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn CCompFrameStats::StatsCollectionThread(HANDLE *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  HMODULE v3; // rbx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(this + 9);
  while ( !*((_BYTE *)this + 13) )
  {
    if ( !WaitForSingleObject(this[8], 0xFFFFFFFF) )
    {
      EnterCriticalSection(v1);
      (*((void (__fastcall **)(HANDLE *, _QWORD))*this + 26))(this, 0LL);
      LeaveCriticalSection(v1);
    }
    QueryPerformanceCounter(&PerformanceCount);
    if ( PerformanceCount.QuadPart > (__int64)this[4]
      && (unsigned int)(1000 * (PerformanceCount.QuadPart - (__int64)this[4]) / (unsigned __int64)this[2]) > *((_DWORD *)this + 10) )
    {
      EnterCriticalSection(v1);
      (*((void (__fastcall **)(HANDLE *))*this + 28))(this);
      LeaveCriticalSection(v1);
      *((_BYTE *)this + 13) = 1;
    }
  }
  EnterCriticalSection(v1);
  if ( *((_BYTE *)this + 12) )
    (*((void (__fastcall **)(HANDLE *, HANDLE))*this + 26))(this, this[15]);
  LeaveCriticalSection(v1);
  if ( *((_BYTE *)this + 12) )
    (*((void (__fastcall **)(HANDLE *))*this + 29))(this);
  v3 = (HMODULE)this[6];
  (*((void (__fastcall **)(HANDLE *))*this + 2))(this);
  FreeLibraryAndExitThread(v3, 0);
}
