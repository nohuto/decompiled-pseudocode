/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D9608
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C01D8E38 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCIn.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0042158 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     SendMessageTo @ 0x1C0091DE0 (SendMessageTo.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00CDE80 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C00E7FF8 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C00E8416 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1C01B8D38 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C01B8DC0 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@6@Z @ 0x1C01BC258 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U4@.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C01D77F4 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C01D7DEC (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 *     ?GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z @ 0x1C01DE300 (-GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z.c)
 *     ?Set@CHitTestState@@QEAAXAEBVCInputDest@@IHH@Z @ 0x1C01DF8BC (-Set@CHitTestState@@QEAAXAEBVCInputDest@@IHH@Z.c)
 *     ?GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ @ 0x1C01E5200 (-GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1C0208C3C (ApiSetEditionIsPointerInputRedirected.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        struct _KTHREAD **a1,
        int *a2,
        struct CPointerInputFrame *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _WORD *a7,
        unsigned int *a8,
        unsigned int a9)
{
  __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r12d
  char v15; // si
  CInputDest *v16; // r13
  unsigned int v17; // eax
  CInputDest *v18; // rcx
  struct tagWND *UserWindow; // rax
  __int64 v20; // r8
  __int128 *WindowDetails; // rax
  __int128 v22; // xmm1
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  CTouchProcessor *v26; // rcx
  int v27; // r15d
  struct tagPROCESSINFO *InputProcessContext; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  __int16 v33; // r15
  int v34; // edx
  CSpatialProcessor *v35; // r9
  int v36; // edx
  int v37; // r8d
  int v38; // ecx
  int v39; // ecx
  const struct CHitTestState *HitTestState; // rax
  const struct CHitTestState *v41; // r15
  int v42; // ebx
  int v43; // r15d
  int v44; // eax
  __int64 v45; // r13
  int v46; // eax
  int v47; // r8d
  __int64 v48; // r15
  CInputDest *v49; // rax
  int v50; // r8d
  char v51; // r9
  int v52; // ecx
  __int64 v53; // rax
  bool v54; // zf
  _WORD *v55; // r9
  int v56; // edx
  __int16 v57; // cx
  const int *v58; // r8
  int IsPointerInputRedirected; // [rsp+50h] [rbp-B0h]
  int v61; // [rsp+54h] [rbp-ACh]
  int v62; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v63; // [rsp+5Ch] [rbp-A4h]
  int v64; // [rsp+60h] [rbp-A0h]
  int v65; // [rsp+64h] [rbp-9Ch] BYREF
  int v66; // [rsp+68h] [rbp-98h] BYREF
  int v67; // [rsp+6Ch] [rbp-94h]
  int v68; // [rsp+70h] [rbp-90h]
  struct CPointerInputFrame *v69; // [rsp+78h] [rbp-88h]
  unsigned int *v70; // [rsp+80h] [rbp-80h]
  __int64 v71; // [rsp+88h] [rbp-78h]
  CSpatialProcessor *v72; // [rsp+90h] [rbp-70h]
  const WCHAR *v73; // [rsp+98h] [rbp-68h] BYREF
  void *v74; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-58h] BYREF
  _WORD *v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h]
  int v78; // [rsp+C0h] [rbp-40h]
  int v79; // [rsp+C4h] [rbp-3Ch]
  int v80; // [rsp+C8h] [rbp-38h]
  int v81; // [rsp+CCh] [rbp-34h]
  __int64 v82; // [rsp+D0h] [rbp-30h]
  __int64 v83; // [rsp+D8h] [rbp-28h]
  int v84; // [rsp+E0h] [rbp-20h]
  __int64 v85; // [rsp+E4h] [rbp-1Ch]
  int v86; // [rsp+ECh] [rbp-14h]
  __int128 v87; // [rsp+F0h] [rbp-10h]
  __int128 v88; // [rsp+100h] [rbp+0h]
  PERESOURCE *v89[6]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v90[40]; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v91[28]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v92[112]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v93[16]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v94[128]; // [rsp+2D0h] [rbp+1D0h] BYREF

  v10 = a4;
  v69 = a3;
  v72 = (CSpatialProcessor *)a1;
  v76 = a7;
  v71 = a4;
  v70 = a8;
  v63 = a9;
  memset(a2, 0, 0x70uLL);
  *((_BYTE *)a2 + 112) = 0;
  v64 = 0;
  v61 = a6 & 0x10000;
  v14 = 0;
  IsPointerInputRedirected = 0;
  v67 = a6 & 0x40004;
  v68 = a6 & 0x40000;
  if ( a1[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a6 & 0x40000, v12, v13);
  v15 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v12 || (_BYTE)v13 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      65,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v16 = (CInputDest *)(a5 + 72);
  *a8 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a5 + 72), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a5 + 72), 896) )
  {
    CInputDest::SetEmpty((CInputDest *)(a5 + 72));
    v17 = *(_DWORD *)(a5 + 300) & 0xFFFFFFCF;
    *(_DWORD *)(a5 + 300) = v17;
    if ( (v17 & 0x4000) == 0 )
    {
      *(_DWORD *)(a5 + 300) = v17 | 0x4000;
      CInputDest::GetBaseWindow((CInputDest *)(a5 + 72));
      UserWindow = CInputDest::GetUserWindow(v18);
      WindowDetails = (__int128 *)InputTraceLogging::GetWindowDetails((__int64)v90, (__int64)UserWindow, v20);
      v22 = WindowDetails[1];
      v87 = *WindowDetails;
      v88 = v22;
      if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
      {
        v65 = DWORD2(v88);
        v66 = DWORD2(v88);
        v73 = (const WCHAR *)v88;
        v74 = (void *)v87;
        v75 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v23,
          byte_1C02619D5,
          v24,
          v25,
          (__int64)&v75,
          &v74,
          &v73,
          (__int64)&v66,
          (__int64)&v65);
      }
    }
  }
  CInputDest::operator=((__int64)a2, a5 + 72);
  if ( *a2 )
  {
    v27 = *(_DWORD *)(a5 + 300);
    v64 = 1;
    v14 = -__CFSHR__(v27, 5);
    IsPointerInputRedirected = -__CFSHR__(v27, 6);
    goto LABEL_27;
  }
  InputProcessContext = CTouchProcessor::GetInputProcessContext(v26, *(void **)(v10 + 24));
  if ( InputProcessContext )
  {
    memset(v92, 0, sizeof(v92));
    IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(
                                 InputProcessContext,
                                 *(unsigned int *)(a5 + 60),
                                 v92);
    CInputDest::CInputDest((CInputDest *)v93, (const struct tagINPUTDEST *)v92);
    CInputDest::operator=((__int64)a2, v93);
    CInputDest::SetEmpty((CInputDest *)v93);
    v32 = *a2;
    v14 = IsPointerInputRedirected;
    if ( IsPointerInputRedirected )
    {
      if ( v32 )
        goto LABEL_27;
    }
    else if ( !v32 )
    {
      goto LABEL_27;
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
  }
LABEL_27:
  v33 = 32;
  if ( *(_DWORD *)(a5 + 232) )
    goto LABEL_34;
  if ( *a2 )
    goto LABEL_32;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_PointerCaptureLock__private_reporting,
    31344584LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
    1,
    3);
  if ( v67 && !v61 )
  {
    if ( !*a2 )
      goto LABEL_63;
LABEL_32:
    v34 = *(_DWORD *)(v10 + 8);
    if ( (unsigned int)(v34 - 2) <= 1 )
      CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        v72,
        v34,
        *(struct tagPOINT *)(v10 + 40),
        *(_QWORD *)(v10 + 88),
        *(unsigned __int16 *)(a5 + 32),
        v63);
    goto LABEL_34;
  }
  if ( (*((_DWORD *)v69 + 57) & 0x80u) != 0
    && (HitTestState = CPTPProcessor::GetHitTestState(*(CPTPProcessor **)(*((_QWORD *)v69 + 32) + 1056LL), v69),
        (v41 = HitTestState) != 0LL) )
  {
    CInputDest::operator=((__int64)a2, (__int64)HitTestState);
    *v70 = *((_DWORD *)v41 + 30);
    v14 = -__CFSHR__(*((_DWORD *)v41 + 31), 2);
    v42 = *((_DWORD *)v41 + 31) & 1;
  }
  else
  {
    v43 = (a6 & 0x4002000) == 0 ? 0x200 : 0;
    if ( *(_DWORD *)(a5 + 60) == 3 && (*(_DWORD *)(v10 + 20) & 4) != 0 )
    {
      v44 = *(_DWORD *)(v10 + 104);
      if ( (v44 & 1) != 0 )
        v43 |= 0x40u;
      if ( (v44 & 4) != 0 )
        v43 |= 0x80u;
    }
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v89,
      (struct _KTHREAD **)v72 + 4,
      0LL);
    v45 = *((_QWORD *)v69 + 32);
    if ( (v43 & 0x200) == 0 || *(_DWORD *)(v45 + 24) == 7 )
    {
      if ( *(_DWORD *)(v45 + 960) )
      {
        v46 = *(_DWORD *)(v45 + 956);
        v81 = 0;
        v80 = v46;
        v77 = *(_QWORD *)(v10 + 24);
        v78 = *(_DWORD *)(v10 + 8);
        v79 = *(_DWORD *)(v10 + 180);
        SendMessageTo(20LL);
      }
      *(_DWORD *)(v45 + 956) = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken();
      *(_DWORD *)(v45 + 960) = 1;
    }
    v42 = *(_DWORD *)(v45 + 956);
    v62 = 0;
    memset(v91, 0, sizeof(v91));
    v47 = v43;
    v48 = v71;
    v49 = CTouchProcessor::TouchHitTest((CInputDest *)v94, v71, v47, v63, v42, (__int64)&v62, (__int64)v91);
    CInputDest::operator=((__int64)a2, v49);
    CInputDest::SetEmpty((CInputDest *)v94);
    v50 = v91[20];
    v51 = v62 != 0;
    *v70 = v91[20];
    InputTraceLogging::Pointer::SpeedHitTest(
      (const union POINTERINFOUNION *)(v48 + 8),
      (const struct CInputDest *)a2,
      v50,
      v51);
    LOBYTE(v42) = (unsigned int)(a2[1] - 2) <= 1;
    if ( v91[26]
      && ((v52 = *(_DWORD *)(v45 + 360), (v52 & 8) == 0)
       || (v52 & 0x10) != 0
       || (*(_DWORD *)(*(_QWORD *)(v45 + 16) + 184LL) & 0x4000) != 0) )
    {
      *(_DWORD *)(a5 + 232) = v91[26];
      CInputDest::SetEmpty((CInputDest *)a2);
      LOBYTE(v42) = 0;
    }
    else if ( v61 )
    {
      v53 = *((_QWORD *)a2 + 12);
      v86 = 0;
      v82 = v53;
      v83 = *(_QWORD *)(v48 + 24);
      v84 = *(_DWORD *)(v48 + 8);
      v85 = *(_QWORD *)(v48 + 40);
      SendMessageTo(6LL);
    }
    if ( (*((_DWORD *)v69 + 57) & 0x80u) != 0 )
      CHitTestState::Set(
        (CHitTestState *)(*(_QWORD *)(*((_QWORD *)v69 + 32) + 1056LL) + 384LL),
        (const struct CInputDest *)a2,
        *v70,
        (unsigned __int8)v42,
        (unsigned __int8)v42);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v89);
    v16 = (CInputDest *)(a5 + 72);
  }
  v54 = (_BYTE)v42 == 0;
  v33 = 32;
  v10 = v71;
  if ( !v54 )
  {
    *(_DWORD *)(a5 + 300) |= 0x40u;
    v14 = 1;
  }
