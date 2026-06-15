/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_________lambda_6c82d168c37c23bf8bb15eab1fa87461___ @ 0x1800DE984
 * Callers:
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800DF760 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_6c82d168c37c23bf8bb15eab1fa87461_::operator() @ 0x1800DEDE8 (_lambda_6c82d168c37c23bf8bb15eab1fa87461_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CAudioStream_wil::err_returncode_policy_________lambda_6c82d168c37c23bf8bb15eab1fa87461___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx

  for ( i = a2; i != a3; ++i )
  {
    if ( (unsigned __int8)lambda_6c82d168c37c23bf8bb15eab1fa87461_::operator()(a4, i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( !(unsigned __int8)lambda_6c82d168c37c23bf8bb15eab1fa87461_::operator()(a4, j) )
      {
        v9 = *j;
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
