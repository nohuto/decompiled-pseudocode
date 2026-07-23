/*
 * XREFs of KiUserCallbackDispatcher @ 0x1800A4EE0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCallbackReturn @ 0x1800A0F50 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x1800A4D70 (KiUserCallForwarder.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax

  v5 = KiUserCallForwarder();
  v6 = ZwCallbackReturn(0LL, 0, v5);
  RtlRaiseStatus(v6);
}
