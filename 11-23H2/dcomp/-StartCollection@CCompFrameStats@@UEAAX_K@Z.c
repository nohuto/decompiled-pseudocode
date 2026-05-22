/*
 * XREFs of ?StartCollection@CCompFrameStats@@UEAAX_K@Z @ 0x180009CD0
 * Callers:
 *     ?StartCollection@CTouchFrameStats@@UEAAX_K@Z @ 0x180009CC0 (-StartCollection@CTouchFrameStats@@UEAAX_K@Z.c)
 *     ?StartTimedCollection@CAnimationFrameStats@@UEAAXII@Z @ 0x18000C5C0 (-StartTimedCollection@CAnimationFrameStats@@UEAAXII@Z.c)
 *     ?StartInteraction@CInteractionFrameStats@@UEAAX_KAEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z @ 0x1801A6190 (-StartInteraction@CInteractionFrameStats@@UEAAX_KAEBUTOUCH_TELEMETRY_BEGIN_INFO@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompFrameStats::StartCollection(CCompFrameStats *this, __int64 a2)
{
  __int64 v4; // r8
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp+8h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  if ( *((_BYTE *)this + 12) && !*((_BYTE *)this + 13) && !*((_QWORD *)this + 14) )
  {
    if ( !a2 )
      a2 = (*(__int64 (__fastcall **)(CCompFrameStats *, __int64))(*(_QWORD *)this + 64LL))(this, 1LL) + 1;
    v4 = *((int *)this + 6);
    DueTime.QuadPart = -10000 * v4;
    if ( SetWaitableTimer(*((HANDLE *)this + 8), &DueTime, v4, 0LL, 0LL, 0) )
      *((_QWORD *)this + 14) = a2;
    QueryPerformanceCounter((LARGE_INTEGER *)this + 4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
}
