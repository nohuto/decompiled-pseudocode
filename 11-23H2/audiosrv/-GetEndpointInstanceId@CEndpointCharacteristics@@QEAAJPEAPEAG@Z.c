/*
 * XREFs of ?GetEndpointInstanceId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18014CA10
 * Callers:
 *     AudioServerGetMixFormat @ 0x1801221C0 (AudioServerGetMixFormat.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetEndpointInstanceId(
        CEndpointCharacteristics *this,
        unsigned __int16 **a2)
{
  int InstanceIdFromMMDeviceId; // ebx
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  InstanceIdFromMMDeviceId = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 5) + 40LL))(
                               *((_QWORD *)this + 5),
                               &pv);
  if ( InstanceIdFromMMDeviceId >= 0 )
    InstanceIdFromMMDeviceId = mmdDevGetInstanceIdFromMMDeviceId(pv, a2);
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)InstanceIdFromMMDeviceId;
}
