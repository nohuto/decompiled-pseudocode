/*
 * XREFs of ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800D20F4
 * Callers:
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x1800D2E98 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??_V@YAXPEAX@Z @ 0x18004AF4C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B774 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?zInternalRelatedId@?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEBAPEBU_GUID@@XZ @ 0x18004D1A0 (-zInternalRelatedId@-$_TlgActivityBase@V-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingP.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800BBA00 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800CFEC4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x1800D1680 (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800D1794 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??1?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@IEAA@XZ @ 0x1800D1AC4 (--1-$_TlgActivityBase@V-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingProvider@@3QEBU_tl.c)
 *     ?reserve@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAAX_K@Z @ 0x1800D325C (-reserve@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAAX_K@Z.c)
 *     ?reserve@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAX_K@Z @ 0x1800D3298 (-reserve@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@QEAAX_K@Z.c)
 *     ?zInternalStart@?$_TlgActivityBase@V?$TraceLoggingThreadActivity@$1?g_hMinInputTraceLoggingProvider@@3QEBU_tlgProvider_t@@EB$0A@$04U_TlgReflectorTag_Param0IsHProvider@@@@$0A@$04@@QEAAXXZ @ 0x1800D32E0 (-zInternalStart@-$_TlgActivityBase@V-$TraceLoggingThreadActivity@$1-g_hMinInputTraceLoggingProvi.c)
 *     ?CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@@@Z @ 0x1800D6BA8 (-CreateMultiUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampMultiUpdateReportBuilder@.c)
 *     ?CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@@@Z @ 0x1800D6C20 (-CreateRangeUpdateReportBuilder@HidLampArrayDevice@@QEAAJPEAPEAVHidLampRangeUpdateReportBuilder@.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800D8CC4 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     ?GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800D92C0 (-GetNearestSupportedFixedColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampA.c)
 *     ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800D9430 (-GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AE.c)
 *     ?CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z @ 0x1800D9800 (-CanIncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAA_NPEAULampUpdateState@@@Z.c)
 *     ?CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ @ 0x1800D9904 (-CurrentIncludedLampStates@HidLampRangeUpdateReportBuilder@@QEAAIXZ.c)
 *     ?IncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z @ 0x1800D9920 (-IncludeInNextUpdate@HidLampRangeUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z.c)
 *     ?SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ @ 0x1800D995C (-SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ.c)
 *     ?IncludeInNextUpdate@HidLampMultiUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z @ 0x1800D9BF0 (-IncludeInNextUpdate@HidLampMultiUpdateReportBuilder@@QEAAJPEAULampUpdateState@@@Z.c)
 *     ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x1800D9DB4 (-Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ.c)
 *     ?SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ @ 0x1800D9E20 (-SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ.c)
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
  const GUID *v9; // rax
  bool v10; // zf
  char v11; // al
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // r14
  __int64 v16; // rdi
  double v17; // xmm7_8
  _DWORD *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // ebx
  __int64 v22; // r15
  struct Windows::UI::Color *v23; // r8
  double v24; // xmm6_8
  bool v25; // al
  int v26; // esi
  _BYTE *v27; // r14
  _BYTE *v28; // r12
  __int64 v29; // rdi
  unsigned int v30; // eax
  char *Ptr; // r15
  __int64 v32; // r12
  int updated; // eax
  unsigned int v34; // ebx
  int v35; // eax
  size_t v36; // r12
  void *v37; // rax
  void *v38; // rsi
  unsigned __int64 v39; // rax
  HidLampMultiUpdateReportBuilder *v40; // rdi
  HidLampRangeUpdateReportBuilder *v41; // rbx
  struct LampUpdateState *v42; // rdx
  HidLampRangeUpdateReportBuilder *v43; // rcx
  unsigned int v44; // eax
  int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // edx
  int v48; // r8d
  size_t i; // rax
  int v50; // r10d
  unsigned int v51; // r10d
  int v52; // eax
  int v53; // eax
  unsigned int v54; // r12d
  int v55; // eax
  unsigned int v56; // ebx
  unsigned int v57; // [rsp+34h] [rbp-104h] BYREF
  int v58; // [rsp+38h] [rbp-100h]
  HidLampRangeUpdateReportBuilder *v59; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v60; // [rsp+48h] [rbp-F0h] BYREF
  HidLampMultiUpdateReportBuilder *v61; // [rsp+50h] [rbp-E8h] BYREF
  int v62; // [rsp+58h] [rbp-E0h]
  __int64 v63; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v64; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v65; // [rsp+78h] [rbp-C0h]
  unsigned __int16 *v66; // [rsp+80h] [rbp-B8h] BYREF
  int v67; // [rsp+88h] [rbp-B0h] BYREF
  char v68; // [rsp+8Ch] [rbp-ACh]
  GUID v69; // [rsp+90h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+B0h] [rbp-88h] BYREF
  _BYTE *v71; // [rsp+C0h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v66 = (unsigned __int16 *)a3;
  *a3 = 0;
  v67 = 0;
  v68 = 0;
  _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalStart(&v67);
  v8 = dword_180240410;
  if ( (unsigned int)dword_180240410 > 5 )
  {
    v9 = (const GUID *)_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::zInternalRelatedId((__int64)&v67);
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180240410,
      (unsigned __int8 *)dword_180202B02,
      &v69,
      v9,
      2u,
      &v70);
    v8 = dword_180240410;
  }
  if ( !a2 )
  {
    if ( v8 > 5 )
    {
      v66 = L"null";
      v63 = (__int64)"Updating ViewClient";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v5,
        byte_180202B2F,
        v6,
        v7,
        (const unsigned __int16 **)&v63,
        &v66);
    }
    goto LABEL_119;
  }
  if ( v8 > 5 )
  {
    LODWORD(v59) = *((_DWORD *)a2 + 6);
    v63 = (__int64)"Updating ViewClient";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_180240410,
      byte_180202ABF,
      v6,
      v7,
      (const unsigned __int16 **)&v63,
      (__int64)&v59);
  }
  if ( !*(_DWORD *)(*((_QWORD *)a2 + 4) + 4100LL) )
  {
LABEL_119:
    if ( *((_BYTE *)this + 144)
      && (v55 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 1), v56 = v55, v55 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v55);
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v67);
      return v56;
    }
    else
    {
      *((_BYTE *)this + 144) = 0;
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v67);
      return 0LL;
    }
  }
  v10 = _InterlockedExchange((volatile __int32 *)(*((_QWORD *)a2 + 4) + 4096LL), 0) == 0;
  v11 = *((_BYTE *)this + 144);
  if ( v10 )
  {
    if ( v11 )
    {
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v67);
      return 0LL;
    }
LABEL_11:
    v13 = HidLampArrayDevice::SetAutonomousMode(*((HidLampArrayDevice **)this + 3), 0);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v13);
      _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v67);
      return v14;
    }
    goto LABEL_123;
  }
  if ( !v11 )
    goto LABEL_11;
LABEL_123:
  LODWORD(v61) = *(_DWORD *)(*((_QWORD *)this + 3) + 544LL);
  v15 = (int)v61;
  v16 = *((_QWORD *)a2 + 4);
  v17 = *(double *)(v16 + 4192);
  v64 = 0LL;
  v65 = 0LL;
  std::vector<Windows::UI::Color>::reserve(&v64, (int)v61);
  v21 = 0;
  v20 = v65;
  while ( v21 < (int)v15 )
  {
    v18 = (_DWORD *)(v16 + 36LL * *(int *)(v16 + 524) + 5224 + 4LL * v21);
    v19 = *((_QWORD *)&v64 + 1);
    if ( *((_QWORD *)&v64 + 1) == v20 )
    {
      std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>(
        (const void **)&v64,
        *((_BYTE **)&v64 + 1),
        v18);
      v20 = v65;
    }
    else
    {
      **((_DWORD **)&v64 + 1) = *v18;
      *((_QWORD *)&v64 + 1) = v19 + 4;
    }
    ++v21;
  }
  v22 = *(_QWORD *)(*((_QWORD *)this + 3) + 568LL);
  v70 = 0LL;
  v71 = 0LL;
  std::vector<LampUpdateState>::reserve(&v70, v15);
  v24 = *((double *)this + 19);
  v25 = v17 != v24;
  v26 = 0;
  v27 = v71;
  v28 = *(_BYTE **)&v70.Size;
  while ( v26 < (int)v61 )
  {
    v29 = *((_QWORD *)this + 20);
    if ( !*((_BYTE *)this + 144)
      || v25
      || *(_BYTE *)(v29 + 4LL * v26) != *(_BYTE *)(v64 + 4LL * v26)
      || *(_BYTE *)(v29 + 4LL * v26 + 1) != *(_BYTE *)(v64 + 4LL * v26 + 1)
      || *(_BYTE *)(v29 + 4LL * v26 + 2) != *(_BYTE *)(v64 + 4LL * v26 + 2)
      || *(_BYTE *)(v29 + 4LL * v26 + 3) != *(_BYTE *)(v64 + 4LL * v26 + 3) )
    {
      LOBYTE(v62) = (int)((double)*(unsigned __int8 *)(v64 + 4LL * v26) * v17);
      BYTE1(v62) = (int)((double)*(unsigned __int8 *)(v64 + 4LL * v26 + 1) * v17);
      BYTE2(v62) = (int)((double)*(unsigned __int8 *)(v64 + 4LL * v26 + 2) * v17);
      HIBYTE(v62) = (int)((double)*(unsigned __int8 *)(v64 + 4LL * v26 + 3) * v17);
      LODWORD(v59) = v62;
      if ( *(_DWORD *)(v22 + 28) )
        NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
          (const struct Windows::UI::Color *)&v59,
          (const struct LampAttributes *)v22,
          v23,
          (struct LampColor *)&v60);
      else
        NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
          (const struct Windows::UI::Color *)&v59,
          (const struct LampAttributes *)v22,
          v23,
          (struct LampColor *)&v60);
      if ( !*((_BYTE *)this + 144) )
      {
        LOBYTE(v58) = (int)((double)*(unsigned __int8 *)(v29 + 4LL * v26) * v24);
        BYTE1(v58) = (int)((double)*(unsigned __int8 *)(v29 + 4LL * v26 + 1) * v24);
        BYTE2(v58) = (int)((double)*(unsigned __int8 *)(v29 + 4LL * v26 + 2) * v24);
        HIBYTE(v58) = (int)((double)*(unsigned __int8 *)(v29 + 4LL * v26 + 3) * v24);
        LODWORD(v59) = v58;
        if ( *(_DWORD *)(v22 + 28) )
          NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
            (const struct Windows::UI::Color *)&v59,
            (const struct LampAttributes *)v22,
            v23,
            (struct LampColor *)&v57);
        else
          NearestColor::GetNearestSupportedFixedColorAndDeviceChannels(
            (const struct Windows::UI::Color *)&v59,
            (const struct LampAttributes *)v22,
            v23,
            (struct LampColor *)&v57);
        if ( !*((_BYTE *)this + 144) )
        {
          v30 = v60;
LABEL_39:
          v63 = __PAIR64__(v30, v26);
          if ( v28 == v27 )
          {
            std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>((const void **)&v70, v28, &v63);
            v27 = v71;
            v28 = *(_BYTE **)&v70.Size;
          }
          else
          {
            *(_QWORD *)v28 = v63;
            v28 += 8;
            *(_QWORD *)&v70.Size = v28;
          }
          goto LABEL_42;
        }
      }
      v30 = v60;
      if ( (_BYTE)v60 != (_BYTE)v57
        || *(_WORD *)((char *)&v60 + 1) != *(_WORD *)((char *)&v57 + 1)
        || HIBYTE(v60) != HIBYTE(v57) )
      {
        goto LABEL_39;
      }
    }
LABEL_42:
    ++v26;
    v25 = v17 != v24;
  }
  Ptr = (char *)v70.Ptr;
  v32 = (__int64)&v28[-v70.Ptr];
  if ( (unsigned __int64)v32 < 8 )
  {
    if ( v70.Ptr )
      std::_Deallocate<16,0>((void *)v70.Ptr, 8 * ((__int64)&v27[-v70.Ptr] >> 3));
LABEL_46:
    std::vector<Windows::UI::Color>::_Tidy((__int64)&v64);
    _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v67);
    return 0LL;
  }
  v57 = 0;
  v61 = 0LL;
  updated = HidLampArrayDevice::CreateMultiUpdateReportBuilder(*((HidLampArrayDevice **)this + 3), &v61);
  v34 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)updated);
    if ( v61 )
      RefCountedObject::Release(v61);
    if ( Ptr )
      std::_Deallocate<16,0>(Ptr, 8 * ((v27 - Ptr) >> 3));
LABEL_52:
    std::vector<Windows::UI::Color>::_Tidy((__int64)&v64);
    _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v67);
    return v34;
  }
  v59 = 0LL;
  v35 = HidLampArrayDevice::CreateRangeUpdateReportBuilder(*((HidLampArrayDevice **)this + 3), &v59);
  v34 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D8,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v35);
    if ( v59 )
      RefCountedObject::Release(v59);
    if ( v61 )
      RefCountedObject::Release(v61);
    if ( Ptr )
      std::_Deallocate<16,0>(Ptr, 8 * ((v27 - Ptr) >> 3));
    goto LABEL_52;
  }
  v36 = v32 >> 3;
  v37 = operator new[](v36, (const struct std::nothrow_t *)&std::nothrow);
  v38 = v37;
  if ( v37 )
  {
    memset_0(v37, 0, v36);
    v39 = 0LL;
    v40 = v61;
    v41 = v59;
    while ( 1 )
    {
      v58 = v39;
      v63 = v39;
      if ( v39 >= v36 )
        break;
      if ( !HidLampRangeUpdateReportBuilder::CanIncludeInNextUpdate(v41, (struct LampUpdateState *)&Ptr[8 * v39])
        || (HidLampRangeUpdateReportBuilder::IncludeInNextUpdate(v41, v42), v63 == v36 - 1) )
      {
        if ( HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v41) >= *((_DWORD *)v40 + 4) )
        {
          v44 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v43);
          v57 += v44;
          if ( v57 >= v36 )
            *((_DWORD *)v41 + 5) |= 1u;
          *(_BYTE *)v66 = 1;
          v45 = HidLampRangeUpdateReportBuilder::SendLampStateUpdate(v41);
          LODWORD(v61) = v45;
          if ( v45 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1F8,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
              (const char *)(unsigned int)v45);
            operator delete[](v38);
            if ( v41 )
              RefCountedObject::Release(v41);
            RefCountedObject::Release(v40);
            if ( Ptr )
              std::_Deallocate<16,0>(Ptr, 8 * ((v27 - Ptr) >> 3));
LABEL_81:
            std::vector<Windows::UI::Color>::_Tidy((__int64)&v64);
            _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v67);
            return (unsigned int)v61;
          }
          while ( 1 )
          {
            v46 = HidLampRangeUpdateReportBuilder::CurrentIncludedLampStates(v41);
            if ( v47 <= v48 - v46 )
              break;
            *((_BYTE *)v38 + v47) = 1;
          }
        }
        *(_OWORD *)((char *)v41 + 20) = 0LL;
        *((_BYTE *)v41 + 16) = 0;
      }
      v39 = (unsigned int)(v58 + 1);
    }
    if ( v57 >= v36 )
    {
LABEL_108:
      *((double *)this + 19) = v17;
      if ( (__int128 *)((char *)this + 160) != &v64 )
      {
        std::vector<Windows::UI::Color>::_Tidy((__int64)this + 160);
        *((_OWORD *)this + 10) = v64;
        *((_QWORD *)this + 22) = v65;
        v64 = 0LL;
        v65 = 0LL;
      }
      *((_BYTE *)this + 144) = 1;
      operator delete[](v38);
      if ( v41 )
        RefCountedObject::Release(v41);
      if ( v40 )
        RefCountedObject::Release(v40);
      if ( Ptr )
        std::_Deallocate<16,0>(Ptr, 8 * ((v27 - Ptr) >> 3));
      goto LABEL_46;
    }
    for ( i = 0LL; ; i = (unsigned int)((_DWORD)v59 + 1) )
    {
      LODWORD(v59) = i;
      if ( i >= v36 )
        break;
      if ( !*((_BYTE *)v38 + i) )
      {
        HidLampMultiUpdateReportBuilder::IncludeInNextUpdate(v40, (struct LampUpdateState *)&Ptr[8 * i]);
        v51 = v50 + 1;
        v57 = v51;
        if ( *((_DWORD *)v40 + 6) >= *((_DWORD *)v40 + 4) )
        {
          if ( v51 >= v36 )
            *((_DWORD *)v40 + 7) |= 1u;
          *(_BYTE *)v66 = 1;
          v52 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate(v40);
          LODWORD(v61) = v52;
          if ( v52 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x21C,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
              (const char *)(unsigned int)v52);
            operator delete[](v38);
            if ( v41 )
              RefCountedObject::Release(v41);
            RefCountedObject::Release(v40);
            if ( Ptr )
              std::_Deallocate<16,0>(Ptr, 8 * ((v27 - Ptr) >> 3));
            goto LABEL_81;
          }
          HidLampMultiUpdateReportBuilder::Reset(v40);
        }
      }
    }
    if ( !*((_DWORD *)v40 + 6) )
      goto LABEL_108;
    *((_DWORD *)v40 + 7) |= 1u;
    *(_BYTE *)v66 = 1;
    v53 = HidLampMultiUpdateReportBuilder::SendLampStateUpdate(v40);
    v54 = v53;
    if ( v53 >= 0 )
      goto LABEL_108;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v53);
    operator delete[](v38);
    if ( v41 )
      RefCountedObject::Release(v41);
    RefCountedObject::Release(v40);
    if ( Ptr )
      std::_Deallocate<16,0>(Ptr, 8 * ((v27 - Ptr) >> 3));
    std::vector<Windows::UI::Color>::_Tidy((__int64)&v64);
    _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v67);
    return v54;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)0x8007000ELL);
    if ( v59 )
      RefCountedObject::Release(v59);
    if ( v61 )
      RefCountedObject::Release(v61);
    if ( Ptr )
      std::_Deallocate<16,0>(Ptr, 8 * ((v27 - Ptr) >> 3));
    std::vector<Windows::UI::Color>::_Tidy((__int64)&v64);
    _TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>::~_TlgActivityBase<TraceLoggingThreadActivity<&_tlgProvider_t const * const g_hMinInputTraceLoggingProvider,0,5,_TlgReflectorTag_Param0IsHProvider>,0,5>((__int64)&v67);
    return 2147942414LL;
  }
}
