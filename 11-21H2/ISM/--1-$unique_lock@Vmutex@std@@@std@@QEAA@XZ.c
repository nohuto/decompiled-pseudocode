/*
 * XREFs of ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x1800E3734
 * Callers:
 *     _PointerInputMediator::RoutePointer_::_1_::dtor$0 @ 0x1800E41EA (_PointerInputMediator--RoutePointer_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::unique_lock<std::mutex>::~unique_lock<std::mutex>(__int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 8) )
    return _Mtx_unlock(*(_Mtx_t *)a1);
  return result;
}
