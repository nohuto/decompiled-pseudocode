/*
 * XREFs of ??0BackgroundUnlitShaderExtension@Engine@Spectre@@QEAA@XZ @ 0x18007FD04
 * Callers:
 *     ??$make_shared@VBackgroundUnlitShaderExtension@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@VBackgroundUnlitShaderExtension@Engine@Spectre@@@0@XZ @ 0x180030084 (--$make_shared@VBackgroundUnlitShaderExtension@Engine@Spectre@@$$V@std@@YA-AV-$shared_ptr@VBackg.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??0IShaderExtension@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18005F76C (--0IShaderExtension@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 *     ??$?0V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@$0A@@?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@std@@QEAA@PEAULightConstants@Engine@Spectre@@$$QEAV?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@1@@Z @ 0x18007C758 (--$-0V-$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@$0A@@-$unique_ptr@ULightConsta.c)
 *     std::_Test_callable__lambda_bf891fdd623fe213d977bbf9c972eb66___ @ 0x18007FCF8 (std--_Test_callable__lambda_bf891fdd623fe213d977bbf9c972eb66___.c)
 */

// Hidden C++ exception states: #wind=2
Spectre::Engine::BackgroundUnlitShaderExtension *__fastcall Spectre::Engine::BackgroundUnlitShaderExtension::BackgroundUnlitShaderExtension(
        Spectre::Engine::BackgroundUnlitShaderExtension *this)
{
  _QWORD *v2; // rax
  void *v3; // rax
  __int64 v4; // rdx
  _QWORD v6[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-20h]

  v2 = std::string::string(v6, (__int64)&Spectre::Engine::BackgroundUnlitShaderExtension::kShaderFamilyName);
  Spectre::Engine::IShaderExtension::IShaderExtension((__int64)this, (__int64)v2);
  *(_QWORD *)this = &Spectre::Engine::BackgroundUnlitShaderExtension::`vftable';
  v7 = 0LL;
  if ( std::_Test_callable__lambda_bf891fdd623fe213d977bbf9c972eb66___() )
  {
    v6[0] = &std::_Func_impl_no_alloc<_lambda_bf891fdd623fe213d977bbf9c972eb66_,void,Spectre::Engine::LightConstants *>::`vftable';
    v7 = v6;
  }
  v3 = _aligned_malloc(0x250uLL, 0x10uLL);
  std::unique_ptr<Spectre::Engine::LightConstants,std::function<void (Spectre::Engine::LightConstants *)>>::unique_ptr<Spectre::Engine::LightConstants,std::function<void (Spectre::Engine::LightConstants *)>>(
    (__int64)this + 112,
    (__int64)v3,
    (__int64)v6);
  std::_Func_class<void,>::_Tidy((__int64)v6, v4);
  return this;
}
