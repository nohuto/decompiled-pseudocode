/*
 * XREFs of ??$_Traits_find_first_not_of@U?$char_traits@D@std@@@std@@YA_KQEBD_K101U?$integral_constant@_N$00@0@@Z @ 0x18008F3B0
 * Callers:
 *     ?ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV?$basic_istringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAULoaderResult@123@@Z @ 0x180090A38 (-ImportFormat_IridasLook@ColorTransform@Engine@Spectre@@AEBAXAEAV-$basic_istringstream@DU-$char_.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 */

__int64 __fastcall std::_Traits_find_first_not_of<std::char_traits<char>>(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  char *i; // r8
  __int64 v8; // rax
  unsigned __int8 *j; // rcx
  _BYTE v11[256]; // [rsp+20h] [rbp-118h] BYREF

  if ( a2 )
  {
    memset_0(v11, 0, sizeof(v11));
    for ( i = " \t"; i != &asc_1801150D8[a5]; ++i )
    {
      v8 = (unsigned __int8)*i;
      v11[v8] = 1;
    }
    for ( j = a1; j < &a1[a2]; ++j )
    {
      if ( !v11[*j] )
        return j - a1;
    }
  }
  return -1LL;
}
