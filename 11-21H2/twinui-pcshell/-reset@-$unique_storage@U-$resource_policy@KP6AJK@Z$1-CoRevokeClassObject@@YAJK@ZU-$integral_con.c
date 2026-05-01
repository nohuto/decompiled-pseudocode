/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@KP6AJK@Z$1?CoRevokeClassObject@@YAJK@ZU?$integral_constant@_K$0A@@wistd@@KK$0A@$$T@details@wil@@@details@wil@@QEAAXK@Z @ 0x1805757DC
 * Callers:
 *     ?ShutdownServices@ApplicationContainerActivationComponent@@UEAAJPEAUIProfferService@@@Z @ 0x180574390 (-ShutdownServices@ApplicationContainerActivationComponent@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?SubscribeToServices@ApplicationContainerActivationComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180575540 (-SubscribeToServices@ApplicationContainerActivationComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned long,long (*)(unsigned long),&long CoRevokeClassObject(unsigned long),wistd::integral_constant<unsigned __int64,0>,unsigned long,unsigned long,0,std::nullptr_t>>::reset(
        DWORD *a1,
        DWORD a2)
{
  DWORD v4; // esi
  DWORD LastError; // ebx

  v4 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    CoRevokeClassObject(v4);
    SetLastError(LastError);
  }
  *a1 = a2;
}
