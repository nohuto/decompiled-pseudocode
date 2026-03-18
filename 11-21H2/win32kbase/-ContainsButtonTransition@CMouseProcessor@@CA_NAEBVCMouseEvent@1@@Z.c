/*
 * XREFs of ?ContainsButtonTransition@CMouseProcessor@@CA_NAEBVCMouseEvent@1@@Z @ 0x1C00AC130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CMouseProcessor::ContainsButtonTransition(const struct CMouseProcessor::CMouseEvent *a1)
{
  return ((**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a1)(a1) & 0xF3FF) != 0;
}
