/*
 * XREFs of ?QueryInterface@CGaussianBlurEffect@DirectComposition@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGaussianBlurEffect::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return DirectComposition::CGaussianBlurEffect::QueryInterface(
           (DirectComposition::CGaussianBlurEffect *)(a1 - 24),
           a2,
           a3);
}