LABEL_34:
  if ( v61 && *a2 )
  {
    CInputDest::operator=((__int64)v16, (__int64)a2);
    v35 = v72;
    v36 = *(unsigned __int16 *)(a5 + 32);
    v37 = IsPointerInputRedirected;
    v38 = *(_DWORD *)(a5 + 300) ^ (*(_DWORD *)(a5 + 300) ^ (16 * v14)) & 0x10;
    *(_DWORD *)(a5 + 300) = v38 ^ (v38 ^ (32 * IsPointerInputRedirected)) & 0x20;
    v39 = *(_DWORD *)(v10 + 8);
    *((_QWORD *)v35 + 2) = *(_QWORD *)(v10 + 88);
    *((_DWORD *)v35 + 6) = v39;
    *((_DWORD *)v35 + 7) = v36;
    goto LABEL_67;
  }
LABEL_63:
  if ( v68 && *(_DWORD *)v16 )
  {
    CInputDest::SetEmpty(v16);
    *(_DWORD *)(a5 + 300) &= 0xFFFFBFCF;
  }
  v37 = IsPointerInputRedirected;
LABEL_67:
  v55 = v76;
  HIWORD(v56) = HIWORD(v64);
  LOWORD(v56) = *v76 | (16 * v64);
  *v76 = v56;
  if ( !v14 && (*(_DWORD *)(a5 + 300) & 0x40) == 0 )
    v33 = 0;
  v57 = v33 | v56 | (v37 != 0 ? 0x40 : 0);
  *v55 = v57;
  *v55 = v57 | (2 * (*(_DWORD *)(a5 + 300) & 0x40));
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v56) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v56) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v15 = 0;
  if ( (_BYTE)v56 || v15 )
  {
    v58 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    LOBYTE(v58) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v56,
      (_DWORD)v58,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      66,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  return a2;
}
