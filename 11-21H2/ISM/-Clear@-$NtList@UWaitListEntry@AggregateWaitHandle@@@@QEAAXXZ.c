/*
 * XREFs of ?Clear@?$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ @ 0x1800FD7B4
 * Callers:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x1800FCBB4 (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x1800FF62C (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
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
