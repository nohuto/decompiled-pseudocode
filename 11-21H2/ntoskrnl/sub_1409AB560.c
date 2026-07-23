/*
 * XREFs of sub_1409AB560 @ 0x1409AB560
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     sub_1409A92D0 @ 0x1409A92D0 (sub_1409A92D0.c)
 */

void __fastcall sub_1409AB560(struct _KPROCESS *a1)
{
  PsGetProcessId(a1);
  sub_1409A92D0();
}
