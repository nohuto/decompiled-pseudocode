/*
 * XREFs of HUBDSM_ValidatingInterfaceStatusForRemoteWake @ 0x1C0023320
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability @ 0x1C0027D40 (HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability.c)
 */

__int64 __fastcall HUBDSM_ValidatingInterfaceStatusForRemoteWake(__int64 a1)
{
  return HUBDTX_ValidateInterfaceStatusForRemoteWakeCapability(*(_QWORD *)(a1 + 960));
}
