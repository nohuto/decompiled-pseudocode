/*
 * XREFs of KiUserCallbackDispatcher @ 0x1800A7FE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwCallbackReturn @ 0x1800A4110 (ZwCallbackReturn.c)
 *     KiUserCallForwarder @ 0x1800A7E70 (KiUserCallForwarder.c)
 */

void __fastcall __noreturn KiUserCallbackDispatcher(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax

  v5 = KiUserCallForwarder();
  v6 = ZwCallbackReturn(0LL, 0, v5);
  RtlRaiseStatus(v6);
}
