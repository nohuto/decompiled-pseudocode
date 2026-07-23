/*
 * XREFs of sub_140B30050 @ 0x140B30050
 * Callers:
 *     sub_140AFFEF4 @ 0x140AFFEF4 (sub_140AFFEF4.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x1406DA090 (ExInitializePagedLookasideList.c)
 */

void sub_140B30050()
{
  ExInitializePagedLookasideList(&stru_140CF9440, 0LL, 0LL, 0, 0x78uLL, 0x53446D57u, 0);
  ExInitializePagedLookasideList(&stru_140CF94C0, 0LL, 0LL, 0, 0xA0uLL, 0x45476D57u, 0);
  ExInitializePagedLookasideList(&stru_140CF9540, 0LL, 0LL, 0, 0x60uLL, 0x53496D57u, 0);
  ExInitializePagedLookasideList(&stru_140CF95C0, 0LL, 0LL, 0, 0x38uLL, 0x524D6D57u, 0);
}
