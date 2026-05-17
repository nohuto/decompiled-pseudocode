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

struct _TEB *__fastcall TppCleanupGroupMemberCallbackProlog(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct _TEB *result; // rax
  struct _TEB **v6; // rdi

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
  v4 = *(_QWORD *)(a2 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 80) = v4;
    RtlSetThreadSubProcessTag();
  }
  result = NtCurrentTeb();
  result->ActivityId = *(_GUID *)(a2 + 112);
  v6 = (struct _TEB **)(a2 + 128);
  if ( v6 )
  {
    result = NtCurrentTeb();
    if ( *(struct _TEB **)result->WorkingOnBehalfTicket != *v6 )
    {
      result = (struct _TEB *)NtSetInformationThread(-2LL, 44LL, v6, 8LL);
      if ( (int)result >= 0 )
      {
        result = *v6;
        *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v6;
      }
    }
  }
  return result;
}
