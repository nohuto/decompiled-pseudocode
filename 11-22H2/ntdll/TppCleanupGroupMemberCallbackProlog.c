/*
 * XREFs of TppCleanupGroupMemberCallbackProlog @ 0x18004F67C
 * Callers:
 *     TppExecuteWaitCallback @ 0x18004E8C4 (TppExecuteWaitCallback.c)
 *     TppIopExecuteCallback @ 0x18004F0D0 (TppIopExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18004F3F0 (TppAlpcpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x1800509C0 (TppJobpExecuteCallback.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x180028CB0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     TpCallbackMayRunLong @ 0x18004F840 (TpCallbackMayRunLong.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x18009EF90 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x18009F9A0 (NtTraceEvent.c)
 */

int __fastcall TppCleanupGroupMemberCallbackProlog(_DWORD *Instance, __int64 a2)
{
  void *v4; // rcx
  __int64 v5; // rsi
  struct _TEB *v6; // rax
  void *SubProcessTag; // r8
  _DWORD *SharedData; // rdx
  __int64 v9; // rdx
  struct _TEB *v10; // rax
  struct _TEB **v11; // rdi
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v14; // [rsp+26h] [rbp-32h]
  int v15; // [rsp+40h] [rbp-18h]
  int v16; // [rsp+44h] [rbp-14h]

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)Instance = 72LL;
    Instance[2] = 1;
    RtlActivateActivationContextUnsafeFast((__int64)Instance, *(_QWORD *)(a2 + 96));
    *((_BYTE *)Instance + 76) |= 1u;
  }
  Instance[36] |= 0x240u;
  *((_QWORD *)Instance + 23) = a2;
  if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
    TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
  v4 = *(void **)(a2 + 104);
  if ( v4 )
  {
    *((_QWORD *)Instance + 10) = v4;
    v5 = 2147353488LL;
    v6 = NtCurrentTeb();
    SubProcessTag = v6->SubProcessTag;
    v6->SubProcessTag = v4;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v9 = (__int64)NtCurrentPeb()->SharedData + 566;
    else
      v9 = 2147353488LL;
    if ( *(_BYTE *)v9 && v4 != SubProcessTag )
    {
      v15 = (int)SubProcessTag;
      v14 = 1349;
      v16 = (int)v4;
      if ( RtlGetCurrentServiceSessionId() )
        v5 = (__int64)NtCurrentPeb()->SharedData + 566;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x402u, 8u, Fields);
    }
  }
  v10 = NtCurrentTeb();
  v10->ActivityId = *(_GUID *)(a2 + 112);
  v11 = (struct _TEB **)(a2 + 128);
  if ( v11 )
  {
    if ( *(struct _TEB **)NtCurrentTeb()->WorkingOnBehalfTicket == *v11 )
    {
LABEL_19:
      v10 = *v11;
      *((_QWORD *)Instance + 31) = *v11;
      return (int)v10;
    }
    LODWORD(v10) = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, v11, 8u);
    if ( (int)v10 >= 0 )
    {
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v11;
      goto LABEL_19;
    }
  }
  return (int)v10;
}
