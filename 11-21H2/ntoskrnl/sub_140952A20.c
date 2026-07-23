/*
 * XREFs of sub_140952A20 @ 0x140952A20
 * Callers:
 *     sub_140563058 @ 0x140563058 (sub_140563058.c)
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 *     sub_140A69140 @ 0x140A69140 (sub_140A69140.c)
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 */

void sub_140952A20()
{
  sub_1402FD820((ULONG_PTR)ImageSectionHandle, 1uLL);
  ExNotifyCallback(qword_140C158D0, (PVOID)3, 0LL);
}
