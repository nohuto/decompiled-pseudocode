/*
 * XREFs of ?ShutdownServices@ApplicationContainerActivationComponent@@UEAAJPEAUIProfferService@@@Z @ 0x180632360
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@KP6AJK@Z$1?CoRevokeClassObject@@YAJK@ZU?$integral_constant@_K$0A@@wistd@@KK$0A@$$T@details@wil@@@details@wil@@QEAAXK@Z @ 0x180633828 (-reset@-$unique_storage@U-$resource_policy@KP6AJK@Z$1-CoRevokeClassObject@@YAJK@ZU-$integral_con.c)
 */

__int64 __fastcall ApplicationContainerActivationComponent::ShutdownServices(
        ApplicationContainerActivationComponent *this,
        struct IProfferService *a2)
{
  wil::details::unique_storage<wil::details::resource_policy<unsigned long,long (*)(unsigned long),&long CoRevokeClassObject(unsigned long),wistd::integral_constant<unsigned __int64,0>,unsigned long,unsigned long,0,std::nullptr_t>>::reset(
    (char *)this + 120,
    0LL);
  return 0LL;
}
