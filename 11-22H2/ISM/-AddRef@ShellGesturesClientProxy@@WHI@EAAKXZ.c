/*
 * XREFs of ?AddRef@ShellGesturesClientProxy@@WHI@EAAKXZ @ 0x18007BCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellGesturesClientProxy::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 120));
}
