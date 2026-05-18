/*
 * XREFs of ?SetCorrelationVectorGUID@TelemetryTraceLoggerWin@Utils@Spectre@@UEAAXU_GUID@@@Z @ 0x1800240E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CreateCvFromGuid@$0BA@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z @ 0x180021818 (--$CreateCvFromGuid@$0BA@@TraceLoggingCorrelationVector@@AEAAXU_GUID@@@Z.c)
 *     ??2TraceLoggingCorrelationVector@@SAPEAX_K@Z @ 0x180021DDC (--2TraceLoggingCorrelationVector@@SAPEAX_K@Z.c)
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800241A0 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 *     ?reset@?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAAXPEAVTraceLoggingCorrelationVector@@@Z @ 0x180024678 (-reset@-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVe.c)
 */

void __fastcall Spectre::Utils::TelemetryTraceLoggerWin::SetCorrelationVectorGUID(
        Spectre::Utils::TelemetryTraceLoggerWin *this,
        struct _GUID *a2)
{
  __int64 v3; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int128 v7; // xmm0
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( v3 )
  {
    v5 = TraceLoggingCorrelationVector::operator new();
    *(_QWORD *)&v8 = v5;
    v6 = v5;
    if ( v5 )
    {
      v7 = (__int128)*a2;
      v5[19] = 127LL;
      v8 = v7;
      TraceLoggingCorrelationVector::CreateCvFromGuid<16>((__int64)v5, &v8);
    }
    else
    {
      v6 = 0LL;
    }
    std::unique_ptr<TraceLoggingCorrelationVector>::reset((char *)this + 112, v6);
    TraceLoggingCorrelationVector::ToStringImpl(
      *((TraceLoggingCorrelationVector **)this + 14),
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this + 14) + 144LL), 0LL),
      (char *)this + 120);
  }
}
