/*
 * XREFs of ?AddRef@ShellGesturesClientProxy@@WHA@EAAKXZ @ 0x180051020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShellGesturesClientProxy::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 112));
}
