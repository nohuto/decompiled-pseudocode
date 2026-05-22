/*
 * XREFs of ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x18012938C
 * Callers:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x1801267D4 (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x180128BE0 (-OnDisposePublic@SipcServer@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?Clear@?$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ @ 0x180127408 (-Clear@-$NtList@UWaitListEntry@AggregateWaitHandle@@@@QEAAXXZ.c)
 */

void __fastcall AggregateWaitHandle::Reset(AggregateWaitHandle *this, __int64 a2)
{
  __int64 **v2; // rdi
  __int64 **i; // rbx

  v2 = (__int64 **)((char *)this + 24);
  for ( i = (__int64 **)*((_QWORD *)this + 3); i != v2; i = (__int64 **)*i )
  {
    LOBYTE(a2) = 1;
    NtCancelWaitCompletionPacket(i[3], a2);
    CloseHandle(i[3]);
  }
  NtList<AggregateWaitHandle::WaitListEntry>::Clear(v2);
  operator delete(*((void **)this + 2));
  *((_QWORD *)this + 2) = 0LL;
}
