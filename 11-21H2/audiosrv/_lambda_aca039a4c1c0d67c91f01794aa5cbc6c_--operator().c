/*
 * XREFs of _lambda_aca039a4c1c0d67c91f01794aa5cbc6c_::operator() @ 0x1800EDB58
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_aca039a4c1c0d67c91f01794aa5cbc6c___ @ 0x1800ED5D0 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800ED5D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_aca039a4c1c0d67c91f01794aa5cbc6c_::operator()(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *result; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  _BYTE v9[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v9);
  v5 = *v4 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *v4 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v5 = v4[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( !v5 )
    **(_BYTE **)a1 = 1;
  result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 40LL))(*a2, v9);
  v7 = *(_QWORD **)(a1 + 8);
  v8 = *result - *v7;
  if ( *result == *v7 )
    v8 = result[1] - v7[1];
  if ( !v8 )
  {
    result = *(_QWORD **)(a1 + 16);
    *(_BYTE *)result = 1;
  }
  return result;
}
