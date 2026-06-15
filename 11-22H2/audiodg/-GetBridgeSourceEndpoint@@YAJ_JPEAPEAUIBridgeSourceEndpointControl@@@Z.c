/*
 * XREFs of ?GetBridgeSourceEndpoint@@YAJ_JPEAPEAUIBridgeSourceEndpointControl@@@Z @ 0x1400798B8
 * Callers:
 *     ?CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005DA50 (-CreateStreamInstance@CBridgeSinkProcessNode@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIDevi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E2C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetBridgeSourceEndpoint(__int64 a1, struct IBridgeSourceEndpointControl **a2)
{
  _QWORD *v4; // r14
  __int64 v5; // r15
  unsigned int v6; // esi
  int (__fastcall ***v7)(_QWORD, GUID *, struct IBridgeSourceEndpointControl **); // rbx
  __int64 v8; // rcx
  int v9; // eax
  int (__fastcall *v10)(_QWORD, GUID *, struct IBridgeSourceEndpointControl **); // rdi
  struct IBridgeSourceEndpointControl *v12; // rax
  struct IBridgeSourceEndpointControl *v13; // [rsp+70h] [rbp+50h] BYREF
  int (__fastcall ***v14)(_QWORD, GUID *, struct IBridgeSourceEndpointControl **); // [rsp+78h] [rbp+58h] BYREF

  EnterCriticalSection(&g_lockBridgeEndpointRegistry);
  v4 = (_QWORD *)g_bridgeEndpointRegistry;
  v5 = qword_1400CF8A8;
  if ( g_bridgeEndpointRegistry != qword_1400CF8A8 )
  {
    v6 = 0;
    do
    {
      if ( *v4 == a1 )
      {
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
        v7 = 0LL;
        v14 = 0LL;
        v8 = v4[1];
        if ( v8 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
                 v8,
                 &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                 (__int64 *)&v14);
          v7 = v14;
        }
        else
        {
          v9 = 0;
        }
        if ( v9 >= 0 && v7 )
        {
          v13 = 0LL;
          v10 = **v7;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease((__int64 *)&v13);
          if ( v10(v7, &GUID_ed9309d0_76d3_430a_a5b4_6ee21020fca5, &v13) >= 0 )
          {
            v12 = v13;
            v13 = 0LL;
            *a2 = v12;
            Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease((__int64 *)&v13);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
            goto LABEL_14;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease((__int64 *)&v13);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      }
      v4 += 2;
    }
    while ( v4 != (_QWORD *)v5 );
  }
  v6 = -2147023728;
LABEL_14:
  LeaveCriticalSection(&g_lockBridgeEndpointRegistry);
  return v6;
}
