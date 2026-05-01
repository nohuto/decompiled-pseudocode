/*
 * XREFs of ??0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z @ 0x18057E92C
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x18057E3E4 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0_System_error@std@@QEAA@AEBV01@@Z @ 0x18057E8EC (--0_System_error@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
std::filesystem::filesystem_error *__fastcall std::filesystem::filesystem_error::filesystem_error(
        std::filesystem::filesystem_error *this,
        const struct std::filesystem::filesystem_error *a2)
{
  std::_System_error::_System_error(this, a2);
  *(_QWORD *)this = &std::filesystem::filesystem_error::`vftable';
  std::wstring::wstring((__int64)this + 40, (__int64)a2 + 40);
  std::wstring::wstring((__int64)this + 72, (__int64)a2 + 72);
  std::string::string((_QWORD *)this + 13, (__int64)a2 + 104);
  return this;
}
