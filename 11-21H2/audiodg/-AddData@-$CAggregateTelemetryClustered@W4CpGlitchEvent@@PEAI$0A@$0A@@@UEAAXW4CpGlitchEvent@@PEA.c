/*
 * XREFs of ?AddData@?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x14002CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddData@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4CpGlitchEvent@@PEAI@Z @ 0x14002CBE0 (-AddData@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
ULONGLONG __fastcall CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::AddData(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  ULONGLONG result; // rax
  __int64 v7; // rdx
  ULONGLONG v8; // rdi

  result = GetTickCount64();
  v8 = result;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( result - *(_QWORD *)(a1 + 72) > *(_QWORD *)(a1 + 56) )
    {
      *(_BYTE *)(a1 + 32) = 0;
      if ( result - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
      {
        LOBYTE(v7) = 1;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v7);
        *(_QWORD *)(a1 + 48) = v8;
      }
    }
  }
  if ( a3 )
  {
    if ( !*(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 64) = v8;
      *(_QWORD *)(a1 + 88) = v8;
    }
    *(_QWORD *)(a1 + 72) = v8;
    CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::AddData(
      a1,
      a2,
      a3);
    result = v8 - *(_QWORD *)(a1 + 88);
    if ( result > *(_QWORD *)(a1 + 80) )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, 0LL);
      *(_QWORD *)(a1 + 88) = v8;
    }
  }
  return result;
}
