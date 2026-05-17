/*
 * XREFs of KiUserCallbackDispatcher @ 0x1800A4EE0
 * Callers:
 *     <none>
 * Callees:
 *     ZwCallbackReturn @ 0x1800A0F50 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x1800A4D70 (KiUserCallForwarder.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // eax

  KiUserCallForwarder();
  v5 = ZwCallbackReturn();
  RtlRaiseStatus(v5);
}
