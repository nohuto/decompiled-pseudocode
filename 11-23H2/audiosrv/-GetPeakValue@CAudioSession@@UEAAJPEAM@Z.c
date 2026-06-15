/*
 * XREFs of ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800E0440
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 *     WPP_SF_g @ 0x1800E3E8C (WPP_SF_g.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x1800EC2F4 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 */

__int64 __fastcall CAudioSession::GetPeakValue(CAudioSession *this, float *a2)
{
  float v3; // xmm6_4
  unsigned int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  CAudioStream **v7; // rbp
  CAudioStream **i; // rdi
  float v10; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0.0;
  v5 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, 0LL);
  }
  if ( a2 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    v7 = (CAudioStream **)*((_QWORD *)this + 15);
    for ( i = (CAudioStream **)*((_QWORD *)this + 14); i != v7; ++i )
    {
      if ( (int)CAudioStream::GetPeakValue(*i, &v10) >= 0 )
        v3 = fmaxf(v10, v3);
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids);
    }
    *a2 = v3;
  }
  else
  {
    v5 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetPeakValue", 1278, -2147467261);
  }
  return v5;
}
