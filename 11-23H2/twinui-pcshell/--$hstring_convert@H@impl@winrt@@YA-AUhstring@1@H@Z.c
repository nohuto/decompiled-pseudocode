/*
 * XREFs of ??$hstring_convert@H@impl@winrt@@YA?AUhstring@1@H@Z @ 0x180735910
 * Callers:
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x180736C60 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800DC390 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Integer_to_chars@H@std@@YA?AUto_chars_result@0@PEADQEADHH@Z @ 0x180735480 (--$_Integer_to_chars@H@std@@YA-AUto_chars_result@0@PEADQEADHH@Z.c)
 */

struct winrt::impl::hstring_header **__fastcall winrt::impl::hstring_convert<int>(
        struct winrt::impl::hstring_header **a1,
        int a2)
{
  char *v3; // rcx
  char *i; // rdx
  __int16 v5; // ax
  char *v7; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v8[32]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v9[8]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v10[64]; // [rsp+70h] [rbp-58h] BYREF

  v7 = (char *)a1;
  std::_Integer_to_chars<int>((__int64)&v7, v8, v9, a2);
  v3 = v10;
  for ( i = v8; i != v7; v3 += 2 )
  {
    v5 = *i++;
    *(_WORD *)v3 = v5;
  }
  *a1 = winrt::impl::create_hstring_on_heap((winrt::impl *)v10, (winrt::impl *)(unsigned int)((v3 - v10) >> 1));
  return a1;
}
