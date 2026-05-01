/*
 * XREFs of ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x180088160
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800C14F0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1804858AC (-GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundat.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _o_ceilf_0 @ 0x180188ED0 (_o_ceilf_0.c)
 *     sqrt @ 0x180188F18 (sqrt.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180486CB8 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 */

// Hidden C++ exception states: #wind=4
_DWORD *__fastcall KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
        RTL_SRWLOCK *a1,
        _DWORD *a2,
        HMONITOR a3,
        __int64 a4,
        int a5,
        char a6,
        double a7,
        double *a8)
{
  _DWORD *v9; // r12
  double v11; // xmm12_8
  int v12; // esi
  int v13; // esi
  int v14; // edi
  _QWORD *v15; // rdx
  _BYTE *Ptr; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  double v19; // xmm10_8
  const char *v20; // r9
  double v21; // xmm3_8
  char v22; // al
  float v23; // xmm8_4
  float v24; // xmm2_4
  float v25; // xmm7_4
  float v26; // xmm1_4
  int v27; // ecx
  float v28; // xmm1_4
  int v29; // ecx
  unsigned int v30; // eax
  double v32; // xmm6_8
  double v33; // xmm7_8
  bool v34; // cc
  __int64 v35; // rcx
  __int64 v36; // rdx
  void (*v37)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v38; // eax
  float v39; // xmm3_4
  double v40; // xmm1_8
  float v41; // xmm1_4
  int v42; // eax
  double v43; // xmm1_8
  HMONITOR hMonitor; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-C0h] BYREF
  int v46; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  RTL_SRWLOCK *v50; // [rsp+70h] [rbp-98h]
  _BYTE v51[16]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v52; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  __int128 v54; // [rsp+A8h] [rbp-60h]
  __int128 v55; // [rsp+B8h] [rbp-50h]
  __int128 v56; // [rsp+C8h] [rbp-40h]
  __int128 v57; // [rsp+D8h] [rbp-30h]
  __int128 v58; // [rsp+E8h] [rbp-20h]
  struct tagMONITORINFO mi; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v9 = a2;
  hMonitor = a3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    a2);
  AcquireSRWLockExclusive(a1 + 2);
  v50 = a1 + 2;
  v11 = 0.0;
  *(_QWORD *)&v52 = 0LL;
  v12 = 96;
  mi.cbSize = 40;
  UserData = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  if ( GetMonitorInfoW(hMonitor, &mi) && (unsigned int)GetCurrentDpiInfo(hMonitor, &UserData) )
  {
    v13 = abs32(mi.rcMonitor.right - mi.rcMonitor.left);
    v14 = abs32(mi.rcMonitor.bottom - mi.rcMonitor.top);
    if ( v13 > 0 && v14 > 0 && SDWORD2(v54) > 0 && SHIDWORD(v54) > 0 )
    {
      v32 = (double)(100 * DWORD2(v54)) / 2540.0;
      v33 = (double)(100 * HIDWORD(v54)) / 2540.0;
      v34 = v13 < v14;
      if ( v13 > v14 )
      {
        if ( v33 > v32 )
        {
LABEL_49:
          v32 = (double)(100 * HIDWORD(v54)) / 2540.0;
          v33 = (double)(100 * DWORD2(v54)) / 2540.0;
LABEL_50:
          v11 = sqrt(v33 * v33 + v32 * v32);
          *(double *)&v52 = v11;
          v35 = *(_QWORD *)std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(
                             a1,
                             v51,
                             &hMonitor);
          *(double *)(v35 + 40) = v11;
          *(_DWORD *)(v35 + 48) = (int)((double)v13 / v32);
          v12 = (int)((double)v14 / v33);
          *(_DWORD *)(v35 + 52) = v12;
          goto LABEL_9;
        }
        v34 = v13 < v14;
      }
      if ( !v34 || v32 <= v33 )
        goto LABEL_50;
      goto LABEL_49;
    }
    v12 = 96;
  }
  v15 = (_QWORD *)*((_QWORD *)a1->Ptr + 1);
  Ptr = a1->Ptr;
  while ( !*((_BYTE *)v15 + 25) )
  {
    if ( v15[4] >= (unsigned __int64)hMonitor )
    {
      Ptr = v15;
      v15 = (_QWORD *)*v15;
    }
    else
    {
      v15 = (_QWORD *)v15[2];
    }
  }
  if ( !Ptr[25] && Ptr != a1->Ptr && (unsigned __int64)hMonitor >= *((_QWORD *)Ptr + 4) )
  {
    v52 = *(_OWORD *)(*(_QWORD *)std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(
                                   a1,
                                   v51,
                                   &hMonitor)
                    + 40LL);
    v12 = HIDWORD(v52);
    v11 = *(double *)&v52;
  }
