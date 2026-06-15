/*
 * XREFs of ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x1801349A0
 * Callers:
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180135808 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18010DA74 (--4-$shared_ptr@VCXvmPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CWorkFifo::GetWorkItem(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  std::_Ref_count_base *v6; // rcx

  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 144);
  v5 = _Mtx_lock((_Mtx_t)(a1 + 144));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  if ( !*(_BYTE *)(a1 + 136) && !*(_BYTE *)(a1 + 137) && *(_QWORD *)(a1 + 128) )
  {
    std::shared_ptr<CXvmPowerReference>::operator=(
      a2,
      *(__int64 **)(*(_QWORD *)(a1 + 104) + 8 * (*(_QWORD *)(a1 + 120) & (*(_QWORD *)(a1 + 112) - 1LL))));
    v6 = *(std::_Ref_count_base **)(*(_QWORD *)(*(_QWORD *)(a1 + 104)
                                              + 8 * (*(_QWORD *)(a1 + 120) & (*(_QWORD *)(a1 + 112) - 1LL)))
                                  + 8LL);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    if ( (*(_QWORD *)(a1 + 128))-- == 1LL )
      *(_QWORD *)(a1 + 120) = 0LL;
    else
      ++*(_QWORD *)(a1 + 120);
  }
  _Mtx_unlock(v4);
  return a2;
}
