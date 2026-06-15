/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioStreamVolumeCallback_wil::err_returncode_policy_________lambda_91f83696ad2c271a79dfe88b6adf0c8f___ @ 0x1800EB180
 * Callers:
 *     ?UnregisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x1800EE200 (-UnregisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_IAudioStreamVolumeCallback_wil::err_returncode_policy_________lambda_91f83696ad2c271a79dfe88b6adf0c8f___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *i; // rsi
  __int64 *j; // r14
  __int64 v9; // rax
  __int64 v10; // rcx

  for ( i = a2; i != a3; ++i )
  {
    if ( *i == *a4 )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      v9 = *j;
      if ( *j != *a4 )
      {
        *j = 0LL;
        v10 = *i;
        *i = v9;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        ++i;
      }
    }
  }
  *a1 = i;
  return a1;
}
