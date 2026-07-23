/*
 * XREFs of MiEmptyWorkingSetTail @ 0x140362620
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 */

__int64 __fastcall MiEmptyWorkingSetTail(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 168);
  if ( v1[5] )
    MiFreeWsleList(*(_QWORD *)(a1 + 24), (__int64)(v1 + 2), *v1 & 4);
  return 0LL;
}
