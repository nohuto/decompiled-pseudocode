/*
 * XREFs of VfMiscExfReleasePushLockShared_Entry @ 0x140ADFCC0
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscExCheckAPCsDisabled @ 0x140AE15A4 (ViMiscExCheckAPCsDisabled.c)
 */

__int64 __fastcall VfMiscExfReleasePushLockShared_Entry(__int64 a1)
{
  return ViMiscExCheckAPCsDisabled(0xEBuLL, *(_QWORD *)(a1 + 8));
}
