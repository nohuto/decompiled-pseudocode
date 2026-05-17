/*
 * XREFs of TppJobpExecuteCallback @ 0x180087BD0
 * Callers:
 *     <none>
 * Callees:
 *     TppCompleteThreadData @ 0x1800212E8 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x180021410 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180022458 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrAddRefDll @ 0x180035130 (LdrAddRefDll.c)
 *     TppBarrierAdjust @ 0x18006BAEC (TppBarrierAdjust.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180124620 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1801246BC (RtlpTpETWCallbackStop.c)
 */

void __fastcall TppJobpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rdi
  volatile signed __int64 *v9; // r14
  unsigned __int64 v10; // r9
  signed __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v5 = a2 + 72;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  v9 = (volatile signed __int64 *)(a2 + 128);
  TppBarrierAdjust((volatile signed __int64 *)(a2 + 128), 1, 0LL, a4);
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 280), 2uLL) + 2;
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 0xFFFFFFFFFFFFFFFEuLL) == 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 208);
    if ( !v12 )
    {
LABEL_3:
      TppCleanupGroupMemberCallbackProlog(a1, v5);
      v13 = 2147353478LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v14 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v14 = 2147353478LL;
      if ( *(_BYTE *)v14 )
        RtlpTpETWCallbackStart(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppStartThreadData(&v16, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 152);
      v15 = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a1 + 96) = v15;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, _DWORD))(a2 + 152))(
        a1,
        v15,
        a2,
        *(_QWORD *)(a4 + 8),
        a3,
        *(_DWORD *)a4);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 556;
      if ( *(_BYTE *)v13 )
        RtlpTpETWCallbackStop(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppCompleteThreadData(v16);
      return;
    }
    if ( (int)LdrAddRefDll(0, *(_QWORD *)(a2 + 208)) >= 0 )
    {
      *(_DWORD *)(a1 + 144) |= 0x100u;
      *(_QWORD *)(a1 + 168) = v12;
      goto LABEL_3;
    }
  }
  TppBarrierAdjust(v9, -1, 0LL, v10);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64))(v5 + 8))(v5);
}
