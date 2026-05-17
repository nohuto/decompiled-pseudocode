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

struct _TEB *__fastcall TppCleanupGroupMemberCallbackProlog(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  __int64 v5; // rsi
  struct _TEB *v6; // rax
  void *SubProcessTag; // r8
  _DWORD *SharedData; // rdx
  __int64 v9; // rdx
  struct _TEB *result; // rax
  struct _TEB **v11; // rdi
  _BYTE v12[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v13; // [rsp+26h] [rbp-32h]
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+44h] [rbp-14h]

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 96));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2;
  if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v4 = *(void **)(a2 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 80) = v4;
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
      v14 = (int)SubProcessTag;
      v13 = 1349;
      v15 = (int)v4;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v5 = (__int64)NtCurrentPeb()->SharedData + 566;
      NtTraceEvent(*(unsigned __int8 *)v5, 1026LL, 8LL, v12);
    }
  }
  result = NtCurrentTeb();
  result->ActivityId = *(_GUID *)(a2 + 112);
  v11 = (struct _TEB **)(a2 + 128);
  if ( v11 )
  {
    if ( *(struct _TEB **)NtCurrentTeb()->WorkingOnBehalfTicket != *v11 )
    {
      result = (struct _TEB *)NtSetInformationThread(-2LL, 44LL, v11);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v11;
    }
    result = *v11;
    *(_QWORD *)(a1 + 248) = *v11;
  }
  return result;
}
