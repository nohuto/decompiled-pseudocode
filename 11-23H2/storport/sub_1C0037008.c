/*
 * XREFs of sub_1C0037008 @ 0x1C0037008
 * Callers:
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 *     sub_1C000F7A0 @ 0x1C000F7A0 (sub_1C000F7A0.c)
 *     sub_1C000FC10 @ 0x1C000FC10 (sub_1C000FC10.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C001F308 @ 0x1C001F308 (sub_1C001F308.c)
 *     sub_1C0037CF4 @ 0x1C0037CF4 (sub_1C0037CF4.c)
 *     sub_1C0038AB8 @ 0x1C0038AB8 (sub_1C0038AB8.c)
 *     sub_1C0038FB0 @ 0x1C0038FB0 (sub_1C0038FB0.c)
 *     sub_1C00557CC @ 0x1C00557CC (sub_1C00557CC.c)
 *     sub_1C0058E18 @ 0x1C0058E18 (sub_1C0058E18.c)
 *     sub_1C0074EE0 @ 0x1C0074EE0 (sub_1C0074EE0.c)
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00ACAB4 @ 0x1C00ACAB4 (sub_1C00ACAB4.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 * Callees:
 *     sub_1C0008BB4 @ 0x1C0008BB4 (sub_1C0008BB4.c)
 */

__int64 __fastcall sub_1C0037008(__int64 a1, __int64 a2)
{
  bool v3; // al

  v3 = sub_1C0008BB4(a1, a2, 0LL);
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4896) + 80LL));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4896) + 96LL));
  return !v3 ? 0xC100000C : 0;
}
