/*
 * XREFs of CmpSearchAndCountWorker @ 0x140A179A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDumpKeyBodyList @ 0x140A17348 (CmpDumpKeyBodyList.c)
 */

__int64 __fastcall CmpSearchAndCountWorker(_QWORD *a1, __int64 a2)
{
  CmpDumpKeyBodyList(a1, (_DWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  return 0LL;
}
