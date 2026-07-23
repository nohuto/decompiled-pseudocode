/*
 * XREFs of RtlContinueLongJump @ 0x1800807E0
 * Callers:
 *     RtlRestoreContext @ 0x1800A8520 (RtlRestoreContext.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwContinueEx @ 0x1800A54C0 (ZwContinueEx.c)
 */

NTSTATUS __fastcall RtlContinueLongJump(struct _CONTEXT *a1)
{
  __int128 ContinueArgument; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  ContinueArgument = 0LL;
  LODWORD(ContinueArgument) = 2;
  v3 = 0LL;
  return ZwContinueEx(a1, &ContinueArgument);
}
