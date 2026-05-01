/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@KP6AJK@Z$1?CoRevokeClassObject@@YAJK@ZU?$integral_constant@_K$0A@@wistd@@KK$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180571568
 * Callers:
 *     ??1ApplicationContainerActivationComponent@@UEAA@XZ @ 0x180571610 (--1ApplicationContainerActivationComponent@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned long,long (*)(unsigned long),&long CoRevokeClassObject(unsigned long),wistd::integral_constant<unsigned __int64,0>,unsigned long,unsigned long,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned long,long (*)(unsigned long),&long CoRevokeClassObject(unsigned long),wistd::integral_constant<unsigned __int64,0>,unsigned long,unsigned long,0,std::nullptr_t>>(
        DWORD *a1)
{
  DWORD v1; // ecx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return CoRevokeClassObject(v1);
  return result;
}
