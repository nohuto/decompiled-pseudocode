/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD@Z @ 0x180043730
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x18002AD04 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD@Z.c)
 * Callees:
 *     ?length@?$char_traits@D@std@@SA_KPEBD@Z @ 0x180044BE8 (-length@-$char_traits@D@std@@SA_KPEBD@Z.c)
 */

__int64 __fastcall std::string::assign(void *a1, void *Src)
{
  size_t v4; // rax

  v4 = std::char_traits<char>::length(Src);
  return std::string::assign(a1, Src, v4);
}
