/*
 * XREFs of sub_1800465B0 @ 0x1800465B0
 * Callers:
 *     sub_1800304D8 @ 0x1800304D8 (sub_1800304D8.c)
 *     sub_1800453E0 @ 0x1800453E0 (sub_1800453E0.c)
 *     sub_180045E9C @ 0x180045E9C (sub_180045E9C.c)
 *     sub_180045F10 @ 0x180045F10 (sub_180045F10.c)
 *     sub_180045FB4 @ 0x180045FB4 (sub_180045FB4.c)
 *     sub_1800462CC @ 0x1800462CC (sub_1800462CC.c)
 *     sub_180046470 @ 0x180046470 (sub_180046470.c)
 *     sub_180046DF4 @ 0x180046DF4 (sub_180046DF4.c)
 *     sub_180047028 @ 0x180047028 (sub_180047028.c)
 *     sub_1800476C0 @ 0x1800476C0 (sub_1800476C0.c)
 *     sub_1800705E8 @ 0x1800705E8 (sub_1800705E8.c)
 *     sub_18009DA30 @ 0x18009DA30 (sub_18009DA30.c)
 *     sub_1800F7060 @ 0x1800F7060 (sub_1800F7060.c)
 *     sub_1800F72B4 @ 0x1800F72B4 (sub_1800F72B4.c)
 *     sub_1800F7508 @ 0x1800F7508 (sub_1800F7508.c)
 *     sub_1800F7828 @ 0x1800F7828 (sub_1800F7828.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800465B0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 40);
  }
  *a2 = *(_QWORD *)(a1 + 32);
  result = a2;
  a2[1] = v2;
  return result;
}
