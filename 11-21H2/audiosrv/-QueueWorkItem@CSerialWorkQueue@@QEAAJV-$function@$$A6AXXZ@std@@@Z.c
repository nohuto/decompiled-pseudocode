/*
 * XREFs of ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180009110
 * Callers:
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180008EC0 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180009028 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCPowerReference@@@std@@EEAAXXZ @ 0x18000AB10 (-_Destroy@-$_Ref_count_obj2@VCPowerReference@@@std@@EEAAXXZ.c)
 *     ?PublishApoTelemetry@@YAJPEBG@Z @ 0x18001110C (-PublishApoTelemetry@@YAJPEBG@Z.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180019650 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800222B0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18003CDF0 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ @ 0x18005D3D0 (-UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180063B9C (-OnStreamStateChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x180063C28 (-OnStreamStateChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 *     ?ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z @ 0x1800EA2D0 (-ReportSpatialLicenseChanged@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ @ 0x1800EAF80 (-ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800F53FC (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800F9A50 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800F9C40 (-OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?OnActiveRenderEndpointChanged@CAecAttributes@@QEAAXXZ @ 0x180105A78 (-OnActiveRenderEndpointChanged@CAecAttributes@@QEAAXXZ.c)
 *     ?OnDefaultEndpointChanged@CAecAttributes@@QEAAXXZ @ 0x180105BE8 (-OnDefaultEndpointChanged@CAecAttributes@@QEAAXXZ.c)
 *     ?OnSaDeviceDestroyed@CBtAudioResourceManager@@UEAAXPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@@Z @ 0x180116B70 (-OnSaDeviceDestroyed@CBtAudioResourceManager@@UEAAXPEAVCEndpointCharacteristics@@PEAUSaDevicePar.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800C6CEC (--_G_WorkTask@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSerialWorkQueue::QueueWorkItem(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rsi
  signed int v4; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  std::_Ref_count_base *v11; // rcx
  _BYTE *v12; // rdx
  struct _TP_WORK *ThreadpoolWork; // rbp
  _DWORD *v14; // rcx
  PTP_POOL Threadpool; // rax
  signed int v17; // eax
  signed int v18; // eax
  signed int LastError; // eax
  _BYTE v20[56]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE *v21; // [rsp+60h] [rbp-48h]

  v2 = a2;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 80) )
    goto LABEL_25;
  if ( *(_QWORD *)a1 )
  {
LABEL_3:
    v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[2] = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      v21 = 0LL;
      v7 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))*((_QWORD *)v2 + 7);
      if ( v7 )
        v21 = (_BYTE *)(**v7)(v7, v20);
      v6[2] = a1;
      ProcessHeap = GetProcessHeap();
      v9 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v10 = v9;
      if ( v9 )
      {
        *(_OWORD *)v9 = 0LL;
        v9[2] = 1;
        v9[3] = 1;
        *(_QWORD *)v9 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
        *((_QWORD *)v9 + 9) = 0LL;
        if ( v21 )
          *((_QWORD *)v9 + 9) = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v21)(v21, (__int64)(v9 + 4));
      }
      else
      {
        v10 = 0LL;
      }
      a2 = v10 + 4;
      *v6 = v10 + 4;
      v11 = (std::_Ref_count_base *)v6[1];
      v6[1] = v10;
      if ( v11 )
      {
        std::_Ref_count_base::_Decref(v11);
        a2 = (_DWORD *)*v6;
      }
      v4 = 0;
      if ( !a2 )
        v4 = -2147024882;
      if ( v21 )
      {
        v12 = v20;
        if ( v21 == v20 )
          v12 = 0LL;
        else
          LOBYTE(v12) = 1;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v21 + 32LL))(v21, v12);
      }
      if ( v4 < 0 )
        goto LABEL_23;
      ThreadpoolWork = CreateThreadpoolWork(CSerialWorkQueue::WorkCallback, v6, (PTP_CALLBACK_ENVIRON)(a1 + 8));
      if ( ThreadpoolWork )
      {
        v4 = 0;
      }
      else
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        if ( v4 < 0 )
          goto LABEL_23;
      }
      v6 = 0LL;
      SubmitThreadpoolWork(ThreadpoolWork);
    }
    else
    {
      v4 = -2147024882;
    }
LABEL_23:
    if ( v6 )
      _WorkTask::`scalar deleting destructor'((_WorkTask *)v6, (unsigned int)a2);
    goto LABEL_25;
  }
  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)a1 = Threadpool;
  if ( Threadpool )
    goto LABEL_40;
  v17 = GetLastError();
  v4 = v17;
  if ( v17 > 0 )
    v4 = (unsigned __int16)v17 | 0x80070000;
  if ( v4 >= 0 )
  {
LABEL_40:
    if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)a1, 1u) )
      goto LABEL_32;
    v18 = GetLastError();
    v4 = v18;
    if ( v18 > 0 )
      v4 = (unsigned __int16)v18 | 0x80070000;
    if ( v4 >= 0 )
    {
LABEL_32:
      SetThreadpoolThreadMaximum(*(PTP_POOL *)a1, 1u);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)a1;
      goto LABEL_3;
    }
  }
LABEL_25:
  v14 = (_DWORD *)*((_QWORD *)v2 + 7);
  if ( v14 )
  {
    if ( v14 == v2 )
      a2 = 0LL;
    else
      LOBYTE(a2) = 1;
    (*(void (__fastcall **)(_DWORD *, _DWORD *))(*(_QWORD *)v14 + 32LL))(v14, a2);
    *((_QWORD *)v2 + 7) = 0LL;
  }
  return (unsigned int)v4;
}
