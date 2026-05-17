/*
 * XREFs of LdrInitializeThunk @ 0x1800744C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x1800744E8 (LdrpInitialize.c)
 *     ZwContinue @ 0x1800A1710 (ZwContinue.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

void __fastcall __noreturn LdrInitializeThunk(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // eax

  LdrpInitialize();
  LOBYTE(v2) = 1;
  v3 = ZwContinue(a1, v2);
  RtlRaiseStatus(v3);
}
