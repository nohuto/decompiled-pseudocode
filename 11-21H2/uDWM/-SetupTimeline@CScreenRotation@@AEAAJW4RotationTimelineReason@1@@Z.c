/*
 * XREFs of ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800D31FC
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800D2C10 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800D3410 (-Start@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z @ 0x180005754 (-Create@CAnimationFrameStats@@SAJPEAPEAVIAnimationFrameStats@@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EDE4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x1800102FC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800134C8 (-reset@-$com_ptr_t@VIAnimationFrameStats@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800D25D4 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 */

__int64 __fastcall CScreenRotation::SetupTimeline(__int64 a1, int a2)
{
  __int64 v4; // r8
  int v5; // ecx
  _QWORD *v6; // r8
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // r8
  char v10; // al
  void *v11; // rdx
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF

  CScreenRotation::CleanupTimeline((CScreenRotation *)a1);
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         112LL);
  v13 = v4;
  if ( v4 )
  {
    v5 = 100;
    if ( a2 != 1 )
      v5 = 400;
    CTimelineBase::CTimelineBase(v4, (float)((float)v5 / 1000.0), 0.0, 1.0, 0);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 304) = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xFBu);
    return v7;
  }
  *(_DWORD *)(a1 + 312) = a2;
  v8 = CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xFFu);
    return v7;
  }
  v10 = *(_BYTE *)(a1 + 388);
  *(_BYTE *)(a1 + 296) = 1;
  if ( a2 == 1 )
  {
    if ( v10 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v11 = &UdwmHardwareExpression_Delay_Start;
LABEL_22:
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)v11,
          v9,
          1,
          (__int64)&v13);
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v11 = &UdwmScreenRotation_Delay_Start;
      goto LABEL_22;
    }
  }
  else if ( v10 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v11 = &UdwmHardwareExpression_HintDelay_Start;
      goto LABEL_22;
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v11 = &UdwmScreenRotation_HintDelay_Start;
    goto LABEL_22;
  }
  if ( !*(_QWORD *)(a1 + 392) && (unsigned int)dword_180141868 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_180141868, 0x200000000000LL) )
    {
      wil::com_ptr_t<IAnimationFrameStats,wil::err_returncode_policy>::reset((__int64 *)(a1 + 392));
      if ( (int)CAnimationFrameStats::Create((struct IAnimationFrameStats **)(a1 + 392)) >= 0 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 24LL))(*(_QWORD *)(a1 + 392));
    }
  }
  return v7;
}
