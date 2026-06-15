/*
 * XREFs of ?MoveDisplacedA2dpStreamGroupsToSaDevice@CBtAudioResourceManager@@AEAAJPEAUISaDeviceProxy@@@Z @ 0x180116A34
 * Callers:
 *     ?CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1801142C4 (-CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180114628 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAU.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180002CD8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBtAudioResourceManager::MoveDisplacedA2dpStreamGroupsToSaDevice(
        CBtAudioResourceManager *this,
        struct ISaDeviceProxy *a2)
{
  _QWORD *i; // rbx
  __int64 (__fastcall *v4)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *, bool, _QWORD); // rdi
  char v5; // al
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp+30h] BYREF

  for ( i = (_QWORD *)*((_QWORD *)this + 8); i; i = (_QWORD *)*i )
  {
    v11 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(i + 1, &v11) >= 0 && v11 )
    {
      v10 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v11, &v10) >= 0 )
      {
        v4 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 208LL))(v10);
        v6 = v4(g_DeviceGraphManager, v10, a2, v5 == 0, 0LL);
        v7 = v6;
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x422,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
            (const char *)(unsigned int)v6);
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v10);
          Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v11);
          return v7;
        }
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v10);
    }
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v11);
  }
  return 0LL;
}
