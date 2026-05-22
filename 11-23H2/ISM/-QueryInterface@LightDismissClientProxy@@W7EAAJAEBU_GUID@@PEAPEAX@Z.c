/*
 * XREFs of ?QueryInterface@LightDismissClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180068350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LightDismissClientProxy::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return BamoLightDismissClientProxy::QueryInterface((BamoLightDismissClientProxy *)(a1 - 8), a2, a3);
}
