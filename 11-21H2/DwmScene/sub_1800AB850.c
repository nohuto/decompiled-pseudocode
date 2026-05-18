/*
 * XREFs of sub_1800AB850 @ 0x1800AB850
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009B038 @ 0x18009B038 (sub_18009B038.c)
 *     sub_18009B3D8 @ 0x18009B3D8 (sub_18009B3D8.c)
 *     sub_18009B3EC @ 0x18009B3EC (sub_18009B3EC.c)
 *     sub_18009B410 @ 0x18009B410 (sub_18009B410.c)
 *     sub_18009B430 @ 0x18009B430 (sub_18009B430.c)
 *     sub_18009B440 @ 0x18009B440 (sub_18009B440.c)
 */

__int64 sub_1800AB850()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx

  sub_18009B410();
  sub_18009B038();
  sub_18009B430();
  sub_18009B440();
  sub_18009B3EC();
  result = sub_18009B3D8();
  *(_QWORD *)(v2 + 112) = result | v1;
  return result;
}
