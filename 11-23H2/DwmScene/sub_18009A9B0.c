/*
 * XREFs of sub_18009A9B0 @ 0x18009A9B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C150 @ 0x18008C150 (sub_18008C150.c)
 *     sub_18008C428 @ 0x18008C428 (sub_18008C428.c)
 *     sub_18008C43C @ 0x18008C43C (sub_18008C43C.c)
 *     sub_18008C460 @ 0x18008C460 (sub_18008C460.c)
 *     sub_18008C480 @ 0x18008C480 (sub_18008C480.c)
 *     sub_18008C490 @ 0x18008C490 (sub_18008C490.c)
 */

__int64 sub_18009A9B0()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx

  sub_18008C460();
  sub_18008C150();
  sub_18008C480();
  sub_18008C490();
  sub_18008C43C();
  result = sub_18008C428();
  *(_QWORD *)(v2 + 112) = result | v1;
  return result;
}
