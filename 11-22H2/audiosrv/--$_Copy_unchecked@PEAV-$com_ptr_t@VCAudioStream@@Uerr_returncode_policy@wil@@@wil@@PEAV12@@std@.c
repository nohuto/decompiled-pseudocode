/*
 * XREFs of ??$_Copy_unchecked@PEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@PEAV12@00@Z @ 0x180051244
 * Callers:
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800510AC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Copy_unchecked<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioStream,wil::err_returncode_policy> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi

  for ( i = a1; i != a2; ++i )
  {
    v7 = *i;
    v8 = *a3;
    *a3 = *i;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    ++a3;
  }
  return a3;
}
