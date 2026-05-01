/*
 * XREFs of ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x1800C104C
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800BE9A0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180538B6C (-GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundat.c)
 * Callees:
 *     ?TryGetScreenSizeAndDpi@PositionAndSizeOptionsHelper@KeyboardHosting@@CA_NPEAUHMONITOR__@@PEAUScreenSizeAndDpi@2@@Z @ 0x1800BE89C (-TryGetScreenSizeAndDpi@PositionAndSizeOptionsHelper@KeyboardHosting@@CA_NPEAUHMONITOR__@@PEAUSc.c)
 *     ??$_Find_lower_bound@PEAUHMONITOR__@@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@@1@AEBQEAUHMONITOR__@@@Z @ 0x1800BFB80 (--$_Find_lower_bound@PEAUHMONITOR__@@@-$_Tree@V-$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1801C7464 (_o_ceilf_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x1802DEE36 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
        __int64 a1,
        _DWORD *a2,
        HMONITOR a3,
        __int64 a4,
        int a5,
        char a6,
        double a7,
        double *a8)
{
  RTL_SRWLOCK *v11; // r15
  __int64 v12; // rcx
  double v13; // xmm8_8
  __int64 v14; // rcx
  double v15; // xmm1_8
  double v16; // xmm2_8
  float v17; // xmm4_4
  float v18; // xmm3_4
  int v19; // ecx
  int v20; // ebx
  float v21; // xmm3_4
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  float v28; // xmm3_4
  float v29; // xmm0_4
  double v30; // xmm2_8
  int v31; // eax
  float v32; // xmm1_4
  double v33; // xmm1_8
  HMONITOR hMonitor; // [rsp+38h] [rbp-D0h] BYREF
  int v35; // [rsp+40h] [rbp-C8h] BYREF
  int v36; // [rsp+44h] [rbp-C4h] BYREF
  RTL_SRWLOCK *v37; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-A8h]
  char v40[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+78h] [rbp-90h]
  __int128 v42; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  void *v44; // [rsp+A8h] [rbp-60h]
  int v45; // [rsp+B0h] [rbp-58h]
  int v46; // [rsp+B4h] [rbp-54h]
  const char *v47; // [rsp+B8h] [rbp-50h]
  int v48; // [rsp+C0h] [rbp-48h]
  int v49; // [rsp+C4h] [rbp-44h]
  RTL_SRWLOCK **v50; // [rsp+C8h] [rbp-40h]
  int v51; // [rsp+D0h] [rbp-38h]
  int v52; // [rsp+D4h] [rbp-34h]
  int *v53; // [rsp+D8h] [rbp-30h]
  int v54; // [rsp+E0h] [rbp-28h]
  int v55; // [rsp+E4h] [rbp-24h]
  int *v56; // [rsp+E8h] [rbp-20h]
  int v57; // [rsp+F0h] [rbp-18h]
  int v58; // [rsp+F4h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  hMonitor = a3;
  v11 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v37 = v11;
  if ( KeyboardHosting::PositionAndSizeOptionsHelper::TryGetScreenSizeAndDpi(
         hMonitor,
         (struct KeyboardHosting::ScreenSizeAndDpi *)&v42) )
  {
    v25 = std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(
            a1,
            &EventDescriptor,
            &hMonitor);
    v12 = *(_QWORD *)v25;
    *(_OWORD *)(*(_QWORD *)v25 + 40LL) = v42;
  }
  else
  {
    std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Find_lower_bound<HMONITOR__ *>(
      (__int64 *)a1,
      (__int64)v40,
      (unsigned __int64 *)&hMonitor);
    if ( !*(_BYTE *)(v41 + 25) && (unsigned __int64)hMonitor >= *(_QWORD *)(v41 + 32) && v41 != *(_QWORD *)a1 )
    {
      v26 = std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(
              a1,
              &EventDescriptor,
              &hMonitor);
      v12 = *(_QWORD *)v26;
      v42 = *(_OWORD *)(*(_QWORD *)v26 + 40LL);
    }
  }
  v13 = *(double *)&v42;
  if ( *(double *)&v42 == 0.0 || *(float *)(a4 + 8) <= 0.0 || *(float *)(a4 + 12) <= 0.0 )
  {
    v14 = *(_QWORD *)(wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                        v12,
                        _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v14 > 5u )
    {
      v35 = *(_DWORD *)(a4 + 12);
      v36 = *(_DWORD *)(a4 + 8);
      v37 = (RTL_SRWLOCK *)v42;
      v56 = &v35;
      v57 = 4;
      v58 = 0;
      v53 = &v36;
      v54 = 4;
      v55 = 0;
      v50 = &v37;
      v51 = 8;
      v52 = 0;
      v47 = "PositionAndSizeOptionsHelper::GetDefaultKeyboardSize: Monitor information is incorrect";
      v48 = 87;
      v49 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v14 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v44 = &unk_180865B35;
      v45 = 77;
      v46 = 1;
      v39 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v14 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
  }
  if ( !a6 )
  {
    v15 = v13;
LABEL_8:
    v16 = DOUBLE_1_0;
    goto LABEL_9;
  }
  v15 = a7;
  if ( v13 == 0.0 )
    goto LABEL_8;
  v16 = v13 / a7;
LABEL_9:
  if ( v16 <= 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3C,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  *a8 = v16;
  v17 = *(float *)(a4 + 8);
  if ( a6 )
    v17 = v17 * v16;
  if ( v17 <= 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3F,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  v18 = *(float *)(a4 + 12);
  if ( a6 )
    v18 = v18 * v16;
  if ( v18 <= 0.0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x41,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  if ( a6 )
    v19 = (int)((double)SHIDWORD(v42) * v16);
  else
    v19 = HIDWORD(v42);
  if ( !v19 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x43,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
  if ( v15 != 0.0 && v15 >= 8.0 )
    v17 = v17 * 0.89999998;
  v20 = (int)v17;
  *a2 = (int)v17;
  if ( v15 == 0.0 || v15 < 8.0 )
  {
    v21 = v18 * 0.5;
  }
  else
  {
    if ( v15 >= 23.5 )
    {
      v30 = (double)v19;
      if ( v15 >= 55.0 )
        v31 = (int)(v30 * 6.299212598425197);
      else
        v31 = (int)((v15 * 260.0 + 1700.0) / 2540.0 * v30);
      v32 = (float)v31;
      if ( a5 )
        v32 = (float)(v32 * 100.0) / (float)a5;
      v29 = v32;
    }
    else
    {
      v27 = 1600;
      if ( v15 >= 19.5 )
        v27 = 1900;
      v28 = (double)v27 / 2540.0 * 4.0 * (double)v19
          + (double)v19 * 0.07874015748031496
          + (double)v19 * ((double)v27 / 2540.0);
      if ( a5 )
        v28 = (float)(v28 * 100.0) / (float)a5;
      v29 = v28;
    }
    v21 = o_ceilf_0(v29);
  }
  v22 = (int)v21;
  a2[1] = (int)v21;
  if ( (float)v20 > *(float *)(a4 + 8) )
    *a2 = (int)*(float *)(a4 + 8);
  v23 = (int)(float)(*(float *)(a4 + 12) * 0.5);
  if ( v22 > v23 )
  {
    a2[1] = v23;
    v22 = v23;
  }
  if ( v13 > 8.0 && v13 < 23.5 )
  {
    v33 = *(float *)(a4 + 12) * 0.43;
    if ( (double)v22 > v33 )
      a2[1] = (int)v33;
  }
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  return a2;
}
