/*
 * XREFs of _lambda_cfabe4c61bc15f8a85c19fe8f19b6830_::operator() @ 0x18011C820
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_cfabe4c61bc15f8a85c19fe8f19b6830___ @ 0x18011C244 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18011C244.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_cfabe4c61bc15f8a85c19fe8f19b6830_::operator()(__int64 a1, _QWORD *a2)
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
