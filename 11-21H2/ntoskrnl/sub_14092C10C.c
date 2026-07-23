/*
 * XREFs of sub_14092C10C @ 0x14092C10C
 * Callers:
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_14092BA58 @ 0x14092BA58 (sub_14092BA58.c)
 *     sub_14092BC54 @ 0x14092BC54 (sub_14092BC54.c)
 */

__int64 __fastcall sub_14092C10C(__int64 a1, int a2, __int64 a3, _BYTE *a4)
{
  *a4 = 1;
  if ( !a2 )
    return 0LL;
  *(_QWORD *)(a1 + 104) = a3;
  *(_DWORD *)(a1 + 100) = a2;
  if ( a2 == 1 )
    return sub_14092BC54(a1);
  if ( a2 == 2 )
    return sub_14092BA58(a1, a4);
  DbgPrintEx(5u, 0, "DBGK: DbgkpWerProcessPolicyResult: Unknown policy option %d\n\n", a2);
  return 3221225659LL;
}
