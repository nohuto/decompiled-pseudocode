/*
 * XREFs of ?GetInteractionNextSibling@CManipulationContext@@UEBAPEAUIInteractionResource@@AEBU2@@Z @ 0x180182AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IInteractionResource *__fastcall CManipulationContext::GetInteractionNextSibling(
        CManipulationContext *this,
        const struct IInteractionResource *a2)
{
  return (struct IInteractionResource *)(*(__int64 (__fastcall **)(const struct IInteractionResource *))(*(_QWORD *)a2 + 112LL))(a2);
}
