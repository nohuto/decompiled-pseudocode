/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x180004F20
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180005150 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x180004FA8 (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  volatile signed __int32 *v2; // rcx
  void *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = (void *)*((_QWORD *)this + 24);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
    }
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
  }
  wil::StoredFailureInfo::~StoredFailureInfo((wil::ResultException *)((char *)this + 24));
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  o___std_exception_destroy_0();
}
