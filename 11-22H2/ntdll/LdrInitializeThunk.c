/*
 * XREFs of LdrInitializeThunk @ 0x180073E50
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180073E78 (LdrpInitialize.c)
 *     ZwContinue @ 0x18009F650 (ZwContinue.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
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
