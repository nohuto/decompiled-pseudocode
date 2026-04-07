/*
 * XREFs of ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x1800EF108
 * Callers:
 *     ?search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z @ 0x1800F3680 (-search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F41F4 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z @ 0x1800F320C (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KQEBD0@Z.c)
 */

_QWORD *__fastcall std::operator+<char>(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  v5 = std::string::insert(a3);
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 15LL;
  *(_BYTE *)v5 = 0;
  return a1;
}
