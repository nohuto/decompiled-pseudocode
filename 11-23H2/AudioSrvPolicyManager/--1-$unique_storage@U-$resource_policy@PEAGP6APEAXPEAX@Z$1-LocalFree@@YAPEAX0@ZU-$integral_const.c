/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180015E48
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18002C558 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z @ 0x18003CBFC (-GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$4 @ 0x180047930 (_CApplicationManager--RpcGetProcess_--_1_--dtor$4.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$5 @ 0x180047950 (_CApplicationManager--RpcGetProcess_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
