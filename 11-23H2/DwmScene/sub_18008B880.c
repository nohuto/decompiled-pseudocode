/*
 * XREFs of sub_18008B880 @ 0x18008B880
 * Callers:
 *     sub_18008B8B4 @ 0x18008B8B4 (sub_18008B8B4.c)
 *     sub_18008B8D0 @ 0x18008B8D0 (sub_18008B8D0.c)
 *     sub_1800D4CA8 @ 0x1800D4CA8 (sub_1800D4CA8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_18008B880(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::DeviceRenderState::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_180010530(v2);
  return sub_1800280AC((__int64)a1);
}
