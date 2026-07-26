/*
 * XREFs of NdisCoSendPackets @ 0x1C00C2C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisCoSendPackets(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 264))();
}
