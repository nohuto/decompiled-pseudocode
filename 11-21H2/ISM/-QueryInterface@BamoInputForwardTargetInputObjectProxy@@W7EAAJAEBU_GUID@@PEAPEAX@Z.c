/*
 * XREFs of ?QueryInterface@BamoInputForwardTargetInputObjectProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputForwardTargetInputObjectProxy::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return BamoInputForwardTargetInputObjectProxy::QueryInterface(
           (BamoInputForwardTargetInputObjectProxy *)(a1 - 8),
           a2,
           a3);
}
