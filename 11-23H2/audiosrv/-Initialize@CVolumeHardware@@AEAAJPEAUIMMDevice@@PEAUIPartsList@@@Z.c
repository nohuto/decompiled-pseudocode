/*
 * XREFs of ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800211F8
 * Callers:
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180020F4C (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolum.c)
 * Callees:
 *     ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x1800198B4 (-Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z.c)
 *     ?Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z @ 0x18001C0B0 (-Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18001DB20 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 */

__int64 __fastcall CVolumeHardware::Initialize(CVolumeHardware *this, struct IUnknown *a2, struct IPartsList *a3)
{
  RPC_STATUS v6; // eax
  int VolumeControlForEndpoint; // ebx

  v6 = UuidCreate((UUID *)((char *)this + 264));
  VolumeControlForEndpoint = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      VolumeControlForEndpoint = (unsigned __int16)v6 | 0x80070000;
    goto LABEL_8;
  }
  VolumeControlForEndpoint = CVolumeHardware::FindVolumeControlForEndpoint(this, a2, a3);
  if ( VolumeControlForEndpoint < 0 )
    goto LABEL_14;
  VolumeControlForEndpoint = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 32) + 24LL))(
                               *((_QWORD *)this + 32),
                               (char *)this + 284);
  if ( VolumeControlForEndpoint < 0 )
    goto LABEL_14;
  VolumeControlForEndpoint = CVolumeControlBase::Initialize(this, a2);
  if ( VolumeControlForEndpoint < 0 )
  {
LABEL_8:
    if ( VolumeControlForEndpoint >= 0 )
      return (unsigned int)VolumeControlForEndpoint;
LABEL_14:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::Initialize", 0x5B4u, VolumeControlForEndpoint);
    return (unsigned int)VolumeControlForEndpoint;
  }
  VolumeHardwareLogger::Initialize((char *)this + 288, this);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids, this);
  }
  return (unsigned int)VolumeControlForEndpoint;
}
