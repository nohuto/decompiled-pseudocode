/*
 * XREFs of ?SubscribeToServices@ApplicationContainerActivationComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180633550
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VApplicationContainerActivation@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VApplicationContainerActivation@@$0A@@12@@Z @ 0x18062DA88 (--$MakeAndInitialize@V-$SimpleClassFactory@VApplicationContainerActivation@@$0A@@WRL@Microsoft@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@KP6AJK@Z$1?CoRevokeClassObject@@YAJK@ZU?$integral_constant@_K$0A@@wistd@@KK$0A@$$T@details@wil@@@details@wil@@QEAAXK@Z @ 0x180633828 (-reset@-$unique_storage@U-$resource_policy@KP6AJK@Z$1-CoRevokeClassObject@@YAJK@ZU-$integral_con.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationContainerActivationComponent::SubscribeToServices(
        ApplicationContainerActivationComponent *this,
        struct IServiceProvider *a2)
{
  int v3; // eax
  DWORD *v4; // rbx
  HRESULT v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  int lpdwRegister; // [rsp+20h] [rbp-18h]
  int lpdwRegistera; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPUNKNOWN pUnk; // [rsp+50h] [rbp+18h] BYREF

  pUnk = 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<ApplicationContainerActivation,0>,Microsoft::WRL::SimpleClassFactory<ApplicationContainerActivation,0>,>(&pUnk);
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x97,
        (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        (const char *)(unsigned int)v3,
        lpdwRegister);
    v4 = (DWORD *)((char *)this + 120);
    wil::details::unique_storage<wil::details::resource_policy<unsigned long,long (*)(unsigned long),&long CoRevokeClassObject(unsigned long),wistd::integral_constant<unsigned __int64,0>,unsigned long,unsigned long,0,std::nullptr_t>>::reset(
      v4,
      0LL);
    v5 = CoRegisterClassObject(&GUID_548876b0_5c9b_4808_8308_ba96a374b004, pUnk, 4u, 1u, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x99,
        (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
        (const char *)(unsigned int)v5,
        lpdwRegistera);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&pUnk);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9B,
                           (int)"pcshell\\twinui\\vailactivation\\lib\\applicationcontaineractivation.cpp",
                           v6);
  }
  return result;
}
