/*
 * XREFs of sub_140B2603C @ 0x140B2603C
 * Callers:
 *     sub_140B25C04 @ 0x140B25C04 (sub_140B25C04.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140250C10 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideList @ 0x1406DA090 (ExInitializePagedLookasideList.c)
 */

void sub_140B2603C()
{
  ExInitializePagedLookasideList(&stru_140CE2500, 0LL, 0LL, 0, 0x78uLL, 0x6D695346u, 4u);
  ExInitializeNPagedLookasideList(&stru_140CE2480, 0LL, 0LL, 0x200u, 0x78uLL, 0x6D695346u, 4u);
  ExInitializeNPagedLookasideList(&stru_140CE2580, 0LL, 0LL, 0x200u, 0x38uLL, 0x6D665346u, 0x20u);
}
