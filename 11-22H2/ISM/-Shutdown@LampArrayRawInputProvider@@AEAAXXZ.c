/*
 * XREFs of ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800F87B8
 * Callers:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180019E50 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800627B4 (-EnsureLampArrayThreadState@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z @ 0x180062C30 (-OnSessionNotification@LampArrayRawInputProvider@@UEAAJII@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ??$?0PEAX$$V@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@$$QEAPEAX@Z @ 0x18005A290 (--$-0PEAX$$V@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseH.c)
 *     ??$?9V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x180061F38 (--$-9V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?Reset@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@QEAAKXZ @ 0x180062ED0 (-Reset@-$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@QEAAKXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800A9E6C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?Clear@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAXXZ @ 0x1800F7F74 (-Clear@-$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAXXZ.c)
 *     ?Clear@?$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXXZ @ 0x1800F7FBC (-Clear@-$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXXZ.c)
 */

void __fastcall LampArrayRawInputProvider::Shutdown(ULONG_PTR dwData)
{
  HANDLE hHandle; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = _InterlockedExchange64((volatile __int64 *)(dwData + 176), 0LL);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
    &hHandle,
    &v3);
  if ( wil::operator!=<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hHandle)
    && WaitForSingleObject(hHandle, 0) == 258
    && QueueUserAPC((PAPCFUNC)LampArrayRawInputProvider::TerminateWorkerThreadApc, hHandle, dwData) )
  {
    WaitForSingleObject(hHandle, 0x9C4u);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hHandle);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
  {
    Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::Reset((__int64 *)(dwData + 48));
    *(_BYTE *)(dwData + 184) = 0;
    *(_BYTE *)(dwData + 312) = 0;
    NtList<LampArrayRawInputProvider::LampArrayDeviceListEntry>::Clear((ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)(dwData + 72));
    NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Clear((LampArrayRawInputProvider::LampArrayClientListEntry **)(dwData + 96));
  }
}
