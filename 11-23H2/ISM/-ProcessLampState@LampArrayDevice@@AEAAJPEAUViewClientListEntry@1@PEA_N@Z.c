/*
 * XREFs of ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800EBAF4
 * Callers:
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800EC8E8 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004AC18 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180055588 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057640 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x1800589B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D4AE0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800E990C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x1800EAFF4 (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800EB108 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??1?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@IEAA@XZ @ 0x1800EB488 (--1-$_TlgActivityBase@V-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingProvider@@3QEBU_tl.c)
 *     ??4?$vector@IV?$allocator@I@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EB640 (--4-$vector@IV-$allocator@I@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?reserve@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1800ECE7C (-reserve@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAAX_K@Z.c)
 *     ?reserve@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAX_K@Z @ 0x1800ECEB8 (-reserve@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@QEAAX_K@Z.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x1800ECF00 (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingProvi.c)
 *     ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x1800F05E4 (-CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@.c)
 *     ?CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@@@Z @ 0x1800F065C (-CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800F2730 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800F2D2C (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800F2EB0 (-GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AE.c)
 *     ?CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z @ 0x1800F3280 (-CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z.c)
 *     ?CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ @ 0x1800F3384 (-CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ.c)
 *     ?IncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z @ 0x1800F33A0 (-IncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z.c)
 *     ?SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ @ 0x1800F33DC (-SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ.c)
 *     ?IncludeInNextUpdate@HidLampMultiUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z @ 0x1800F3670 (-IncludeInNextUpdate@HidLampMultiUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z.c)
 *     ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x1800F3838 (-Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ.c)
 *     ?SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ @ 0x1800F38A4 (-SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall LampArrayDevice::ProcessLampState(
        LampArrayDevice *this,
        struct LampArrayDevice::ViewClientListEntry *a2,
        bool *a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  const GUID *v9; // r9
  bool v10; // di
  struct LampArrayDevice::ViewClientListEntry *v11; // rax
  bool v12; // al
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // r14
  __int64 v17; // rdi
  double v18; // xmm7_8
  int v19; // ebx
  _BYTE *v20; // rdx
  _DWORD *v21; // r8
  __int64 v22; // r12
  struct Windows::UI::Color *v23; // r8
  double v24; // xmm6_8
  bool v25; // al
  signed int v26; // esi
  __int64 v27; // r15
  __int64 v28; // r14
  int v29; // ecx
  __int64 v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rcx
  char *Ptr; // r15
  size_t v34; // rbx
  int updated; // eax
  unsigned int v36; // edi
  int v37; // eax
  void *v38; // rax
  void *v39; // rsi
  unsigned __int64 v40; // rax
  HidLampMultiUpdateReportBuilder *v41; // rdi
  HidLampRangeUpdateReportBuilder *v42; // rbx
  __int64 v43; // rcx
  unsigned __int64 v44; // r12
  struct LampUpdateState *v45; // rdx
  HidLampRangeUpdateReportBuilder *v46; // rcx
  unsigned int v47; // eax
  int v48; // eax
  unsigned int v49; // r12d
  unsigned int v50; // eax
  unsigned int v51; // r8d
  unsigned int v52; // edx
  unsigned int v53; // eax
  int v54; // edx
  unsigned __int64 i; // rax
  unsigned __int64 v56; // r10
  int v57; // r11d
  unsigned int v58; // r11d
  int v59; // eax
  int v60; // eax
  int v61; // eax
  unsigned int v62; // ebx
  bool CanIncludeInNextUpdate; // [rsp+30h] [rbp-F8h]
  unsigned int v64; // [rsp+34h] [rbp-F4h] BYREF
  HidLampMultiUpdateReportBuilder *v65; // [rsp+38h] [rbp-F0h] BYREF
  int v66; // [rsp+40h] [rbp-E8h]
  unsigned int v67; // [rsp+44h] [rbp-E4h] BYREF
  int v68; // [rsp+48h] [rbp-E0h]
  HidLampRangeUpdateReportBuilder *v69; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v70; // [rsp+58h] [rbp-D0h] BYREF
  __int128 v71; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE *v72; // [rsp+70h] [rbp-B8h]
  bool *v73; // [rsp+78h] [rbp-B0h]
  int v74; // [rsp+80h] [rbp-A8h] BYREF
  char v75; // [rsp+84h] [rbp-A4h]
  GUID v76; // [rsp+88h] [rbp-A0h] BYREF
  _DWORD v77[4]; // [rsp+98h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v73 = a3;
  *a3 = 0;
  v74 = 0;
  v75 = 0;
  _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(&v74);
  v8 = dword_180266498;
  if ( (unsigned int)dword_180266498 > 5 )
  {
    if ( v75 && (v77[0] || v77[1] || v77[2] || v77[3]) )
      v9 = (const GUID *)v77;
    else
      v9 = 0LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180266498,
      (unsigned __int8 *)dword_180224528,
      &v76,
      v9,
      2u,
      &v78);
    v8 = dword_180266498;
  }
  if ( a2 )
  {
    if ( v8 > 5 )
    {
      LODWORD(v65) = *((_DWORD *)a2 + 6);
      v70 = (__int64)"Updating ViewClient";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_180266498,
        byte_1802244E5,
        v6,
        v7,
        (const unsigned __int16 **)&v70,
        (__int64)&v65);
    }
  }
  else if ( v8 > 5 )
  {
    v70 = (__int64)L"null";
    v65 = (HidLampMultiUpdateReportBuilder *)"Updating ViewClient";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v5,
      byte_1802244A2,
      v6,
      v7,
      (const unsigned __int16 **)&v65,
      (const WCHAR **)&v70);
  }
  v10 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
  {
    v11 = (struct LampArrayDevice::ViewClientListEntry *)*((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = a2;
    v10 = a2 != v11;
  }
  if ( !a2 || !*(_DWORD *)(*((_QWORD *)a2 + 4) + 4100LL) )
  {
    if ( *((_BYTE *)this + 152)
      && (v61 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 1), v62 = v61, v61 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v61);
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v74);
      return v62;
    }
    else
    {
      *((_BYTE *)this + 152) = 0;
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v74);
      return 0LL;
    }
  }
  v12 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a2 + 4) + 4096LL), 0) != 0;
  if ( !v10 && !v12 )
  {
    if ( *((_BYTE *)this + 152) )
    {
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v74);
      return 0LL;
    }
LABEL_24:
    v14 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 0);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v14);
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v74);
      return v15;
    }
    goto LABEL_26;
  }
  if ( !*((_BYTE *)this + 152) )
    goto LABEL_24;
LABEL_26:
  v66 = *(_DWORD *)(*((_QWORD *)this + 3) + 544LL);
  v16 = v66;
  v17 = *((_QWORD *)a2 + 4);
  v18 = *(double *)(v17 + 4192);
  v71 = 0LL;
  v72 = 0LL;
  std::vector<Windows::UI::Color>::reserve(&v71, v66);
  v19 = 0;
  v20 = (_BYTE *)*((_QWORD *)&v71 + 1);
  while ( v19 < (int)v16 )
  {
    v21 = (_DWORD *)(v17 + 36LL * *(int *)(v17 + 524) + 5224 + 4LL * v19);
    if ( v20 == v72 )
    {
      std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>((const void **)&v71, v20, v21);
      v20 = (_BYTE *)*((_QWORD *)&v71 + 1);
    }
    else
    {
      *(_DWORD *)v20 = *v21;
      v20 += 4;
      *((_QWORD *)&v71 + 1) = v20;
    }
    ++v19;
  }
  v22 = *(_QWORD *)(*((_QWORD *)this + 3) + 568LL);
  v78 = 0LL;
  v79 = 0LL;
  std::vector<LampUpdateState>::reserve(&v78, v16);
  v24 = *((double *)this + 20);
  v25 = v18 != v24;
  v26 = 0;
  v27 = v71;
  v28 = v79;
  v29 = v66;
  while ( v26 < v29 )
  {
    v30 = *((_QWORD *)this + 21);
    if ( !*((_BYTE *)this + 152)
      || v25
      || *(_BYTE *)(v30 + 4LL * v26) != *(_BYTE *)(v27 + 4LL * v26)
      || *(_BYTE *)(v30 + 4LL * v26 + 1) != *(_BYTE *)(v27 + 4LL * v26 + 1)
      || *(_BYTE *)(v30 + 4LL * v26 + 2) != *(_BYTE *)(v27 + 4LL * v26 + 2)
      || *(_BYTE *)(v30 + 4LL * v26 + 3) != *(_BYTE *)(v27 + 4LL * v26 + 3) )
    {
      LOBYTE(v68) = (int)((double)*(unsigned __int8 *)(v27 + 4LL * v26) * v18);
      BYTE1(v68) = (int)((double)*(unsigned __int8 *)(v27 + 4LL * v26 + 1) * v18);
      BYTE2(v68) = (int)((double)*(unsigned __int8 *)(v27 + 4LL * v26 + 2) * v18);
      HIBYTE(v68) = (int)((double)*(unsigned __int8 *)(v27 + 4LL * v26 + 3) * v18);
      LODWORD(v65) = v68;
      if ( *(_DWORD *)(v22 + 28) )
        NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
          (const struct Windows::UI::Color *)&v65,
          (const struct LampAttributes *)v22,
          v23,
          (struct LampColor *)&v67);
      else
        NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
          (const struct Windows::UI::Color *)&v65,
          (const struct LampAttributes *)v22,
          v23,
          (struct LampColor *)&v67);
      if ( *((_BYTE *)this + 152) )
        goto LABEL_48;
      LOBYTE(v69) = (int)((double)*(unsigned __int8 *)(v30 + 4LL * v26) * v24);
      BYTE1(v69) = (int)((double)*(unsigned __int8 *)(v30 + 4LL * v26 + 1) * v24);
      BYTE2(v69) = (int)((double)*(unsigned __int8 *)(v30 + 4LL * v26 + 2) * v24);
      BYTE3(v69) = (int)((double)*(unsigned __int8 *)(v30 + 4LL * v26 + 3) * v24);
      LODWORD(v65) = (_DWORD)v69;
      if ( *(_DWORD *)(v22 + 28) )
        NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
          (const struct Windows::UI::Color *)&v65,
          (const struct LampAttributes *)v22,
          v23,
          (struct LampColor *)&v64);
      else
        NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
          (const struct Windows::UI::Color *)&v65,
          (const struct LampAttributes *)v22,
          v23,
          (struct LampColor *)&v64);
      if ( *((_BYTE *)this + 152) )
      {
LABEL_48:
        v31 = v67;
        if ( (_BYTE)v67 != (_BYTE)v64
          || *(_WORD *)((char *)&v67 + 1) != *(_WORD *)((char *)&v64 + 1)
          || HIBYTE(v67) != HIBYTE(v64) )
        {
LABEL_53:
          v70 = __PAIR64__(v31, v26);
          v32 = *(_QWORD *)&v78.Size;
          if ( *(_QWORD *)&v78.Size == v28 )
          {
            std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(
              (const void **)&v78,
              *(_BYTE **)&v78.Size,
              &v70);
            v28 = v79;
          }
          else
          {
            **(_QWORD **)&v78.Size = v70;
            *(_QWORD *)&v78.Size = v32 + 8;
          }
        }
        v29 = v66;
        goto LABEL_57;
      }
      v31 = v67;
      goto LABEL_53;
    }
LABEL_57:
    ++v26;
    v25 = v18 != v24;
  }
  Ptr = (char *)v78.Ptr;
  v34 = (__int64)(*(_QWORD *)&v78.Size - v78.Ptr) >> 3;
  if ( !v34 )
  {
    if ( v78.Ptr )
      std::_Deallocate<16,0>((void *)v78.Ptr, 8 * ((signed __int64)(v28 - v78.Ptr) >> 3));
    goto LABEL_61;
  }
  v64 = 0;
  v65 = 0LL;
  updated = HidLampArrayDevice::CreateMultiUpdateReportBuilder(*((HidLampArrayDevice **)this + 3), &v65);
  v36 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x233,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)updated);
    if ( v65 )
      RefCountedObject::Release(v65);
    if ( Ptr )
      goto LABEL_66;
    goto LABEL_67;
  }
  v69 = 0LL;
  v37 = HidLampArrayDevice::CreateRangeUpdateReportBuilder(*((HidLampArrayDevice **)this + 3), &v69);
  v36 = v37;
  if ( v37 >= 0 )
  {
    v38 = operator new[](v34, (const struct std::nothrow_t *)&std::nothrow);
    v39 = v38;
    if ( v38 )
    {
      memset_0(v38, 0, v34);
      v40 = 0LL;
      v41 = v65;
      v42 = v69;
      while ( 1 )
      {
        v66 = v40;
        v43 = *(_QWORD *)&v78.Size;
        v44 = (__int64)(*(_QWORD *)&v78.Size - (_QWORD)Ptr) >> 3;
        v70 = v40;
        if ( v40 >= v44 )
          break;
        CanIncludeInNextUpdate = HidLampRangeUpdateReportBuilder::CanIncludeInNextUpdate(
                                   v42,
                                   (struct LampUpdateState *)&Ptr[8 * v40]);
        if ( !CanIncludeInNextUpdate || (HidLampRangeUpdateReportBuilder::IncludeInNextUpdate(v42, v45), v70 == v44 - 1) )
        {
          if ( HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v42) >= *((_DWORD *)v41 + 4) )
          {
            v47 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v46);
            v64 += v47;
            if ( v64 >= v44 )
              *((_DWORD *)v42 + 5) |= 1u;
            *v73 = 1;
            v48 = HidLampRangeUpdateReportBuilder::SendLampStateUpdate(v42);
            v49 = v48;
            if ( v48 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x256,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                (const char *)(unsigned int)v48);
              operator delete[](v39);
              if ( v42 )
                RefCountedObject::Release(v42);
              RefCountedObject::Release(v41);
              if ( Ptr )
                goto LABEL_119;
              goto LABEL_120;
            }
            v50 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v42);
            if ( v52 > v52 - v50 )
            {
              do
              {
                *((_BYTE *)v39 + v51) = 1;
                v53 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v42);
              }
              while ( v51 > v54 - v53 );
            }
          }
          *(_OWORD *)((char *)v42 + 20) = 0LL;
          *((_BYTE *)v42 + 16) = 0;
        }
        v40 = (unsigned int)(v66 + 1);
      }
      if ( v64 < v44 )
      {
        for ( i = 0LL; ; i = (unsigned int)((_DWORD)v65 + 1) )
        {
          LODWORD(v65) = i;
          if ( i >= (v43 - (__int64)Ptr) >> 3 )
            break;
          if ( !*((_BYTE *)v39 + i) )
          {
            HidLampMultiUpdateReportBuilder::IncludeInNextUpdate(v41, (struct LampUpdateState *)&Ptr[8 * i]);
            v58 = v57 + 1;
            v64 = v58;
            if ( *((_DWORD *)v41 + 6) >= *((_DWORD *)v41 + 4) )
            {
              if ( v58 >= v56 )
                *((_DWORD *)v41 + 7) |= 1u;
              *v73 = 1;
              v59 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate(v41);
              v49 = v59;
              if ( v59 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x27A,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                  (const char *)(unsigned int)v59);
                operator delete[](v39);
                if ( v42 )
                  RefCountedObject::Release(v42);
                RefCountedObject::Release(v41);
                if ( !Ptr )
                  goto LABEL_120;
                goto LABEL_119;
              }
              HidLampMultiUpdateReportBuilder::Reset(v41);
            }
            v43 = *(_QWORD *)&v78.Size;
          }
        }
        if ( !*((_DWORD *)v41 + 6) )
          goto LABEL_121;
        *((_DWORD *)v41 + 7) |= 1u;
        *v73 = 1;
        v60 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate(v41);
        v49 = v60;
        if ( v60 >= 0 )
          goto LABEL_121;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x288,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
          (const char *)(unsigned int)v60);
        operator delete[](v39);
        if ( v42 )
          RefCountedObject::Release(v42);
        RefCountedObject::Release(v41);
        if ( !Ptr )
          goto LABEL_120;
LABEL_119:
        std::_Deallocate<16,0>(Ptr, 8 * ((v28 - (__int64)Ptr) >> 3));
LABEL_120:
        std::vector<Windows::UI::Color>::_Tidy((__int64)&v71);
        _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v74);
        return v49;
      }
LABEL_121:
      *((double *)this + 20) = v18;
      std::vector<unsigned int>::operator=((_QWORD *)this + 21, &v71);
      *((_BYTE *)this + 152) = 1;
      operator delete[](v39);
      if ( v42 )
        RefCountedObject::Release(v42);
      if ( v41 )
        RefCountedObject::Release(v41);
      if ( Ptr )
        std::_Deallocate<16,0>(Ptr, 8 * ((v28 - (__int64)Ptr) >> 3));
LABEL_61:
      std::vector<Windows::UI::Color>::_Tidy((__int64)&v71);
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v74);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)0x8007000ELL);
      if ( v69 )
        RefCountedObject::Release(v69);
      if ( v65 )
        RefCountedObject::Release(v65);
      if ( Ptr )
        std::_Deallocate<16,0>(Ptr, 8 * ((v28 - (__int64)Ptr) >> 3));
      std::vector<Windows::UI::Color>::_Tidy((__int64)&v71);
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v74);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x236,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v37);
    if ( v69 )
      RefCountedObject::Release(v69);
    if ( v65 )
      RefCountedObject::Release(v65);
    if ( Ptr )
LABEL_66:
      std::_Deallocate<16,0>(Ptr, 8 * ((v28 - (__int64)Ptr) >> 3));
LABEL_67:
    std::vector<Windows::UI::Color>::_Tidy((__int64)&v71);
    _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v74);
    return v36;
  }
}
