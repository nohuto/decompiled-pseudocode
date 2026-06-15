/*
 * XREFs of ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x1800087D0
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180006780 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006C20 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006EE0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180007CC0 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007EE0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180008D40 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     ??0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEBG@Z @ 0x180011894 (--0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x1800118D0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?SendNotification@AudioStateMonitorManager@@SAJ_KK@Z @ 0x180041EC4 (-SendNotification@AudioStateMonitorManager@@SAJ_KK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioStateMonitorManager::RecalculateVolume(AudioStateMonitorManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // rdi
  unsigned int *v6; // rcx
  _DWORD *v7; // rax
  unsigned int v8; // r9d
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v9; // r8d
  __int64 v10; // r8
  int v11; // esi
  unsigned int v12; // eax
  _BYTE v14[48]; // [rsp+30h] [rbp-78h] BYREF
  float v15; // [rsp+B0h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+B8h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v16 = v2;
  v3 = (_QWORD *)*((_QWORD *)this + 8);
  while ( 1 )
  {
    v3 = (_QWORD *)*v3;
    if ( v3 == *((_QWORD **)this + 8) )
      break;
    v4 = v3[2];
    v5 = v3[3];
    v6 = *(unsigned int **)(v5 + 8);
    v7 = *(_DWORD **)v5;
    v8 = 24;
    if ( v6 )
      v8 = *v6;
    if ( v7 )
      v9 = *v7 == 1;
    else
      v9 = eAll;
    CStreamPolicyVolumeClient::CStreamPolicyVolumeClient(
      (CStreamPolicyVolumeClient *)v14,
      *((struct IAudioProcess **)this + 16),
      v9,
      v8,
      *(const unsigned __int16 **)(v5 + 16));
    v15 = 1.0;
    GetPolicyVolumeForAudioStream(*((_QWORD *)this + 15), v14, v10, &v15);
    if ( v15 < 1.0 )
      v11 = v15 > 0.0;
    else
      v11 = 2;
    if ( **(_DWORD **)(v5 + 24) != v11 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 40LL))(*((_QWORD *)this + 16));
      if ( AudioStateMonitorManager::SendNotification(v4, v12) >= 0 )
        **(_DWORD **)(v5 + 24) = v11;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
