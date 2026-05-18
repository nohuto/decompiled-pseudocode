/*
 * XREFs of sub_180055798 @ 0x180055798
 * Callers:
 *     sub_180052EA0 @ 0x180052EA0 (sub_180052EA0.c)
 *     sub_1800CCA78 @ 0x1800CCA78 (sub_1800CCA78.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180055734 @ 0x180055734 (sub_180055734.c)
 */

__int64 __fastcall sub_180055798(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceTexture::`vftable';
  sub_180011B24((__int64)(a1 + 15));
  sub_180055734(a1 + 14);
  v2 = (volatile signed __int32 *)a1[13];
  if ( v2 )
    sub_180010574(v2);
  return sub_1800280AC((__int64)a1);
}
