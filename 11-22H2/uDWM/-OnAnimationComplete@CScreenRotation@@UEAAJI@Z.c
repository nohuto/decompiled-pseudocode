/*
 * XREFs of ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800D7880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180025534 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D75BC (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800D7E7C (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D80E4 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 */

__int64 __fastcall CScreenRotation::OnAnimationComplete(CScreenRotation *this, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  void *v7; // rdx
  CScreenRotation *v8; // rcx
  int v9; // eax
  int v10; // eax
  void *v11; // rdx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[16]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 != *((_DWORD *)this + 19) )
  {
    if ( a2 != *((_DWORD *)this + 20) )
      goto LABEL_22;
    if ( *((_BYTE *)this + 100) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v11 = &UdwmHardwareExpression_PostDelayAnimation_Stop;
LABEL_20:
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)v11,
          v6,
          1LL,
          (__int64)v14);
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v11 = &UdwmScreenRotation_PostDelayAnimation_Stop;
      goto LABEL_20;
    }
    CScreenRotation::Stop((CScreenRotation *)((char *)this - 288), 0, 0);
    goto LABEL_22;
  }
  *((_DWORD *)this + 19) = -1;
  if ( *((_BYTE *)this + 100) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_8;
    v7 = &UdwmHardwareExpression_PreDelayAnimation_Stop;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_8;
    v7 = &UdwmScreenRotation_PreDelayAnimation_Stop;
  }
  McGenEventWrite_EtwEventWriteTransfer(Microsoft_Windows_Dwm_Udwm_Provider_Context, (__int64)v7, v6, 1LL, (__int64)v14);
LABEL_8:
  v8 = (CScreenRotation *)((char *)this - 288);
  if ( *((_BYTE *)this + 49) )
  {
    v9 = CScreenRotation::MidDelayExpired(v8, v5, v6);
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x135u);
  }
  else
  {
    v10 = CScreenRotation::SetupTimeline(v8, 2LL);
    v4 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x139u);
  }
LABEL_22:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v4;
}
