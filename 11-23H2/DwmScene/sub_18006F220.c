/*
 * XREFs of sub_18006F220 @ 0x18006F220
 * Callers:
 *     sub_180052D40 @ 0x180052D40 (sub_180052D40.c)
 *     sub_18006F2A0 @ 0x18006F2A0 (sub_18006F2A0.c)
 *     sub_1800D5A00 @ 0x1800D5A00 (sub_1800D5A00.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_18006F220(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_180010530(v2);
  return sub_1800280AC((__int64)a1);
}
