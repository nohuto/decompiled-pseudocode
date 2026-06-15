/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008210C
 * Callers:
 *     AudioServerCreateStream @ 0x180011CB0 (AudioServerCreateStream.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D6A40 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     _AudioEffectsWatcher::RuntimeClassInitialize_::_1_::dtor$3 @ 0x1800D6F38 (_AudioEffectsWatcher--RuntimeClassInitialize_--_1_--dtor$3.c)
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800E9F7C (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 *     _HandleAccessChangeNotification_::_1_::dtor$1 @ 0x1800EA0F2 (_HandleAccessChangeNotification_--_1_--dtor$1.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800EDE70 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 *     _CAudioStream::SetUpAudioEffectsChangedWnfState_::_1_::dtor$0 @ 0x1800EE03E (_CAudioStream--SetUpAudioEffectsChangedWnfState_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  HLOCAL result; // rax

  v1 = *a1;
  if ( v1 )
    return LocalFree(v1);
  return result;
}
