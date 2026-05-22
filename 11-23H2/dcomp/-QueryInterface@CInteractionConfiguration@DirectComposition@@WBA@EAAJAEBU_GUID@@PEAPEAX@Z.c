/*
 * XREFs of ?QueryInterface@CInteractionConfiguration@DirectComposition@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A8E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionConfiguration::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return DirectComposition::CInteractionConfiguration::QueryInterface(
           (DirectComposition::CInteractionConfiguration *)(a1 - 16),
           a2,
           a3);
}
