/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@0@Z @ 0x18072C23C
 * Callers:
 *     ?AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18072C3D0 (-AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV-$basic_stri.c)
 * Callees:
 *     ?_Xlen_string@std@@YAXXZ @ 0x180392130 (-_Xlen_string@std@@YAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBG_K23@Z @ 0x1804559C0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@U_String_const_ea_1804559C0.c)
 */

char *__fastcall std::operator+<unsigned short>(char *a1, _QWORD *a2, _QWORD *Src)
{
  unsigned __int64 v3; // r9
  __int64 v5; // rcx

  v3 = Src[2];
  v5 = a2[2];
  if ( 0x7FFFFFFFFFFFFFFELL - v5 < v3 )
    std::_Xlen_string();
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  if ( Src[3] >= 8uLL )
    Src = (_QWORD *)*Src;
  std::wstring::wstring(a1, (__int64)a2, (__int64)Src, a2, v5, Src, v3);
  return a1;
}
