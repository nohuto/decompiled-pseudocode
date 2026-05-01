/*
 * XREFs of ??1?$ThreadLocalStorage@PAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QAE@XZ @ 0x10003F0D
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks___0 @ 0x100077E0 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks___0.c)
 * Callees:
 *     <none>
 */

void __thiscall wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>(
        _DWORD *this)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  HANDLE ProcessHeap; // eax
  void *v5; // [esp-8h] [ebp-14h]

  v1 = this + 10;
  v2 = this;
  do
  {
    v3 = (_DWORD *)*v2;
    while ( v3 )
    {
      v5 = v3;
      v3 = (_DWORD *)v3[1];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
    }
    *v2++ = 0;
  }
  while ( v2 != v1 );
}
