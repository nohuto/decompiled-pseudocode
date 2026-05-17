/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x180022550
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x180021EE0 (TppAlpcpExecuteCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180022458 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18005A9B4 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpTpWorkCallback @ 0x180070EB0 (RtlpTpWorkCallback.c)
 *     RtlpTpIoCallback @ 0x1800B1BE0 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A4C20 (NtTraceEvent.c)
 */

void *__fastcall RtlSetThreadSubProcessTag(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rax
  __int64 v6; // rbx
  void *SubProcessTag; // rdi
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  char v11[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+26h] [rbp-32h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  v4 = NtCurrentTeb();
  v6 = 2147353488LL;
  SubProcessTag = v4->SubProcessTag;
  v4->SubProcessTag = a1;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 566;
  else
    v9 = 2147353488LL;
  if ( *(_BYTE *)v9 && a1 != SubProcessTag )
  {
    v13 = (int)SubProcessTag;
    v12 = 1349;
    v14 = (int)a1;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, a1, a3, a4) )
      v6 = (__int64)NtCurrentPeb()->SharedData + 566;
    NtTraceEvent(*(unsigned __int8 *)v6, 1026LL, 8LL, v11);
  }
  return SubProcessTag;
}
