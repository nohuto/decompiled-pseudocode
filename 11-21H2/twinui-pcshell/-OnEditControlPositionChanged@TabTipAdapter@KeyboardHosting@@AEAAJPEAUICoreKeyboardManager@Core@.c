/*
 * XREFs of ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800BE5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180025FB0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate@@@details@w.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180061928 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180078A2C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheForegroundAppId@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9BA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheForegroundAppId@@@details@wil@@QEAAX.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x1800BEA64 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$EditControlPositionChanged@PEBGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAURect@Foundation@Windows@@11@Z @ 0x18046C284 (--$EditControlPositionChanged@PEBGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExp.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x18047151C (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlPositionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm10_4
  float v15; // xmm9_4
  int v16; // edi
  HMONITOR v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  int ScaleFactorForMonitor; // eax
  int v21; // ecx
  float v22; // xmm2_4
  float top; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  int v26; // ebx
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm4_4
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 *v33; // rcx
  float left; // xmm2_4
  float v36; // xmm3_4
  float v37; // xmm4_4
  float v38; // xmm5_4
  bool v39; // al
  __int64 v40; // rdi
  int v41; // ebx
  __int64 v42; // rdx
  char v43; // bl
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  RECT *v47; // rax
  __int64 v48; // rdx
  void (*v49)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v50; // rax
  int v51; // eax
  unsigned int v52; // ebx
  int v53; // eax
  unsigned int v54; // ebx
  LPVOID Context[2]; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+60h] [rbp-A0h] BYREF
  int v57; // [rsp+64h] [rbp-9Ch] BYREF
  int v58; // [rsp+68h] [rbp-98h] BYREF
  int v59; // [rsp+6Ch] [rbp-94h] BYREF
  int v60; // [rsp+70h] [rbp-90h] BYREF
  int v61; // [rsp+74h] [rbp-8Ch] BYREF
  int v62; // [rsp+78h] [rbp-88h] BYREF
  HMONITOR v63; // [rsp+80h] [rbp-80h]
  __int128 v64; // [rsp+88h] [rbp-78h]
  RECT rcMonitor; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v67; // [rsp+B0h] [rbp-50h] BYREF
  RECT rc; // [rsp+C0h] [rbp-40h] BYREF
  RECT v69; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v70; // [rsp+E8h] [rbp-18h]
  struct tagMONITORINFO mi; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v67 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v67);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24A,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  else
  {
    *((_OWORD *)this + 31) = v67;
    v6 = *((_QWORD *)this + 14);
    v7 = *(_DWORD *)(v6 + 612);
    AcquireSRWLockShared((PSRWLOCK)(v6 + 440));
    Context[0] = (LPVOID)(v6 + 440);
    v8 = *(_QWORD *)(v6 + 400);
    v9 = *(_QWORD *)(v8
                   + 16
                   * ((0x100000001B3LL
                     * (((unsigned __int64)v7 >> 24) ^ (0x100000001B3LL
                                                      * (BYTE2(v7) ^ (0x100000001B3LL
                                                                    * (BYTE1(v7) ^ (0x100000001B3LL
                                                                                  * ((unsigned __int8)v7 ^ 0xCBF29CE484222325uLL)))))))) & *(_QWORD *)(v6 + 424))
                   + 8);
    v10 = *(_QWORD *)(v6 + 384);
    if ( v9 == v10 )
      goto LABEL_3;
    while ( v7 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == *(_QWORD *)(v8
                           + 16
                           * ((0x100000001B3LL
                             * (((unsigned __int64)v7 >> 24) ^ (0x100000001B3LL
                                                              * (BYTE2(v7) ^ (0x100000001B3LL
                                                                            * (BYTE1(v7) ^ (0x100000001B3LL
                                                                                          * ((unsigned __int8)v7 ^ 0xCBF29CE484222325uLL)))))))) & *(_QWORD *)(v6 + 424))) )
        goto LABEL_3;
      v9 = *(_QWORD *)(v9 + 8);
    }
    if ( !v9 || v9 == v10 )
    {
LABEL_3:
      if ( v6 != -440 )
        ReleaseSRWLockShared((PSRWLOCK)(v6 + 440));
    }
    else
    {
      v43 = *(_BYTE *)(v9 + 20);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)Context);
      if ( v43 && (unsigned int)KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(this) == 3 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheForegroundAppId>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_CacheForegroundAppId>::GetImpl'::`2'::impl,
          1u,
          v44,
          v45);
        std::wstring::wstring((__int64)&v69, *((_QWORD *)this + 14) + 624LL);
        v46 = *((_QWORD *)this + 14) + 596LL;
        v47 = &v69;
        if ( v70 >= 8 )
          v47 = *(RECT **)&v69.left;
        Context[0] = v47;
        TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged<unsigned short const *,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
          Context,
          v46,
          &v67,
          (char *)this + 512);
        std::wstring::_Tidy_deallocate(&v69);
      }
    }
    v11 = *((_QWORD *)this + 14);
    LODWORD(v12) = v67;
    v13 = *((float *)&v67 + 1);
    v14 = *((float *)&v67 + 2);
    v15 = *((float *)&v67 + 3);
    v16 = 0;
    rc.left = (int)*(float *)&v67;
    rc.top = (int)*((float *)&v67 + 1);
    rc.right = (int)(float)(*(float *)&v67 + *((float *)&v67 + 2));
    rc.bottom = (int)(float)(*((float *)&v67 + 1) + *((float *)&v67 + 3));
    v17 = MonitorFromRect(&rc, 2u);
    v64 = 0LL;
    rcMonitor = 0LL;
    v66 = 100;
    v63 = v17;
    memset(&mi, 0, sizeof(mi));
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v17, &mi) )
    {
      ScaleFactorForMonitor = GetScaleFactorForMonitor(v63, &v66);
      if ( ScaleFactorForMonitor < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x20,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\monitorinformation.cpp",
          (const char *)(unsigned int)ScaleFactorForMonitor);
      rcMonitor = mi.rcMonitor;
      v21 = _mm_cvtsi128_si32((__m128i)mi.rcMonitor);
      v22 = (float)v21;
      top = (float)mi.rcMonitor.top;
      v24 = (float)(_mm_cvtsi128_si32(_mm_srli_si128((__m128i)mi.rcMonitor, 8)) - v21 + 1);
      v25 = (float)(_mm_srli_si128(*(__m128i *)(&mi + 4), 8).m128i_i32[1] - mi.rcMonitor.top + 1);
      v26 = v66;
      if ( v66 )
      {
        v22 = (float)(v22 * 100.0) / (float)v66;
        top = (float)(top * 100.0) / (float)v66;
        v24 = (float)(v24 * 100.0) / (float)v66;
        v25 = (float)(v25 * 100.0) / (float)v66;
      }
      *(_QWORD *)&v64 = __PAIR64__(LODWORD(top), LODWORD(v22));
      *((_QWORD *)&v64 + 1) = __PAIR64__(LODWORD(v25), LODWORD(v24));
    }
    else
    {
      v26 = v66;
    }
    v27 = v12;
    v28 = v13;
    v29 = v14;
    v30 = v15;
    if ( v26 )
    {
      v27 = (float)(v12 * 100.0) / (float)v26;
      v28 = (float)(v13 * 100.0) / (float)v26;
      v29 = (float)(v14 * 100.0) / (float)v26;
      v30 = (float)(v15 * 100.0) / (float)v26;
    }
    Context[0] = (LPVOID)__PAIR64__(LODWORD(v28), LODWORD(v27));
    Context[1] = (LPVOID)__PAIR64__(LODWORD(v30), LODWORD(v29));
    v69 = *(RECT *)(v11 + 176);
    if ( v27 != *(float *)&v69.left
      || v28 != *(float *)&v69.top
      || v29 != *(float *)&v69.right
      || v30 != *(float *)&v69.bottom )
    {
      *(_OWORD *)(v11 + 176) = *(_OWORD *)Context;
      *(_BYTE *)(v11 + 460) = 0;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate>::GetImpl'::`2'::impl,
        1u,
        v18,
        v19);
      left = (float)rcMonitor.left;
      v36 = (float)rcMonitor.top;
      Context[0] = (LPVOID)__PAIR64__(LODWORD(v13), LODWORD(v12));
      Context[1] = (LPVOID)__PAIR64__(LODWORD(v15), LODWORD(v14));
      v39 = !(unsigned __int8)KeyboardHosting::IsRectNull(Context)
         && (v12 != left || v13 != v36 || v14 != v38 || v15 != v37);
      v16 = v39 ? 3 : 0;
      v26 = v66;
    }
    Context[0] = 0LL;
    if ( __std_init_once_begin_initialize(
           &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           Context)
      && fPending )
    {
      *(_QWORD *)&v69.left = &`TouchKeyboardExperienceTraceLogging::Instance'::`2'::wrapper;
      Context[0] = &qword_1807B4500;
      qword_1807B4500 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B4518 = (__int64)&`TouchKeyboardExperienceTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
      v69.right = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v69, v48, v49);
    }
    v32 = *((_QWORD *)Context[0] + 1);
    if ( *(_DWORD *)v32 > 5u
      && (*(_BYTE *)(v32 + 16) & 0x10) != 0
      && (*(_QWORD *)(v32 + 24) & 0x10LL) == *(_QWORD *)(v32 + 24) )
    {
      v57 = v16;
      v58 = v26;
      v59 = *(_DWORD *)(v11 + 188);
      v60 = *(_DWORD *)(v11 + 184);
      v61 = *(_DWORD *)(v11 + 180);
      v62 = *(_DWORD *)(v11 + 176);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v32,
        (int)&unk_1806BCCFD,
        v32,
        v31,
        (__int64)&v62,
        (__int64)&v61,
        (__int64)&v60,
        (__int64)&v59,
        (__int64)&v58,
        (__int64)&v57);
    }
    v33 = (__int64 *)*((_QWORD *)this + 6);
    if ( !v33 )
      goto LABEL_58;
    rc.left = (int)*(float *)&v67;
    rc.top = (int)*((float *)&v67 + 1);
    rc.right = (int)(float)(*((float *)&v67 + 2) + *(float *)&v67);
    rc.bottom = (int)(float)(*((float *)&v67 + 1) + *((float *)&v67 + 3));
    v50 = *v33;
    v69 = rc;
    v51 = (*(__int64 (__fastcall **)(__int64 *, RECT *))(v50 + 48))(v33, &v69);
    v52 = v51;
    if ( v51 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26A,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v51);
      return v52;
    }
    else
    {
LABEL_58:
      if ( v16 == 3
        && (v40 = *((_QWORD *)this + 8),
            AcquireSRWLockExclusive((PSRWLOCK)(v40 + 728)),
            Context[0] = (LPVOID)(v40 + 728),
            v41 = *(_DWORD *)(v40 + 720),
            wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)Context),
            v41 == 1)
        && (v53 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate((RTL_SRWLOCK *)this, v42),
            v54 = v53,
            v53 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x272,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v53);
        return v54;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
