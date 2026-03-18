/*
 * XREFs of sub_1403F9450 @ 0x1403F9450
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140AB9010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x140AD23B0 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_1403F9450(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 272))(a1);
}
