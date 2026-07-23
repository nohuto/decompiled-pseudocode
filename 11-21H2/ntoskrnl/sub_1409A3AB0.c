/*
 * XREFs of sub_1409A3AB0 @ 0x1409A3AB0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     sub_1409AA890 @ 0x1409AA890 (sub_1409AA890.c)
 */

__int64 __fastcall sub_1409A3AB0(unsigned int a1, char a2, struct _KPROCESS *a3, __int64 a4)
{
  HANDLE ProcessId; // r8

  ProcessId = 0LL;
  if ( !a2 )
    a3 = PsInitialSystemProcess;
  if ( a3 )
    ProcessId = PsGetProcessId(a3);
  sub_1409AA890(**(unsigned int **)(a4 + 16), *(unsigned int *)(a4 + 28), ProcessId, a1);
  return 0LL;
}
