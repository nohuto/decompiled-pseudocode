/*
 * XREFs of _wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short___void___(__cdecl_)(void__)_&LocalFree_wistd::integral_constant_unsigned___int64_0__unsigned_short___unsigned_short___0_std::nullptr_t________::_1_::dtor$0 @ 0x18056AD6A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18044A534 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 */

HLOCAL __fastcall wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short___void______cdecl___void_____LocalFree_wistd::integral_constant_unsigned___int64_0__unsigned_short___unsigned_short___0_std::nullptr_t________::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  HLOCAL result; // rax

  result = (HLOCAL)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(*(void ***)(a2 + 64));
  }
  return result;
}