LABEL_9:
  LOBYTE(v15) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    v15);
  if ( v11 == 0.0 || *(float *)(a4 + 8) <= 0.0 || *(float *)(a4 + 12) <= 0.0 )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      *(_QWORD *)&EventDescriptor.Id = &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B4500;
      qword_1807B4500 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B4518 = (__int64)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
      LODWORD(EventDescriptor.Keyword) = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(
        (LPINIT_ONCE *)&EventDescriptor,
        v36,
        v37);
    }
    v18 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v18 > 5u )
    {
      v46 = *(_DWORD *)(a4 + 12);
      LODWORD(v47) = *(_DWORD *)(a4 + 8);
      *(_QWORD *)&v58 = &v46;
      *((_QWORD *)&v58 + 1) = 4LL;
      *(_QWORD *)&v57 = &v47;
      *((_QWORD *)&v57 + 1) = 4LL;
      *(_QWORD *)&v56 = &v52;
      *((_QWORD *)&v56 + 1) = 8LL;
      *(_QWORD *)&v55 = "PositionAndSizeOptionsHelper::GetDefaultKeyboardSize: Monitor information is incorrect";
      *((_QWORD *)&v55 + 1) = 87LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v18 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      *(_QWORD *)&v54 = &unk_1806BD92D;
      *((_QWORD *)&v54 + 1) = 0x10000004DLL;
      EventWriteTransfer(*(_QWORD *)(v18 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
  }
  LOBYTE(v17) = 1;
  if ( !a6 )
  {
    v19 = v11;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
      v17);
LABEL_17:
    v21 = DOUBLE_1_0;
LABEL_18:
    v22 = 0;
    goto LABEL_19;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    v17);
  v19 = a7;
  if ( v11 == 0.0 )
    goto LABEL_17;
  v21 = v11 / a7;
  v19 = a7;
  if ( v11 / a7 > 0.0 )
    goto LABEL_18;
  v22 = 1;
LABEL_19:
  if ( v22 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4B,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      v20);
  *a8 = v21;
  v23 = *(float *)(a4 + 8);
  if ( a6 )
    v24 = v23 * v21;
  else
    v24 = *(float *)(a4 + 8);
  if ( v24 <= 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4E,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      v20);
  v25 = *(float *)(a4 + 12);
  if ( a6 )
    v26 = v25 * v21;
  else
    v26 = *(float *)(a4 + 12);
  if ( v26 <= 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x50,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      v20);
  if ( a6 )
    v27 = (int)((double)v12 * v21);
  else
    v27 = v12;
  if ( !v27 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x52,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  if ( v19 != 0.0 && v19 >= 8.0 )
    v24 = v24 * 0.89999998;
  *v9 = (int)v24;
  if ( v19 == 0.0 || v19 < 8.0 )
  {
    v28 = v26 * 0.5;
    goto LABEL_32;
  }
  if ( v19 >= 23.5 )
  {
    v40 = (double)v27;
    if ( v19 >= 55.0 )
    {
      v41 = (float)(int)(v40 * 6.299212598425197);
      v42 = a5;
      if ( !a5 )
        goto LABEL_81;
    }
    else
    {
      v41 = (float)(int)((v19 * 260.0 + 1700.0) / 2540.0 * v40);
      v42 = a5;
      if ( !a5 )
      {
LABEL_81:
        v28 = o_ceilf_0(v41);
        goto LABEL_32;
      }
    }
    v41 = (float)(v41 * 100.0) / (float)v42;
    goto LABEL_81;
  }
  v38 = 1600;
  if ( v19 >= 19.5 )
    v38 = 1900;
  v39 = (double)v38 / 2540.0 * 4.0 * (double)v27
      + (double)v27 * 0.07874015748031496
      + (double)v27 * ((double)v38 / 2540.0);
  if ( a5 )
    v39 = (float)(v39 * 100.0) / (float)a5;
  v28 = o_ceilf_0(v39);
LABEL_32:
  v29 = (int)v28;
  v9[1] = (int)v28;
  if ( (float)(int)v24 > v23 )
    *v9 = (int)v23;
  v30 = (int)(float)(v25 * 0.5);
  if ( v29 > v30 )
  {
    v9[1] = v30;
    v29 = (int)(float)(v25 * 0.5);
  }
  if ( v11 > 8.0 && v11 < 23.5 )
  {
    v43 = v25 * 0.43;
    if ( (double)v29 > v43 )
      v9[1] = (int)v43;
  }
  if ( a1 != (RTL_SRWLOCK *)-16LL )
    ReleaseSRWLockExclusive(a1 + 2);
  return v9;
}
