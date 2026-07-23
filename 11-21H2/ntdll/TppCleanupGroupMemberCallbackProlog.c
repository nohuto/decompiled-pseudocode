/*
 * XREFs of TppCleanupGroupMemberCallbackProlog @ 0x180022458
 * Callers:
 *     TppExecuteWaitCallback @ 0x18001FE54 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180022278 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x180024270 (TppIopExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180087BD0 (TppJobpExecuteCallback.c)
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x180022550 (RtlSetThreadSubProcessTag.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003FEF0 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x1800712E0 (TpCallbackMayRunLong.c)
 *     NtSetInformationThread @ 0x1800A4210 (NtSetInformationThread.c)
 */

int __fastcall TppCleanupGroupMemberCallbackProlog(_DWORD *Instance, __int64 a2)
{
  void *v4; // rcx
  struct _TEB *v5; // rax
  _QWORD *v6; // rdi

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)Instance = 72LL;
    Instance[2] = 1;
    RtlActivateActivationContextUnsafeFast(Instance, *(_QWORD *)(a2 + 96));
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
    RtlSetThreadSubProcessTag(v4);
  }
  v5 = NtCurrentTeb();
  v5->ActivityId = *(_GUID *)(a2 + 112);
  v6 = (_QWORD *)(a2 + 128);
  if ( v6 )
  {
    v5 = NtCurrentTeb();
    if ( *(_QWORD *)v5->WorkingOnBehalfTicket != *v6 )
    {
      LODWORD(v5) = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, v6, 8u);
      if ( (int)v5 >= 0 )
      {
        v5 = (struct _TEB *)*v6;
        *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v6;
      }
    }
  }
  return (int)v5;
}
