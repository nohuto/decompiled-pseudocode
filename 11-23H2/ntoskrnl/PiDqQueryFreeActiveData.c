/*
 * XREFs of PiDqQueryFreeActiveData @ 0x1407DFD48
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140786490 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x140786C94 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryRelease @ 0x14078722C (PiDqQueryRelease.c)
 *     PiDqIrpQueryCreate @ 0x1407F9148 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1407F9F68 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryAppendActionEntry @ 0x1407FA348 (PiDqQueryAppendActionEntry.c)
 *     PiDqIrpQueryGetResult @ 0x1407FB64C (PiDqIrpQueryGetResult.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x14031E890 (RtlIsGenericTableEmptyAvl.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1407DFDB4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1407F9AD0 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1407F9B14 (PiDqActionDataFree.c)
 */

BOOLEAN __fastcall PiDqQueryFreeActiveData(__int64 a1)
{
  RTL_AVL_TABLE *i; // rcx
  BOOLEAN result; // al
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  void *v6; // rcx
  _QWORD *v7; // rax

  for ( i = (RTL_AVL_TABLE *)(a1 + 72); ; i = (RTL_AVL_TABLE *)(a1 + 72) )
  {
    result = RtlIsGenericTableEmptyAvl(i);
    if ( result )
      break;
    PiDqQueryDeleteObjectFromResultSet(a1, *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL));
  }
  v4 = (_QWORD **)(a1 + 192);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v7;
    v7[1] = v4;
    result = PiDqQueryActionQueueEntryFree(v5);
  }
  *(_DWORD *)(a1 + 208) = 0;
  v6 = *(void **)(a1 + 184);
  if ( v6 )
  {
    result = PiDqActionDataFree(v6);
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  return result;
}
