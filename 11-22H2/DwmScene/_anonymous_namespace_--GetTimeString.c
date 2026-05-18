/*
 * XREFs of _anonymous_namespace_::GetTimeString @ 0x18001D6C8
 * Callers:
 *     ?Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z @ 0x18001D938 (-Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$sprintf_s@$0BAA@@@YAHAEAY0BAA@DPEBDZZ @ 0x18001CE80 (--$sprintf_s@$0BAA@@@YAHAEAY0BAA@DPEBDZZ.c)
 *     _anonymous_namespace_::GetMSCountSinceStartAccurate @ 0x18001D618 (_anonymous_namespace_--GetMSCountSinceStartAccurate.c)
 */

_QWORD *__fastcall anonymous_namespace_::GetTimeString(_QWORD *a1)
{
  unsigned __int64 MSCountSinceStartAccurate; // rax
  char v4[256]; // [rsp+40h] [rbp-118h] BYREF

  MSCountSinceStartAccurate = anonymous_namespace_::GetMSCountSinceStartAccurate();
  sprintf_s<256>(
    v4,
    "%.3d:%.2d:%.2d:%.3d",
    MSCountSinceStartAccurate / 0x3E8 / 0x3C / 0x3C,
    MSCountSinceStartAccurate / 0x3E8 / 0x3C % 0x3C,
    MSCountSinceStartAccurate / 0x3E8 % 0x3C,
    MSCountSinceStartAccurate % 0x3E8);
  std::string::string(a1, (__int64)v4);
  return a1;
}
