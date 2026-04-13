/*
 * XREFs of ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18009B420
 * Callers:
 *     __lambda_4f27881777b3828299edd9a0e9cb6746_::operator()_::_1_::dtor$1 @ 0x1800F20CB (__lambda_4f27881777b3828299edd9a0e9cb6746_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800665B0 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ActivityThreadWatcher::~ActivityThreadWatcher(wil::ActivityThreadWatcher *this)
{
  wil::details::ThreadFailureCallbackHolder *v2; // rcx
  void *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = (wil::ActivityThreadWatcher *)((char *)this + 32);
  if ( *((_DWORD *)v2 + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v2);
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (void *)*((_QWORD *)this + 2);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
    *((_BYTE *)this + 24) = 0;
  }
  *((_QWORD *)this + 2) = 0LL;
}
