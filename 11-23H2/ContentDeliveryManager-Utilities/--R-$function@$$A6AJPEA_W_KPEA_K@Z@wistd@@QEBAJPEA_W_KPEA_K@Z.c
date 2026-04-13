/*
 * XREFs of ??R?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@QEBAJPEA_W_KPEA_K@Z @ 0x1800BDE98
 * Callers:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAE@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@@Z @ 0x1800BD190 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 wistd::function<long (wchar_t *,unsigned __int64,unsigned __int64 *)>::operator()(__int64 a1, ...)
{
  __int64 v1; // rcx
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  va_list va; // [rsp+48h] [rbp+10h]
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF
  va_list va1; // [rsp+50h] [rbp+18h]
  va_list va2; // [rsp+58h] [rbp+20h] BYREF

  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v3 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v5 = va_arg(va2, _QWORD);
  v1 = *(_QWORD *)(a1 + 112);
  if ( !v1 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v1 + 32LL))(
           v1,
           (__int64 *)va,
           (__int64 *)va1,
           (__int64 *)va2);
}
