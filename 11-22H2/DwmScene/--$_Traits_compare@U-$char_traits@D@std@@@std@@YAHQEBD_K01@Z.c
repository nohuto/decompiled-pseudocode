/*
 * XREFs of ??$_Traits_compare@U?$char_traits@D@std@@@std@@YAHQEBD_K01@Z @ 0x18001CCBC
 * Callers:
 *     ??$?MDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z @ 0x18001C734 (--$-MDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA_NAEBV-$basic_string@DU-$char_traits@D@std@.c)
 * Callees:
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 */

char __fastcall std::_Traits_compare<std::char_traits<char>>(const void *a1, size_t a2, const void *a3, size_t a4)
{
  size_t v5; // r8
  int v8; // ecx

  v5 = a4;
  if ( a4 >= a2 )
    v5 = a2;
  v8 = memcmp_0(a1, a3, v5);
  if ( v8 )
    return v8;
  if ( a2 >= a4 )
    return a2 > a4;
  return -1;
}
