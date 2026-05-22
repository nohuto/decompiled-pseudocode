/*
 * XREFs of ?InternalRelease@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18005A954
 * Callers:
 *     ??1?$ComPtr@UIContextualProcessorEventStreamEnded@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A8F4 (--1-$ComPtr@UIContextualProcessorEventStreamEnded@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x18005A90C (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?OnSessionStatusNotification@InputProviderManager@@QEAAJII@Z @ 0x180061C1C (-OnSessionStatusNotification@InputProviderManager@@QEAAJII@Z.c)
 *     ?EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ @ 0x180062544 (-EnsureAmbientManager@LampArrayRawInputProvider@@AEAAJXZ.c)
 *     ?Reset@?$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@QEAAKXZ @ 0x180062ED0 (-Reset@-$ComPtr@UIAmbientManager@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize@VGamepadInterceptionHelper@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamepadInterceptionHelper@@@Z @ 0x180068CAC (--$MakeAndInitialize@VGamepadInterceptionHelper@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamepad.c)
 *     ?Create@GamepadInterceptionHelper@@SA?AV?$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ @ 0x18006A864 (-Create@GamepadInterceptionHelper@@SA-AV-$ComPtr@VGamepadInterceptionHelper@@@WRL@Microsoft@@XZ.c)
 *     ?GetChassisType@DevicePostureHelpers@@YAJPEAW4ChassisType@1@@Z @ 0x18006E5A4 (-GetChassisType@DevicePostureHelpers@@YAJPEAW4ChassisType@1@@Z.c)
 *     ?EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ @ 0x18007745C (-EventStreamEndedAndProcessFinalDecision@ContextualProcessorBuffer@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Devices::Lights::Internal::IAmbientManager>::InternalRelease(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
