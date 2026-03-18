/*
 * XREFs of ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2930
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0005550 (-FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C007DBA0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01D1824 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 *     ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x1C01DC384 (-IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01DF13C (-ProcessInput@CPTPProcessor@@QEAAXPEAX0KHH@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C01E1D24 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ApiSetEditionRimDeviceReadNotification @ 0x1C020B308 (ApiSetEditionRimDeviceReadNotification.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::ProcessInput(CHidInput *this, _DWORD *a2, __int64 a3, unsigned int a4, void *a5)
{
  _DWORD *v5; // r13
  unsigned int v7; // r14d
  int v10; // r15d
  unsigned int IsInjectionDeviceFromKernelHandle; // eax
  unsigned int v12; // edi
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v14; // rdx
  CHidInput *v15; // rcx
  __int64 v16; // r8
  struct DEVICEINFO *v17; // rbx
  int v18; // eax
  unsigned int v19; // r10d
  void *v20; // rax
  void *v21; // rsi
  CTouchProcessor *v22; // rcx
  __int64 v23; // rax
  CPTPProcessor *v24; // rdi
  int v25; // eax

  v5 = 0LL;
  v7 = a3;
  v10 = a3 & 0x1C;
  if ( (a3 & 0x1C) != 0 )
  {
    IsInjectionDeviceFromKernelHandle = a2[48];
    v5 = a2;
  }
  else
  {
    IsInjectionDeviceFromKernelHandle = CBaseInput::IsInjectionDeviceFromKernelHandle(this, a5, a3);
  }
  v12 = IsInjectionDeviceFromKernelHandle != 0 ? 8 : 0;
  DeviceInfo = CBaseInput::FindDeviceInfo(this, a5, IsInjectionDeviceFromKernelHandle);
  v17 = DeviceInfo;
  if ( !DeviceInfo )
    return 0LL;
  v18 = *((_DWORD *)DeviceInfo + 50);
  if ( (v18 & 0x40) == 0 )
  {
    v19 = 4;
    v16 = v12;
    switch ( v7 )
    {
      case 4u:
        LODWORD(v16) = v12 | 0x80;
        v19 = 13;
        if ( *((_DWORD *)v17 + 534) != 1 )
          LODWORD(v16) = v12;
        goto LABEL_16;
      case 0x10u:
        v19 = 11;
LABEL_16:
        CInputGlobals::UpdateInputGlobals(
          (__int64)gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          v19,
          0LL,
          0,
          v16);
        goto LABEL_17;
      case 8u:
        v19 = 17;
        goto LABEL_16;
    }
    if ( (v18 & 0x100) != 0 || (v18 & 0x200) != 0 )
      goto LABEL_16;
  }
LABEL_17:
  if ( *((_QWORD *)v17 + 59) )
  {
    if ( !v10 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    if ( (*((_DWORD *)v17 + 50) & 0x80u) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    v20 = (void *)*((_QWORD *)v5 + 4);
    if ( v20 != a5 && a5 != (void *)-1LL && v20 != *((void **)v17 + 43) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    v21 = *(void **)v17;
    if ( !CHidInput::IsTouchpadDevice(v15, v17) || isChildPartition() )
    {
      CTouchProcessor::ProcessInput(v22, v21, (char *)a2, a4);
    }
    else
    {
      v23 = *((_QWORD *)v17 + 59);
      if ( v23 )
      {
        v24 = *(CPTPProcessor **)(v23 + 1056);
        if ( v24 )
        {
          CPTPProcessor::ProcessInput(
            v24,
            v21,
            (char *)a2,
            a4,
            -__CFSHR__(*((_DWORD *)v17 + 46), 14),
            -__CFSHR__(*(_DWORD *)(v23 + 360), 5));
          *((_BYTE *)this + 1336) = *((_BYTE *)v24 + 2364);
        }
      }
    }
  }
  else
  {
    v25 = *((_DWORD *)v17 + 50);
    if ( (v25 & 0x100) != 0 || (v25 & 0x200) != 0 )
      ApiSetEditionRimDeviceReadNotification(a2, v7, a4, a5);
  }
  return 0LL;
}
