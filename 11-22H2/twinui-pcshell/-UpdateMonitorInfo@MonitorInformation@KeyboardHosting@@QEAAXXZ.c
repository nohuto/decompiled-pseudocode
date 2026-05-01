/*
 * XREFs of ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18014AF7C
 * Callers:
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z @ 0x180064314 (--0MonitorInformation@KeyboardHosting@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1800AADE8 (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18014A520 (-HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4.c)
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18014A5F0 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Int.c)
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180152950 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1802DE810 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 *     ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1805327C0 (-HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell.c)
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180532900 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 *     ?UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1805350D8 (-UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPosit.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x180535300 (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windo.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1801C7464 (_o_ceilf_0.c)
 *     floorf @ 0x1801C7470 (floorf.c)
 */

void __fastcall KeyboardHosting::MonitorInformation::UpdateMonitorInfo(KeyboardHosting::MonitorInformation *this)
{
  HMONITOR v2; // rcx
  int *v3; // rdi
  int ScaleFactorForMonitor; // eax
  RECT rcMonitor; // xmm1
  float v6; // xmm2_4
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  bool v10; // zf
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm8_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  __int128 v20; // [rsp+28h] [rbp-29h]
  __int128 v21; // [rsp+28h] [rbp-29h]
  __int128 v22; // [rsp+28h] [rbp-29h]
  __int128 v23; // [rsp+38h] [rbp-19h]
  struct tagMONITORINFO mi; // [rsp+48h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v2 = *(HMONITOR *)this;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    v3 = (int *)((char *)this + 40);
    ScaleFactorForMonitor = GetScaleFactorForMonitor(*(_QWORD *)this, (char *)this + 40);
    if ( ScaleFactorForMonitor < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
        (const char *)(unsigned int)ScaleFactorForMonitor);
    rcMonitor = mi.rcMonitor;
    v6 = 0.0;
    v7 = _mm_cvtsi128_si32((__m128i)mi.rcMonitor);
    v8 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 4));
    v9 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 8));
    *(RECT *)((char *)this + 24) = mi.rcMonitor;
    v10 = *v3 == 0;
    *(float *)&v20 = (float)v7;
    v11 = (float)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 12)) - v8);
    v12 = (float)(v9 - v7);
    *((float *)&v20 + 1) = (float)v8;
    *((_QWORD *)&v20 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v12));
    v23 = v20;
    v13 = v12;
    if ( *v3 )
    {
      v6 = (float)*v3;
      v13 = (float)(v12 * 100.0) / v6;
      *(float *)&v21 = (float)((float)v7 * 100.0) / v6;
      *((float *)&v21 + 1) = (float)(*((float *)&v23 + 1) * 100.0) / v6;
      v14 = (float)(*((float *)&v23 + 3) * 100.0) / v6;
    }
    else
    {
      *(float *)&v21 = (float)v7;
      DWORD1(v21) = DWORD1(v23);
      v14 = *((float *)&v23 + 3);
    }
    *((_QWORD *)&v21 + 1) = __PAIR64__(LODWORD(v14), LODWORD(v13));
    *(_OWORD *)((char *)this + 8) = v21;
    if ( v10 )
    {
      *(float *)&v22 = (float)v7;
      v15 = (float)(v9 - v7);
      *((float *)&v22 + 1) = (float)v8;
      v16 = v11;
    }
    else
    {
      *(float *)&v22 = (float)((float)v7 * 100.0) / v6;
      *((float *)&v22 + 1) = (float)((float)v8 * 100.0) / v6;
      v15 = (float)(v12 * 100.0) / v6;
      v16 = (float)(v11 * 100.0) / v6;
    }
    *((_QWORD *)&v22 + 1) = __PAIR64__(LODWORD(v16), LODWORD(v15));
    *(_OWORD *)((char *)this + 44) = v22;
    v17 = floorf(*((float *)this + 12));
    v18 = o_ceilf_0(*((float *)this + 13));
    v19 = o_ceilf_0(*((float *)this + 14));
    *((float *)this + 15) = floorf(*((float *)this + 11));
    *((float *)this + 16) = v17;
    *((float *)this + 17) = v18;
    *((float *)this + 18) = v19;
  }
}
