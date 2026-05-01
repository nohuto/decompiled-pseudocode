/*
 * XREFs of HamRpcSrvStartExtendedExecutionAsync @ 0x1800737A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HamRpcSrvStartExtendedExecutionAsync(__int64 *a1, __int64 a2)
{
  return HamSrvStartActivityAsync(a1, a2, 0, 0LL);
}
