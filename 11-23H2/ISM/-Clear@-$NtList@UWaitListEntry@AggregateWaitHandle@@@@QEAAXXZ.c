/*
 * XREFs of ?Clear@?$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ @ 0x180119378
 * Callers:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x180118744 (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x18011B2FC (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall NtList<AggregateWaitHandle::WaitListEntry>::Clear(_QWORD *a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = (_QWORD *)*a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (result = *v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = result;
    *(_QWORD *)(result + 8) = a1;
    if ( v2 == a1 )
      break;
    operator delete(v2);
    --a1[2];
  }
  return result;
}
