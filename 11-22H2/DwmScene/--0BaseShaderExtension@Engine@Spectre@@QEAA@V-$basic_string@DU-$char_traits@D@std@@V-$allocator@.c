/*
 * XREFs of ??0BaseShaderExtension@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180098884
 * Callers:
 *     ??0StandardShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007CA64 (--0StandardShaderExtension@Engine@Spectre@@QEAA@XZ.c)
 *     ??0UnlitShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007FA68 (--0UnlitShaderExtension@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0IShaderExtension@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18005F76C (--0IShaderExtension@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::BaseShaderExtension::BaseShaderExtension(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD v6[5]; // [rsp+28h] [rbp-40h] BYREF

  v6[4] = a2;
  v4 = std::string::string(v6, a2);
  Spectre::Engine::IShaderExtension::IShaderExtension((__int64)a1, (__int64)v4);
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  std::string::_Tidy_deallocate(a2);
  return a1;
}
