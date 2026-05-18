/*
 * XREFs of ?SetDepthBufferReadable@Camera@Engine@Spectre@@QEAAXW4ShaderAccessMode@DeviceDepthBuffer@23@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@11@Z @ 0x18005D098
 * Callers:
 *     ?UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@@Z @ 0x18006A614 (-UpdateGeneralSettings@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800134DC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::Camera::SetDepthBufferReadable(
        __int64 a1,
        int a2,
        __int64 a3,
        void **a4,
        void **a5,
        void **a6)
{
  *(_DWORD *)(a1 + 172) = a2;
  *(_DWORD *)(a1 + 176) = 0;
  std::string::operator=((void **)(a1 + 184), a4);
  std::string::operator=((void **)(a1 + 216), a5);
  std::string::operator=((void **)(a1 + 248), a6);
  std::string::_Tidy_deallocate((__int64)a4);
  std::string::_Tidy_deallocate((__int64)a5);
  std::string::_Tidy_deallocate((__int64)a6);
}
