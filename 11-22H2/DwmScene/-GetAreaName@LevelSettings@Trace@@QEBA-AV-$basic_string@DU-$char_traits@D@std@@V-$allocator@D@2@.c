/*
 * XREFs of ?GetAreaName@LevelSettings@Trace@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x18001D4F4
 * Callers:
 *     ?Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z @ 0x18001D938 (-Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

_QWORD *__fastcall Trace::LevelSettings::GetAreaName(__int64 a1, _QWORD *a2)
{
  std::string::string(a2, *(_QWORD *)(a1 + 16));
  return a2;
}
