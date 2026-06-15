/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ @ 0x180024320
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180022970 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall std::_Ref_count_obj2<CPlaybackReference>::_Destroy(__int64 a1)
{
  _WORD *v1; // rdi
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax

  v1 = (_WORD *)(a1 + 16);
  v2 = *(struct _Mtx_internal_imp_t **)(a1 + 128);
  v3 = _Mtx_lock(v2);
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
    JUMPOUT(0x1800847A5LL);
  }
  CPlaybackNotifier::UpdateAudioPlaybackStatus((__int64)v2, 1, v1);
  return _Mtx_unlock(v2);
}
