/*
 * XREFs of ??R?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEBA_NPEAX_K01I@Z @ 0x18000B6E8
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000CBA0 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180006534 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18000E320 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::operator()(
        __int64 a1,
        ...)
{
  __int64 v1; // rcx
  __int64 v3; // [rsp+58h] [rbp+10h] BYREF
  va_list va; // [rsp+58h] [rbp+10h]
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF
  va_list va1; // [rsp+60h] [rbp+18h]
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF
  va_list va2; // [rsp+68h] [rbp+20h]
  __int64 v9; // [rsp+70h] [rbp+28h] BYREF
  va_list va3; // [rsp+70h] [rbp+28h]
  va_list va4; // [rsp+78h] [rbp+30h] BYREF

  va_start(va4, a1);
  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v3 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v5 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v7 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v9 = va_arg(va4, _QWORD);
  v1 = *(_QWORD *)(a1 + 112);
  if ( !v1 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, char *))(*(_QWORD *)v1 + 32LL))(
           v1,
           (__int64 *)va,
           (__int64 *)va1,
           (__int64 *)va2,
           (__int64 *)va3,
           va4);
}
