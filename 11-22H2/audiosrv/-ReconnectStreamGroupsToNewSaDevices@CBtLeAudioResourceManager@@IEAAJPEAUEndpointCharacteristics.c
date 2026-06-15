/*
 * XREFs of ?ReconnectStreamGroupsToNewSaDevices@CBtLeAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@W4ReconnectSaDeviceOptions@1@@Z @ 0x1800FBD84
 * Callers:
 *     ?RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800FC028 (-RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D78EC (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x1800FB520 (-clear@-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEA.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CBtLeAudioResourceManager::ReconnectStreamGroupsToNewSaDevices(_QWORD **a1, __int64 a2, _QWORD *a3)
{
  _QWORD *i; // rbx
  __int64 (__fastcall *v6)(_QWORD **, __int64, _QWORD, _QWORD, __int64, __int128 *, _QWORD, _QWORD, __int64 *); // rdi
  int v7; // eax
  unsigned int v8; // edi
  __int64 (__fastcall *v9)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD); // rdi
  char v10; // al
  __int64 v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-60h]
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-20h] BYREF
  __int128 v17; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v17 = 0LL;
  for ( i = (_QWORD *)*a3; i; i = (_QWORD *)*i )
  {
    v16 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(i + 1, &v16) >= 0 && v16 )
    {
      v14 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v16, &v14) >= 0 )
      {
        v15 = 0LL;
        v6 = (__int64 (__fastcall *)(_QWORD **, __int64, _QWORD, _QWORD, __int64, __int128 *, _QWORD, _QWORD, __int64 *))(*a1)[19];
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v15);
        LODWORD(v13) = 0;
        v7 = v6(a1, a2, i[2], 0LL, v13, &v17, 0LL, 0LL, &v15);
        v8 = v7;
        if ( v7 < 0 )
        {
          v11 = 333LL;
          goto LABEL_13;
        }
        v9 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 248LL))(v14);
        v7 = v9(g_DeviceGraphManager, v14, v15, v10 == 0, 0LL);
        v8 = v7;
        if ( v7 < 0 )
        {
          v11 = 385LL;
LABEL_13:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v11,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
            (const char *)(unsigned int)v7);
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v15);
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v14);
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v16);
          return v8;
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v15);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v14);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v16);
  }
  std::forward_list<DisplacedStreamGroup>::clear(a1 + 11);
  return 0LL;
}
