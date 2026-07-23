/*
 * XREFs of sub_1409AB660 @ 0x1409AB660
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     sub_1409A9398 @ 0x1409A9398 (sub_1409A9398.c)
 */

__int64 __fastcall sub_1409AB660(__int64 a1, char a2, struct _KPROCESS *a3)
{
  if ( !a2 )
    a3 = PsInitialSystemProcess;
  if ( a3 )
    PsGetProcessId(a3);
  sub_1409A9398();
  return 0LL;
}
