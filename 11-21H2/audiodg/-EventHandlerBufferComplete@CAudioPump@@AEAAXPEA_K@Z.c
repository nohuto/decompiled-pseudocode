/*
 * XREFs of ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140005B70
 * Callers:
 *     ?EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z @ 0x14006B3E0 (-EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z.c)
 * Callees:
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x14002C424 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x14002D254 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004EC84 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140051A78 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

void __fastcall CAudioPump::EventHandlerBufferComplete(CAudioPump *this, unsigned __int64 *a2)
{
  unsigned int (__fastcall *v3)(CAudioPump *); // rax
  void *v4; // rdi
  __int64 v5; // rsi
  double LowPart; // xmm0_8
  double v7; // xmm0_8
  double v8; // xmm1_8
  unsigned __int64 v9; // rdx
  const char *v10; // r9
  _DWORD *v11; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER DueTime; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v14[32]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((_QWORD *)this + 36) )
  {
    if ( *((_BYTE *)this + 4720) )
    {
      ++*((_QWORD *)this + 589);
      *((_BYTE *)this + 4720) = 0;
    }
    *((_QWORD *)this + 44) = *((_QWORD *)this + 579);
    v3 = (unsigned int (__fastcall *)(CAudioPump *))*((_QWORD *)this + 26);
    if ( CAudioPump::OutputPumpWorkRoutine != v3 || !*((_QWORD *)this + 48) )
      *((_BYTE *)this + 248) = 0;
    if ( CAudioPump::OutputPumpWorkRoutine == v3 && *((_QWORD *)this + 48) )
      *((_BYTE *)this + 4649) = 1;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
    {
      if ( CAudioPump::OutputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26)
        && *((_QWORD *)this + 48) )
      {
        *((_BYTE *)this + 248) = 0;
        *((_BYTE *)this + 4649) = 1;
      }
      v4 = (void *)*((_QWORD *)this + 34);
      v5 = (unsigned int)(int)((double)(int)*((_QWORD *)this + 12) * 1.5);
      if ( v4 )
      {
        QueryPerformanceCounter(&PerformanceCount);
        if ( PerformanceCount.QuadPart < 0 )
          LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
                  + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
        else
          LowPart = (double)(int)PerformanceCount.LowPart;
        v7 = LowPart * -10000000.0;
        if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
          v8 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
             + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
        else
          v8 = (double)(int)g_u64QPCFrequency;
        *((_QWORD *)this + 35) = v5 - (unsigned int)(int)(v7 / v8);
        DueTime.QuadPart = -v5;
        v9 = (__int64)((unsigned __int128)(v5 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        if ( !SetWaitableTimer(v4, &DueTime, v9 + (v9 >> 63), 0LL, 0LL, 0) )
          wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x18D,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\AudioPump.h",
            v10);
      }
    }
    else
    {
      CAudioPump::CancelTimer(this, *((void **)this + 34));
      CAudioPump::CancelDeadline(this);
      *((_BYTE *)this + 4649) = 0;
      if ( *((_BYTE *)this + 4648) )
      {
        if ( CAudioPump::OutputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26) )
        {
          v11 = (_DWORD *)*((_QWORD *)this + 592);
          *((_BYTE *)this + 4650) = 1;
          if ( *v11 > 5u )
            tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v11, (unsigned int)&unk_1400A6F05, 0, 0, 2, (__int64)v14);
        }
      }
    }
  }
}
