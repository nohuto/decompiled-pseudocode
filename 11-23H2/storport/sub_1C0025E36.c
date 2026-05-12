/*
 * XREFs of sub_1C0025E36 @ 0x1C0025E36
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0008BF0 @ 0x1C0008BF0 (sub_1C0008BF0.c)
 */

__int64 __fastcall sub_1C0025E36(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al

  v4 = sub_1C0008BF0(a1, a2, a3);
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4896) + 80LL));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4896) + 88LL));
  return v4 == 0 ? 0xC100000C : 0;
}
