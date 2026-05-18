/*
 * XREFs of ??0SceneAttributeManager@Engine@Spectre@@QEAA@XZ @ 0x180070744
 * Callers:
 *     ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518 (--0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@st.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180011BA0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C40 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x18001C668 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C668.c)
 *     ??$_Integral_to_string@DH@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@H@Z @ 0x180027C00 (--$_Integral_to_string@DH@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@H@.c)
 */

// Hidden C++ exception states: #wind=2
Spectre::Engine::SceneAttributeManager *__fastcall Spectre::Engine::SceneAttributeManager::SceneAttributeManager(
        Spectre::Engine::SceneAttributeManager *this)
{
  int v2; // edi
  Spectre::Engine::SceneAttributeManager *v3; // r14
  _OWORD *v4; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // rax
  _BYTE *v7; // rax
  _BYTE v9[32]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-48h] BYREF

  `eh vector constructor iterator'(
    (char *)this,
    40LL,
    64LL,
    (void (*)(void *))Spectre::Engine::SceneAttributeManager::AttributeInfo::AttributeInfo);
  v2 = 0;
  v3 = this;
  v4 = (_OWORD *)((char *)this + 8);
  v5 = 31LL;
  do
  {
    std::_Integral_to_string<char,int>((__int64)v9, v2);
    v6 = std::operator+<char>(v10, (__int64)"System", v9);
    std::string::operator=(v4, (__int64)v6);
    std::string::_Tidy_deallocate((__int64)v10);
    std::string::_Tidy_deallocate((__int64)v9);
    *(_BYTE *)v3 = 1;
    ++v2;
    v4 = (_OWORD *)((char *)v4 + 40);
    v3 = (Spectre::Engine::SceneAttributeManager *)((char *)v3 + 40);
  }
  while ( v2 <= 31 );
  std::string::assign((void **)this + 1, "System0_Enable", 0xEuLL);
  std::string::assign((void **)this + 6, "System1_Visible", 0xFuLL);
  std::string::assign((void **)this + 11, "System2_VisibleTree", 0x13uLL);
  std::string::assign((void **)this + 16, "System3_Renderable", 0x12uLL);
  std::string::assign((void **)this + 21, "System4_Debug", 0xDuLL);
  std::string::assign((void **)this + 26, "System5_Loading", 0xFuLL);
  std::string::assign((void **)this + 41, "System8_Transparent", 0x13uLL);
  std::string::assign((void **)this + 46, "System9_OpaqueMask", 0x12uLL);
  std::string::assign((void **)this + 81, "System16_ShadowCaster", 0x15uLL);
  v7 = (char *)this + 1280;
  do
  {
    *v7 = 0;
    v7 += 40;
    --v5;
  }
  while ( v5 );
  return this;
}
