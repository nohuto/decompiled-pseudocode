/*
 * XREFs of sub_140AB4218 @ 0x140AB4218
 * Callers:
 *     sub_14065CF84 @ 0x14065CF84 (sub_14065CF84.c)
 *     sub_14065D410 @ 0x14065D410 (sub_14065D410.c)
 *     sub_14065D4F8 @ 0x14065D4F8 (sub_14065D4F8.c)
 *     sub_14065DDFC @ 0x14065DDFC (sub_14065DDFC.c)
 *     sub_14065E548 @ 0x14065E548 (sub_14065E548.c)
 *     sub_14067E8E0 @ 0x14067E8E0 (sub_14067E8E0.c)
 *     sub_14067F714 @ 0x14067F714 (sub_14067F714.c)
 *     sub_1406A0094 @ 0x1406A0094 (sub_1406A0094.c)
 *     sub_1406A52D4 @ 0x1406A52D4 (sub_1406A52D4.c)
 *     sub_1406E2798 @ 0x1406E2798 (sub_1406E2798.c)
 *     sub_140720F74 @ 0x140720F74 (sub_140720F74.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_140742190 @ 0x140742190 (sub_140742190.c)
 *     sub_1407424F0 @ 0x1407424F0 (sub_1407424F0.c)
 *     sub_140742A44 @ 0x140742A44 (sub_140742A44.c)
 *     sub_1407C3070 @ 0x1407C3070 (sub_1407C3070.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 *     sub_14091C1BC @ 0x14091C1BC (sub_14091C1BC.c)
 *     sub_14091C5C4 @ 0x14091C5C4 (sub_14091C5C4.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_140AB4218(_QWORD **a1, _QWORD **a2, int a3)
{
  _QWORD *v3; // rax

  v3 = *a2;
  if ( !*a2 )
  {
    v3 = *a1;
    *a2 = *a1;
  }
  if ( a1 == v3 )
    return 0LL;
  *a2 = (_QWORD *)*v3;
  return (char *)v3 - a3;
}
