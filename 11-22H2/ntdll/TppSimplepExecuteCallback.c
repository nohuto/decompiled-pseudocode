/*
 * XREFs of TppSimplepExecuteCallback @ 0x18004EAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TppStartThreadData @ 0x18004EBC0 (TppStartThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x18004EC88 (TppWorkCallbackPrologRelease.c)
 *     TppCompleteThreadData @ 0x18004F090 (TppCompleteThreadData.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppETWCallbackDequeue @ 0x180125F28 (TppETWCallbackDequeue.c)
 *     RtlpTpETWCallbackStart @ 0x180126060 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801260FC (RtlpTpETWCallbackStop.c)
 */

__int64 __fastcall TppSimplepExecuteCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  int v2; // esi
  _QWORD *v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  v3 = (_QWORD *)(a2 - 200);
  v5 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWCallbackDequeue(v3[18], v2, v3[10], v3[11], v3[13]);
  result = TppWorkCallbackPrologRelease(Instance);
  if ( (_DWORD)result )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      RtlpTpETWCallbackStart(v3[18], v2, v3[10], v3[11], v3[13]);
    TppStartThreadData(&v9, v3[10], v3[11], v3[13]);
    ((void (__fastcall *)(PTP_CALLBACK_INSTANCE, _QWORD))v3[10])(Instance, v3[11]);
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStop(v3[18], v2, v3[10], v3[11], v3[13]);
    return TppCompleteThreadData(v9);
  }
  return result;
}
