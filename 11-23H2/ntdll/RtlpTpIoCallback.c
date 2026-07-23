/*
 * XREFs of RtlpTpIoCallback @ 0x1800B1DB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     TppStartThreadData @ 0x18004EA60 (TppStartThreadData.c)
 *     RtlSetThreadSubProcessTag @ 0x18004EE60 (RtlSetThreadSubProcessTag.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x1801274E0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18012757C (RtlpTpETWCallbackStop.c)
 */

void __fastcall RtlpTpIoCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  void *v4; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(void **)(a2 + 152);
  if ( v4 )
    RtlSetThreadSubProcessTag(v4);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 160);
  v8 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    RtlpTpETWCallbackStart(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *(_QWORD *)(a2 + 152));
  TppStartThreadData(&v10, *(_QWORD *)(a2 - 8), a3, (__int64)NtCurrentTeb()->SubProcessTag);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(a2 - 8))(*a4, *((_QWORD *)a4 + 1), a3);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStop(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *(_QWORD *)(a2 + 152));
  if ( *(_QWORD *)(a2 + 152) )
  {
    RtlSetThreadSubProcessTag(0LL);
    *(_QWORD *)(a2 + 152) = 0LL;
  }
  TppCompleteThreadData(v10);
}
