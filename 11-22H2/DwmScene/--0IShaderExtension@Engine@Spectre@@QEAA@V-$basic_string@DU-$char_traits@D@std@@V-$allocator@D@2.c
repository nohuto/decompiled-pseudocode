/*
 * XREFs of ??0IShaderExtension@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18005F76C
 * Callers:
 *     ??$make_shared@VIShaderExtension@Engine@Spectre@@AEAY0BA@$$CBD@std@@YA?AV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@0@AEAY0BA@$$CBD@Z @ 0x18005F4E8 (--$make_shared@VIShaderExtension@Engine@Spectre@@AEAY0BA@$$CBD@std@@YA-AV-$shared_ptr@VIShaderEx.c)
 *     ??0ImageProcessingShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007E7D0 (--0ImageProcessingShaderExtension@Engine@Spectre@@QEAA@XZ.c)
 *     ??0SymbolShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007F308 (--0SymbolShaderExtension@Engine@Spectre@@QEAA@XZ.c)
 *     ??0FontShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007F6FC (--0FontShaderExtension@Engine@Spectre@@QEAA@XZ.c)
 *     ??0BackgroundUnlitShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007FD04 (--0BackgroundUnlitShaderExtension@Engine@Spectre@@QEAA@XZ.c)
 *     ??0BaseShaderExtension@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180098884 (--0BaseShaderExtension@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::IShaderExtension::IShaderExtension(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::IShaderExtension::`vftable';
  std::string::string((_QWORD *)(a1 + 24), a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 15LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 104) = 1;
  std::string::_Tidy_deallocate(a2);
  return a1;
}
