/*
 * XREFs of sub_18009BCA0 @ 0x18009BCA0
 * Callers:
 *     sub_18008B738 @ 0x18008B738 (sub_18008B738.c)
 *     sub_18008B770 @ 0x18008B770 (sub_18008B770.c)
 *     sub_1800D7170 @ 0x1800D7170 (sub_1800D7170.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_18009BCA0(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  v2 = (volatile signed __int32 *)a1[14];
  if ( v2 )
    sub_180010574(v2);
  return sub_1800280AC((__int64)a1);
}
