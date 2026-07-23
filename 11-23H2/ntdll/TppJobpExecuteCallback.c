/*
 * XREFs of TppJobpExecuteCallback @ 0x180050860
 * Callers:
 *     <none>
 * Callees:
 *     LdrAddRefDll @ 0x18002D240 (LdrAddRefDll.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     TppStartThreadData @ 0x18004EA60 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x18004EF30 (TppCompleteThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004F51C (TppCleanupGroupMemberCallbackProlog.c)
 *     TppBarrierAdjust @ 0x180068010 (TppBarrierAdjust.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x1801274E0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18012757C (RtlpTpETWCallbackStop.c)
 */

void __fastcall TppJobpExecuteCallback(_QWORD *Instance, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v9; // r14
  signed __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v5 = a2 + 72;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  v9 = a2 + 128;
  TppBarrierAdjust(a2 + 128, 1LL, 0LL);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 280), 2uLL) + 2;
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 0xFFFFFFFFFFFFFFFEuLL) == 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 208);
    if ( !v11 )
    {
LABEL_3:
      TppCleanupGroupMemberCallbackProlog(Instance, v5);
      v12 = 2147353478LL;
      if ( RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v13 = 2147353478LL;
      if ( *(_BYTE *)v13 )
        RtlpTpETWCallbackStart(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppStartThreadData(&v15, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      Instance[11] = *(_QWORD *)(a2 + 152);
      v14 = *(_QWORD *)(a2 + 160);
      Instance[12] = v14;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, __int64, _DWORD))(a2 + 152))(
        Instance,
        v14,
        a2,
        *(_QWORD *)(a4 + 8),
        a3,
        *(_DWORD *)a4);
      if ( RtlGetCurrentServiceSessionId() )
        v12 = (__int64)NtCurrentPeb()->SharedData + 556;
      if ( *(_BYTE *)v12 )
        RtlpTpETWCallbackStop(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppCompleteThreadData(v15);
      return;
    }
    if ( LdrAddRefDll(0, *(PVOID *)(a2 + 208)) >= 0 )
    {
      *((_DWORD *)Instance + 36) |= 0x100u;
      Instance[21] = v11;
      goto LABEL_3;
    }
  }
  TppBarrierAdjust(v9, 0xFFFFFFFFLL, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
}
