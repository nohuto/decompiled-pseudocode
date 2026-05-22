/*
 * XREFs of ?Release@CUIComponentInputObjectProxy@@WEA@EAAKXZ @ 0x1800509C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CUIComponentInputObjectProxy::Release(__int64 a1)
{
  return BamoInputProcessManagerProxy::Release((BamoInputProcessManagerProxy *)(a1 - 64));
}
