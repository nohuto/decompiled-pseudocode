/*
 * XREFs of TppTimerpExecuteCallback @ 0x180020330
 * Callers:
 *     <none>
 * Callees:
 *     TppCompleteThreadData @ 0x1800212E8 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x180021410 (TppStartThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x180022278 (TppWorkCallbackPrologRelease.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     TppETWCallbackDequeue @ 0x1801244E8 (TppETWCallbackDequeue.c)
 *     RtlpTpETWCallbackStart @ 0x180124620 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801246BC (RtlpTpETWCallbackStop.c)
 */

__int64 __fastcall TppTimerpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  _QWORD *v5; // rbx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  v5 = (_QWORD *)(a2 - 200);
  v7 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    TppETWCallbackDequeue(v5[18], v4, v5[10], v5[11], v5[13]);
  result = TppWorkCallbackPrologRelease(a1, v5, 0LL);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v10, v12, v13) )
      v14 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v14 = 2147353478LL;
    if ( *(_BYTE *)v14 )
      RtlpTpETWCallbackStart(v5[18], v4, v5[10], v5[11], v5[13]);
    TppStartThreadData(&v19, v5[10], v5[11], v5[13]);
    *(_QWORD *)(a1 + 88) = v5[10];
    *(_QWORD *)(a1 + 96) = v5[11];
    ((void (__fastcall *)(__int64, _QWORD, _QWORD *))v5[10])(a1, v5[11], v5);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15, v17, v18) )
      v7 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v7 )
      RtlpTpETWCallbackStop(v5[18], v4, v5[10], v5[11], v5[13]);
    return TppCompleteThreadData(v19);
  }
  return result;
}
