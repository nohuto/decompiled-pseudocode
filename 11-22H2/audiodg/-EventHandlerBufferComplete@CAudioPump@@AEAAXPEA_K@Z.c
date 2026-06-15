/*
 * XREFs of ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140006CA0
 * Callers:
 *     ?EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z @ 0x140073B40 (-EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z.c)
 * Callees:
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140008D70 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     ?CancelTimer@CAudioPump@@AEAAXPEAX@Z @ 0x140008DC8 (-CancelTimer@CAudioPump@@AEAAXPEAX@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14000EE2C (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14004DEF4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void __fastcall CAudioPump::EventHandlerBufferComplete(CAudioPump *this, unsigned __int64 *a2)
{
  unsigned int (__fastcall *v3)(CAudioPump *); // rax
  CAudioPump *v4; // rcx
  void *v5; // rdi
  __int64 v6; // rsi
  double LowPart; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm1_8
  unsigned __int64 v10; // rdx
  const char *v11; // r9
  _DWORD *v12; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-48h] BYREF
  LARGE_INTEGER DueTime; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((_QWORD *)this + 36) )
  {
    if ( *((_BYTE *)this + 4728) )
    {
      ++*((_QWORD *)this + 590);
      *((_BYTE *)this + 4728) = 0;
    }
    *((_QWORD *)this + 44) = *((_QWORD *)this + 580);
    v3 = (unsigned int (__fastcall *)(CAudioPump *))*((_QWORD *)this + 26);
    v4 = (CAudioPump *)((char *)this + 384);
    if ( CAudioPump::OutputPumpWorkRoutine != v3 || !*(_QWORD *)v4 )
      *((_BYTE *)this + 248) = 0;
    if ( CAudioPump::OutputPumpWorkRoutine == v3 && *(_QWORD *)v4 )
      *((_BYTE *)this + 4657) = 1;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 78, 0, 0) )
    {
      if ( CAudioPump::OutputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26)
        && *(_QWORD *)v4 )
      {
        *((_BYTE *)this + 248) = 0;
        *((_BYTE *)this + 4657) = 1;
      }
      v5 = (void *)*((_QWORD *)this + 34);
      v6 = (unsigned int)(int)((double)(int)*((_QWORD *)this + 12) * 1.5);
      if ( v5 )
      {
        QueryPerformanceCounter(&PerformanceCount);
        if ( PerformanceCount.QuadPart < 0 )
          LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
                  + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
        else
          LowPart = (double)(int)PerformanceCount.LowPart;
        v8 = LowPart * -10000000.0;
        if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
          v9 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
             + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
        else
          v9 = (double)(int)g_u64QPCFrequency;
        *((_QWORD *)this + 35) = v6 - (unsigned int)(int)(v8 / v9);
        DueTime.QuadPart = -v6;
        v10 = (__int64)((unsigned __int128)(v6 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        if ( !SetWaitableTimer(v5, &DueTime, v10 + (v10 >> 63), 0LL, 0LL, 0) )
          wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x18D,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\AudioPump.h",
            v11);
      }
    }
    else
    {
      CAudioPump::CancelTimer(v4, *((void **)this + 34));
      CAudioPump::CancelDeadline(this);
      *((_BYTE *)this + 4657) = 0;
      if ( *((_BYTE *)this + 4656) )
      {
        if ( CAudioPump::OutputPumpWorkRoutine == *((unsigned int (__fastcall **)(CAudioPump *))this + 26) )
        {
          v12 = (_DWORD *)*((_QWORD *)this + 593);
          *((_BYTE *)this + 4658) = 1;
          if ( *v12 > 5u )
            tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v12, (unsigned int)&unk_1400B3BE2, 0, 0, 2, (__int64)v15);
        }
      }
    }
  }
}
