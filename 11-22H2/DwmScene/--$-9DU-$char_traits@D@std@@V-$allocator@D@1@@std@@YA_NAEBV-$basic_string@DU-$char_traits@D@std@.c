/*
 * XREFs of ??$?9DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z @ 0x18001C538
 * Callers:
 *     ?CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z @ 0x18005B360 (-CompareInternal@Camera@Engine@Spectre@@MEBA_NAEBVComponent@23@@Z.c)
 *     ?CompareInternal@Component@Engine@Spectre@@MEBA_NAEBV123@@Z @ 0x180081340 (-CompareInternal@Component@Engine@Spectre@@MEBA_NAEBV123@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18000CA6D (memcmp_0.c)
 */

char __fastcall std::operator!=<char>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  size_t v3; // r8
  int v4; // eax
  char v5; // cl

  v2 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  v3 = a1[2];
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  if ( v3 != v2 )
    return 1;
  v4 = memcmp_0(a1, a2, v3);
  v5 = 0;
  if ( v4 )
    return 1;
  return v5;
}
