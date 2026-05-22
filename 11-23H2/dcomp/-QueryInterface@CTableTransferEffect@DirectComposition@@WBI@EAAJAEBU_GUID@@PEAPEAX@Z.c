/*
 * XREFs of ?QueryInterface@CTableTransferEffect@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTableTransferEffect::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return DirectComposition::CTableTransferEffect::QueryInterface(
           (DirectComposition::CTableTransferEffect *)(a1 - 24),
           a2,
           a3);
}
