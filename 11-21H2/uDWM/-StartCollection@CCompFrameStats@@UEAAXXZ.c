/*
 * XREFs of ?StartCollection@CCompFrameStats@@UEAAXXZ @ 0x180006FE0
 * Callers:
 *     ?StartCollection@CAnimationFrameStats@@UEAAXXZ @ 0x180006FD0 (-StartCollection@CAnimationFrameStats@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompFrameStats::StartCollection(CCompFrameStats *this)
{
  __int64 v2; // rax
  void *v3; // rcx
  __int64 v4; // rsi
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp+8h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( *((_BYTE *)this + 12) )
  {
    if ( !*((_BYTE *)this + 13) && !*((_QWORD *)this + 13) )
    {
      v2 = (*(__int64 (__fastcall **)(CCompFrameStats *, __int64))(*(_QWORD *)this + 64LL))(this, 1LL);
      v3 = (void *)*((_QWORD *)this + 5);
      v4 = v2;
      DueTime.QuadPart = -5000000LL;
      if ( SetWaitableTimer(v3, &DueTime, 500, 0LL, 0LL, 0) )
      {
        *((_QWORD *)this + 12) = v4;
        *((_QWORD *)this + 11) = v4 + 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}
