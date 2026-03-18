/*
 * XREFs of VfMiscExfAcquirePushLockExclusive_Entry @ 0x140ADFCA0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscExCheckAPCsDisabled @ 0x140AE15A4 (ViMiscExCheckAPCsDisabled.c)
 */

__int64 __fastcall VfMiscExfAcquirePushLockExclusive_Entry(__int64 a1)
{
  return ViMiscExCheckAPCsDisabled(0xEAuLL, *(_QWORD *)(a1 + 8));
}
