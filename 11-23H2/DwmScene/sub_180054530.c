/*
 * XREFs of sub_180054530 @ 0x180054530
 * Callers:
 *     sub_180054620 @ 0x180054620 (sub_180054620.c)
 *     sub_18008B5B4 @ 0x18008B5B4 (sub_18008B5B4.c)
 *     sub_1800D495C @ 0x1800D495C (sub_1800D495C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 */

__int64 __fastcall sub_180054530(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx

  *a1 = &Spectre::Engine::DeviceSampler::`vftable';
  v2 = (volatile signed __int32 *)a1[15];
  if ( v2 )
    sub_180010574(v2);
  v3 = a1[13];
  if ( v3 )
    sub_180010530(v3);
  return sub_1800280AC((__int64)a1);
}
