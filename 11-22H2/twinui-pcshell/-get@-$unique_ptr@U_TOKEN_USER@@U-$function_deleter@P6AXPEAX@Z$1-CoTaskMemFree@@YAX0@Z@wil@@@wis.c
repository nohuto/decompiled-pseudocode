/*
 * XREFs of ?get@?$unique_ptr@U_TOKEN_USER@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEBAPEAU_TOKEN_USER@@XZ @ 0x1800F1AD0
 * Callers:
 *     GetSidStringFromToken @ 0x1800F199C (GetSidStringFromToken.c)
 * Callees:
 *     ?__get@?$__compressed_pair_elem@PEAU_TOKEN_USER@@$0A@$0A@@wistd@@QEBAAEBQEAU_TOKEN_USER@@XZ @ 0x1802D9DBE (-__get@-$__compressed_pair_elem@PEAU_TOKEN_USER@@$0A@$0A@@wistd@@QEBAAEBQEAU_TOKEN_USER@@XZ.c)
 */

__int64 wistd::unique_ptr<_TOKEN_USER,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::get()
{
  return *(_QWORD *)wistd::__compressed_pair_elem<_TOKEN_USER *,0,0>::__get();
}
