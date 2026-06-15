/*
 * XREFs of ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x180022820
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800222B0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180022970 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005DFD0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 **__fastcall CPlaybackNotifier::AcquireReference(
        _Mtx_t a1,
        volatile signed __int32 **a2,
        __int64 a3)
{
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // r14
  int v10; // eax
  std::_Ref_count_base *v11; // rcx

  *a2 = 0LL;
  a2[1] = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x88uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *((_DWORD *)v7 + 3) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<CPlaybackReference>::`vftable';
    *((_QWORD *)v7 + 16) = a1;
    _o_wcscpy_s(v7 + 4, 56LL, a3);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8 + 4;
  v10 = _Mtx_lock(a1);
  if ( v10 )
  {
    std::_Throw_C_error(v10);
LABEL_13:
    (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v8);
    return a2;
  }
  CPlaybackNotifier::UpdateAudioPlaybackStatus(a1, 0LL, a3);
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v9 = v8 + 4;
  }
  *a2 = v9;
  v11 = (std::_Ref_count_base *)a2[1];
  a2[1] = v8;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  _Mtx_unlock(a1);
  if ( v8 && _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    goto LABEL_13;
  return a2;
}
