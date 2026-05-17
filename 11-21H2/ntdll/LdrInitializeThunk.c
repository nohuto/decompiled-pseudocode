/*
 * XREFs of LdrInitializeThunk @ 0x18007B1A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x18007B1C8 (LdrpInitialize.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x1800A48D0 (ZwContinue.c)
 */

void __fastcall __noreturn LdrInitializeThunk(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // eax

  LdrpInitialize();
  LOBYTE(v2) = 1;
  v3 = ZwContinue(a1, v2);
  RtlRaiseStatus(v3);
  JUMPOUT(0x18007B1BFLL);
}
