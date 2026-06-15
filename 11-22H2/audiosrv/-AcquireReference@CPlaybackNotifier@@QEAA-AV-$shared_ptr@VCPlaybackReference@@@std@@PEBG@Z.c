/*
 * XREFs of ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x18003A564
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18003A160 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180039710 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 **__fastcall CPlaybackNotifier::AcquireReference(
        _Mtx_t a1,
        volatile signed __int32 **a2,
        _WORD *a3)
{
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // r14
  int v9; // eax
  std::_Ref_count_base *v10; // rcx

  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = (volatile signed __int32 *)operator new(0x88uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 1;
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<CPlaybackReference>::`vftable';
    *((_QWORD *)v6 + 16) = a1;
    _o_wcscpy_s(v6 + 4, 56LL, a3);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7 + 4;
  v9 = _Mtx_lock(a1);
  if ( v9 )
  {
    std::_Throw_C_error(v9);
    __debugbreak();
    __debugbreak();
    JUMPOUT(0x1800B0119LL);
  }
  CPlaybackNotifier::UpdateAudioPlaybackStatus(a1, 0, a3);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v8 = v7 + 4;
  }
  *a2 = v8;
  v10 = (std::_Ref_count_base *)a2[1];
  a2[1] = v7;
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  _Mtx_unlock(a1);
  if ( v7 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
  return a2;
}
