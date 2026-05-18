/*
 * XREFs of sub_1800AB820 @ 0x1800AB820
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009B3D8 @ 0x18009B3D8 (sub_18009B3D8.c)
 *     sub_18009B3EC @ 0x18009B3EC (sub_18009B3EC.c)
 *     sub_18009B410 @ 0x18009B410 (sub_18009B410.c)
 */

__int64 sub_1800AB820()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx

  sub_18009B410();
  sub_18009B3EC();
  result = sub_18009B3D8();
  *(_QWORD *)(v2 + 120) = result | v1;
  return result;
}
