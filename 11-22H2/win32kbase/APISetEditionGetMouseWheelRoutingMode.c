/*
 * XREFs of APISetEditionGetMouseWheelRoutingMode @ 0x1C0205998
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F5A90 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FA328 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 APISetEditionGetMouseWheelRoutingMode()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C0296C50 && (int)qword_1C0296C50() >= 0 && qword_1C0296C58 )
    return (unsigned int)qword_1C0296C58();
  return v0;
}
