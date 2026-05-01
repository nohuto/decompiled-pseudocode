/*
 * XREFs of ?first@?$__compressed_pair@PEAU_TOKEN_USER@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEBAAEBQEAU_TOKEN_USER@@XZ @ 0x18010836C
 * Callers:
 *     GetSidStringFromToken @ 0x180108224 (GetSidStringFromToken.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wistd::__compressed_pair<_TOKEN_USER *,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::first(
        __int64 a1)
{
  return wistd::__compressed_pair_elem<_TOKEN_USER *,0,0>::__get(a1);
}
