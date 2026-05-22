/*
 * XREFs of ??1AggregateWaitHandle@@QEAA@XZ @ 0x1801267D4
 * Callers:
 *     ??1SipcServer@@EEAA@XZ @ 0x1801269F0 (--1SipcServer@@EEAA@XZ.c)
 * Callees:
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x18012938C (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 */

void __fastcall AggregateWaitHandle::~AggregateWaitHandle(HANDLE *this)
{
  HANDLE v2; // rcx

  AggregateWaitHandle::Reset((AggregateWaitHandle *)this);
  v2 = this[1];
  if ( v2 )
  {
    SetHandleInformation(v2, 2u, 0);
    CloseHandle(this[1]);
  }
  if ( *this )
    CloseHandle(*this);
  NtList<AggregateWaitHandle::WaitListEntry>::Clear(this + 3);
}
