/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C0055BE0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00557D8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9484 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01FA328 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C005361C (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C0057AD4 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     ?GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ @ 0x1C00AB7C4 (-GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C00AC594 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C00D4174 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C00E4612 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C01B4FB0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ @ 0x1C01B5554 (-GetBaseWindow@CInputDest@@QEBAPEAUtagBWND@@XZ.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01D2B54 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C01F2568 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapSz@G@@4444654444@Z @ 0x1C01F3E70 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapSz@.c)
 *     ?UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z @ 0x1C01FB614 (-UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C0206F44 (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 */

_OWORD *__fastcall CMouseProcessor::MouseHitTest(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        CMouseProcessor::CMouseEvent *a5,
        int a6,
        _DWORD *a7)
{
  __int64 v8; // rbx
  char v12; // r14
  unsigned int HitTestContext; // eax
  struct tagPOINT *v14; // r8
  unsigned int v15; // r10d
  HWND WindowHandle; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int v24; // eax
  unsigned int v25; // r13d
  int v26; // eax
  __int64 v27; // rcx
  int v28; // edi
  __int64 v29; // r14
  int v30; // r15d
  __int64 v31; // r12
  __int16 v32; // si
  unsigned __int16 v33; // ax
  int v34; // edx
  __int64 v35; // rdi
  _OWORD *v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  int *v43; // rcx
  bool v44; // r14
  int v45; // esi
  __int64 v46; // r15
  struct tagWND *UserWindow; // rax
  __int64 WindowDetails; // rax
  __int128 v49; // xmm1
  _OWORD *v50; // rbx
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int64 v57; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-60h] BYREF
  int v62; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+E0h] [rbp-40h] BYREF
  __int128 v66; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v67; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v68; // [rsp+100h] [rbp-20h] BYREF
  __int64 v69; // [rsp+108h] [rbp-18h] BYREF
  __int64 v70; // [rsp+110h] [rbp-10h] BYREF
  __int128 v71; // [rsp+118h] [rbp-8h]
  __int128 v72; // [rsp+128h] [rbp+8h]
  __int64 v73; // [rsp+138h] [rbp+18h]
  _OWORD *v74; // [rsp+140h] [rbp+20h]
  _OWORD v75[7]; // [rsp+150h] [rbp+30h] BYREF
  char v76[48]; // [rsp+1C0h] [rbp+A0h] BYREF
  _OWORD v77[8]; // [rsp+1F0h] [rbp+D0h] BYREF
  _OWORD v78[8]; // [rsp+270h] [rbp+150h] BYREF
  _DWORD v79[28]; // [rsp+2F0h] [rbp+1D0h] BYREF

  v8 = *a3;
  v65 = a4;
  v64 = (__int64)a3;
  v74 = (_OWORD *)a2;
  v60 = (__int64)a5;
  v63 = (__int64)a7;
  v61 = v8;
  if ( a7 )
    *a7 = 0;
  v12 = 1;
  if ( (a6 & 1) != 0 )
  {
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
    CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
      (CSpatialProcessor *)a1,
      4u,
      *v14,
      *(_QWORD *)(*((_QWORD *)a5 + 1) + 88LL),
      v15,
      HitTestContext);
    CInputDest::CInputDest((CInputDest *)v78, (const struct CInputDest *)(a1 + 3576));
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3696), 1, 1) )
    {
      LODWORD(v57) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6140LL);
    }
    ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint(a3, *a3, a4, v78);
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v78);
    InputTraceLogging::Mouse::UpdateTargetForCapture(*(_QWORD *)(*((_QWORD *)a5 + 1) + 88LL), WindowHandle);
    v17 = v78[1];
    *(_OWORD *)a2 = v78[0];
    v18 = v78[2];
    *(_OWORD *)(a2 + 16) = v17;
    v19 = v78[3];
    *(_OWORD *)(a2 + 32) = v18;
    v20 = v78[4];
    *(_OWORD *)(a2 + 48) = v19;
    v21 = v78[5];
    *(_OWORD *)(a2 + 64) = v20;
    v22 = v78[6];
    *(_OWORD *)(a2 + 80) = v21;
    *(_OWORD *)(a2 + 96) = v22;
    *(_BYTE *)(a2 + 112) = 0;
    memset(v78, 0, 0x78uLL);
    CInputDest::SetEmpty((CInputDest *)v78);
    return (_OWORD *)a2;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*((_QWORD *)a5 + 1) + 88LL);
    *(_QWORD *)(a1 + 24) = 4LL;
    if ( a6 )
    {
      LODWORD(v57) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6158LL);
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3696), 1, 1) )
    {
      LODWORD(v57) = 512;
    }
    else
    {
      v12 = 0;
      LODWORD(v57) = 0;
    }
    if ( *((_DWORD *)a5 + 4) == 3 )
    {
      *(_DWORD *)(a1 + 3436) = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken();
    }
    else if ( !v12 )
    {
      *(_DWORD *)(a1 + 3432) = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken();
    }
    v62 = 0;
    memset(v79, 0, sizeof(v79));
    if ( *((_DWORD *)a5 + 4) == 3 )
      v24 = *(_DWORD *)(a1 + 3436);
    else
      v24 = *(_DWORD *)(a1 + 3432);
    HIDWORD(v57) = v24;
    v25 = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
    v26 = (*(__int64 (__fastcall **)(CMouseProcessor::CMouseEvent *))(*(_QWORD *)a5 + 16LL))(a5);
    v27 = *((_QWORD *)a5 + 1);
    v28 = v26;
    v29 = *(_QWORD *)(v27 + 8);
    v30 = *(_DWORD *)(v27 + 80);
    v31 = *(_QWORD *)(v27 + 88);
    v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
    v33 = (**(__int64 (__fastcall ***)(__int64))v60)(v60);
    v34 = v28 | v57;
    v35 = v64;
    v36 = (_OWORD *)CMouseProcessor::MouseSpeedHitTest(
                      v78,
                      v64,
                      v65,
                      v33,
                      v32,
                      v31,
                      v30,
                      v29,
                      v34,
                      v25,
                      HIDWORD(v57),
                      &v62,
                      v79);
    v37 = v36[1];
    v75[0] = *v36;
    v38 = v36[2];
    v75[1] = v37;
    v39 = v36[3];
    v75[2] = v38;
    v40 = v36[4];
    v75[3] = v39;
    v41 = v36[5];
    v75[4] = v40;
    v42 = v36[6];
    v75[5] = v41;
    v75[6] = v42;
    CInputDest::CInputDest((CInputDest *)v77, (const struct tagINPUTDEST *)v75);
    v43 = (int *)v63;
    if ( v63 )
      *(_DWORD *)v63 = v79[20];
    v44 = v62 != 0;
    if ( v43 )
      v45 = *v43;
    else
      v45 = 0;
    v46 = *(_QWORD *)(*(_QWORD *)(v60 + 8) + 88LL);
    if ( InputTraceLogging::Enabled(0) )
    {
      CInputDest::GetBaseWindow((CInputDest *)v77);
      UserWindow = CInputDest::GetUserWindow((CInputDest *)v77);
      WindowDetails = InputTraceLogging::GetWindowDetails(v76, UserWindow);
      v49 = *(_OWORD *)(WindowDetails + 16);
      v71 = *(_OWORD *)WindowDetails;
      v73 = *(_QWORD *)(WindowDetails + 32);
      v72 = v49;
      if ( v44 )
      {
        if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 64LL) )
        {
          v57 = *(_QWORD *)v35;
          v58 = __PAIR64__(v8, HIDWORD(v61));
          v66 = v71;
          LODWORD(v59) = HIDWORD(v73);
          LODWORD(v63) = v73;
          LODWORD(v64) = HIDWORD(v72);
          LODWORD(v61) = DWORD2(v72);
          v67 = v72;
          LODWORD(v65) = DWORD2(v77[6]);
          v68 = InputTraceLogging::RoutingModeToString(DWORD1(v77[0]));
          LODWORD(v60) = v45;
          v69 = (__int64)CInputDest::GetWindowHandle((CInputDest *)v77);
          v70 = v46;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0289810,
            (int)&unk_1C025ED3C,
            (__int64)&v70,
            (__int64)&v69,
            (__int64)&v60,
            (__int64)&v68,
            (__int64)&v65,
            (__int64)&v67,
            (__int64)&v61,
            (__int64)&v64,
            (__int64)&v63,
            (__int64)&v59,
            (__int64)&v66 + 8,
            (__int64)&v66,
            (__int64)&v58 + 4,
            (__int64)&v58,
            (__int64)&v57,
            (__int64)&v57 + 4);
        }
      }
      else if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 64LL) )
      {
        LODWORD(v60) = *(_DWORD *)(v35 + 4);
        LODWORD(v65) = *(_DWORD *)v35;
        LODWORD(v61) = HIDWORD(v61);
        v69 = *((_QWORD *)&v71 + 1);
        v70 = v71;
        LODWORD(v63) = HIDWORD(v73);
        LODWORD(v59) = v73;
        v58 = *((_QWORD *)&v72 + 1);
        v68 = v72;
        HIDWORD(v57) = DWORD2(v77[6]);
        LODWORD(v64) = v8;
        v67 = InputTraceLogging::RoutingModeToString(DWORD1(v77[0]));
        LODWORD(v57) = v45;
        *((_QWORD *)&v66 + 1) = CInputDest::GetWindowHandle((CInputDest *)v77);
        *(_QWORD *)&v66 = v46;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_1C0289810,
          (int)&dword_1C025EE36,
          (__int64)&v66,
          (__int64)&v66 + 8,
          (__int64)&v57,
          (__int64)&v67,
          (__int64)&v57 + 4,
          (__int64)&v68,
          (__int64)&v58,
          (__int64)&v58 + 4,
          (__int64)&v59,
          (__int64)&v63,
          (__int64)&v69,
          (__int64)&v70,
          (__int64)&v64,
          (__int64)&v61,
          (__int64)&v65,
          (__int64)&v60);
      }
    }
    v50 = v74;
    v51 = v77[1];
    *v74 = v77[0];
    v52 = v77[2];
    v50[1] = v51;
    v53 = v77[3];
    v50[2] = v52;
    v54 = v77[4];
    v50[3] = v53;
    v55 = v77[5];
    v50[4] = v54;
    v56 = v77[6];
    v50[5] = v55;
    v50[6] = v56;
    *((_BYTE *)v50 + 112) = 0;
    memset(v77, 0, 0x78uLL);
    CInputDest::SetEmpty((CInputDest *)v77);
    return v50;
  }
}
