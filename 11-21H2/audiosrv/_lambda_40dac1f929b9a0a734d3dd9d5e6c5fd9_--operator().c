/*
 * XREFs of _lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9_::operator() @ 0x1800EDA4C
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9___ @ 0x1800ED574 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800ED574.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall lambda_40dac1f929b9a0a734d3dd9d5e6c5fd9_::operator()(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  _BYTE v11[16]; // [rsp+20h] [rbp-38h] BYREF

  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v11);
  v5 = *result - *a1;
  if ( *result == *a1 )
    v5 = result[1] - a1[1];
  if ( !v5 )
  {
    v6 = (_QWORD *)a1[2];
    if ( !*v6
      || (v7 = *a2,
          v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 32LL))(*v6),
          result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7),
          (__int64)result < v8) )
    {
      v9 = *a2;
      v10 = *v6;
      *v6 = *a2;
      if ( v9 )
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      if ( v10 )
        return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return result;
}
