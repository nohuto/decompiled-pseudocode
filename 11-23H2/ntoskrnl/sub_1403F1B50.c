/*
 * XREFs of sub_1403F1B50 @ 0x1403F1B50
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140AFA010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x140B137A0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_1403F1B50(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 280))(a1);
}
