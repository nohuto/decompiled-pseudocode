/*
 * XREFs of sub_140958514 @ 0x140958514
 * Callers:
 *     sub_140767AEC @ 0x140767AEC (sub_140767AEC.c)
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 */

void __fastcall sub_140958514(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) && !_InterlockedExchange((volatile __int32 *)(a1 + 80), 1) )
  {
    IoCancelIrp(*(PIRP *)(a1 + 72));
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 80), 2) == 3 )
      IoFreeIrp(*(PIRP *)(a1 + 72));
  }
}
