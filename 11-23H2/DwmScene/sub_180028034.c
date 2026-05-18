/*
 * XREFs of sub_180028034 @ 0x180028034
 * Callers:
 *     sub_180027CE8 @ 0x180027CE8 (sub_180027CE8.c)
 *     sub_18002F8F8 @ 0x18002F8F8 (sub_18002F8F8.c)
 *     sub_18002F9F0 @ 0x18002F9F0 (sub_18002F9F0.c)
 *     sub_18004DB34 @ 0x18004DB34 (sub_18004DB34.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     sub_18005F46C @ 0x18005F46C (sub_18005F46C.c)
 *     sub_180062F40 @ 0x180062F40 (sub_180062F40.c)
 *     sub_1800D8AEC @ 0x1800D8AEC (sub_1800D8AEC.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

__int64 __fastcall sub_180028034(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 48);
    if ( v3 )
      sub_180010530(v3);
  }
  return sub_180027FB0(a1);
}
