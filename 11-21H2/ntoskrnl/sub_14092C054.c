/*
 * XREFs of sub_14092C054 @ 0x14092C054
 * Callers:
 *     sub_14092BA58 @ 0x14092BA58 (sub_14092BA58.c)
 *     sub_14092BC54 @ 0x14092BC54 (sub_14092BC54.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14092C054(_QWORD *a1)
{
  const void *v2; // r9
  int v4; // eax
  unsigned int v5; // edi

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerInvokeCallbacks entered, context 0x%p\n", a1);
  v2 = (const void *)a1[10];
  if ( !v2 )
    return 0LL;
  DbgPrintEx(5u, 3u, "DBGK: Invoking callback at address 0x%p\n", v2);
  v4 = sub_14042A5E0(a1, sub_14092B8A0);
  v5 = v4;
  if ( v4 < 0 )
    DbgPrintEx(5u, 0, "DBGK: callback at address 0x%p returned status 0x%X\n", (const void *)a1[10], v4);
  return v5;
}
