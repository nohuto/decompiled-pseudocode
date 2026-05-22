/*
 * XREFs of ?AddRef@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x180067970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CUIComponentInputObjectProxy::AddRef(__int64 a1)
{
  return BamoMPCManagerClientProxy::AddRef((BamoMPCManagerClientProxy *)(a1 - 64));
}
