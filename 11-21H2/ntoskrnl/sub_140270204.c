/*
 * XREFs of sub_140270204 @ 0x140270204
 * Callers:
 *     sub_140220944 @ 0x140220944 (sub_140220944.c)
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     sub_1405BE340 @ 0x1405BE340 (sub_1405BE340.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

int __fastcall sub_140270204(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v2; // rax

  _InterlockedDecrement64(a2);
  v2 = *(_QWORD *)(a1 + 1352);
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 1360);
    if ( !v2 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 2352), 0, 0);
  }
  return v2;
}
