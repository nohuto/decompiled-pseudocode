/*
 * XREFs of sub_1405BA5F0 @ 0x1405BA5F0
 * Callers:
 *     sub_1405BA624 @ 0x1405BA624 (sub_1405BA624.c)
 *     sub_1405BE340 @ 0x1405BE340 (sub_1405BE340.c)
 *     sub_140980D40 @ 0x140980D40 (sub_140980D40.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

int __fastcall sub_1405BA5F0(__int64 a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1368), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v1 == 1 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 2360), 0, 0);
  return v1;
}
