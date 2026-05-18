/*
 * XREFs of sub_180059A68 @ 0x180059A68
 * Callers:
 *     sub_18005B270 @ 0x18005B270 (sub_18005B270.c)
 *     sub_18005B2F0 @ 0x18005B2F0 (sub_18005B2F0.c)
 *     sub_18005B370 @ 0x18005B370 (sub_18005B370.c)
 *     sub_18005B3F0 @ 0x18005B3F0 (sub_18005B3F0.c)
 *     sub_18005B470 @ 0x18005B470 (sub_18005B470.c)
 *     sub_18005B4F0 @ 0x18005B4F0 (sub_18005B4F0.c)
 *     sub_18005B570 @ 0x18005B570 (sub_18005B570.c)
 *     sub_18005B5F0 @ 0x18005B5F0 (sub_18005B5F0.c)
 *     sub_1800DDD00 @ 0x1800DDD00 (sub_1800DDD00.c)
 *     sub_1800DDD80 @ 0x1800DDD80 (sub_1800DDD80.c)
 *     sub_1800DDE00 @ 0x1800DDE00 (sub_1800DDE00.c)
 *     sub_1800DDE80 @ 0x1800DDE80 (sub_1800DDE80.c)
 *     sub_1800DDF00 @ 0x1800DDF00 (sub_1800DDF00.c)
 *     sub_1800DDF80 @ 0x1800DDF80 (sub_1800DDF80.c)
 *     sub_1800DE000 @ 0x1800DE000 (sub_1800DE000.c)
 *     sub_1800DE080 @ 0x1800DE080 (sub_1800DE080.c)
 *     sub_1800DE100 @ 0x1800DE100 (sub_1800DE100.c)
 *     sub_1800DE180 @ 0x1800DE180 (sub_1800DE180.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 *     sub_1800DE280 @ 0x1800DE280 (sub_1800DE280.c)
 *     sub_1800DE300 @ 0x1800DE300 (sub_1800DE300.c)
 *     sub_1800DE380 @ 0x1800DE380 (sub_1800DE380.c)
 *     sub_1800DE400 @ 0x1800DE400 (sub_1800DE400.c)
 *     sub_1800DE480 @ 0x1800DE480 (sub_1800DE480.c)
 *     sub_1800DE500 @ 0x1800DE500 (sub_1800DE500.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180059A68(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v2 )
  {
    v3 = a2[1];
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v3 = a2[1];
    }
    *a1 = v2;
    a1[1] = v3;
  }
  return a1;
}
