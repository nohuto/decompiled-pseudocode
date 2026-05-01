/*
 * XREFs of ?get@?$unique_ptr@U_TOKEN_USER@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEBAPEAU_TOKEN_USER@@XZ @ 0x180108378
 * Callers:
 *     GetSidStringFromToken @ 0x180108224 (GetSidStringFromToken.c)
 * Callees:
 *     ?__get@?$__compressed_pair_elem@PEAU_TOKEN_USER@@$0A@$0A@@wistd@@QEBAAEBQEAU_TOKEN_USER@@XZ @ 0x18044C45C (-__get@-$__compressed_pair_elem@PEAU_TOKEN_USER@@$0A@$0A@@wistd@@QEBAAEBQEAU_TOKEN_USER@@XZ.c)
 */

__int64 __fastcall wistd::unique_ptr<_TOKEN_USER,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::get(
        __int64 a1)
{
  return *(_QWORD *)wistd::__compressed_pair_elem<_TOKEN_USER *,0,0>::__get(a1);
}
