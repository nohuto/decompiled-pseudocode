/*
 * XREFs of ??_GCCaptureReference@@QEAAPEAXI@Z @ 0x180119FB4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCCaptureReference@@@std@@EEAAXXZ @ 0x18011A880 (-_Destroy@-$_Ref_count_obj2@VCCaptureReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x18011A6EC (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 */

// Hidden C++ exception states: #wind=1
CCaptureReference *__fastcall CCaptureReference::`scalar deleting destructor'(struct _Mtx_internal_imp_t **this)
{
  struct _Mtx_internal_imp_t *v2; // rdi
  char v3; // si
  char v4; // bp
  unsigned int v5; // r14d
  int v6; // eax
  __int64 v7; // r9
  char v9; // [rsp+20h] [rbp-18h]

  v2 = *this;
  v3 = *((_BYTE *)this + 13);
  v4 = *((_BYTE *)this + 12);
  v5 = *((_DWORD *)this + 2);
  v6 = _Mtx_lock(*this);
  if ( v6 )
  {
    std::_Throw_C_error(v6);
    __debugbreak();
  }
  v9 = v3;
  LOBYTE(v7) = v4;
  CCaptureNotifier::UpdateAudioCaptureStatus(v2, 1LL, v5, v7, v9);
  _Mtx_unlock(v2);
  return (CCaptureReference *)this;
}
