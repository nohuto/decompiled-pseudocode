/*
 * XREFs of ?RuntimeClassInitialize@ApplicationContainerActivationPolicy@@QEAAJPEAUIApplicationContainerActivationComponent@@_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18063218C
 * Callers:
 *     ??$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationContainerActivationComponent@@AEA_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationContainerActivationPolicy@@$$QEAPEAUIApplicationContainerActivationComponent@@AEA_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180633940 (--$MakeAndInitialize@VApplicationContainerActivationPolicy@@V1@PEAUIApplicationCont_ea_180633940.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??4?$com_ptr_t@UIApplicationContainerActivationComponent@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationContainerActivationComponent@@@Z @ 0x18062F4FC (--4-$com_ptr_t@UIApplicationContainerActivationComponent@@Uerr_exception_policy@wil@@@wil@@QEAAA.c)
 */

__int64 __fastcall ApplicationContainerActivationPolicy::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  unsigned __int64 v7; // r8
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::com_ptr_t<IApplicationContainerActivationComponent,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 160),
    a2);
  *(_BYTE *)(a1 + 104) = a3;
  if ( (_QWORD *)(a1 + 128) != a4 )
  {
    v7 = a4[2];
    if ( a4[3] >= 8uLL )
      a4 = (_QWORD *)*a4;
    try
    {
      std::wstring::assign((char *)(a1 + 128), a4, v7);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x38,
                             (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
                             v8);
    }
  }
  return 0LL;
}
