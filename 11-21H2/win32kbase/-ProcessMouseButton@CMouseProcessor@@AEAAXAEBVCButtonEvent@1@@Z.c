/*
 * XREFs of ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C00426D0 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0007E58 (_anonymous_namespace_--ValidateUIPI.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0033AF0 (IsPointerPromotedMouseMessage.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1C00387C4 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C003880C (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C003BCDC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     UpdateAsyncKeyState @ 0x1C003E060 (UpdateAsyncKeyState.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C0040DAC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00419A8 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0041A94 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C0041B14 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C0041B3C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0041C6C (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C0041D48 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 *     ?GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ @ 0x1C0041D6C (-GetVKey@CButtonEvent@CMouseProcessor@@QEBAEXZ.c)
 *     ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C0041D94 (ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick.c)
 *     ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x1C0041E98 (-PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0042044 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ApiSetEditionLLMouseButtonHook @ 0x1C0042194 (ApiSetEditionLLMouseButtonHook.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00422E0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00423CC (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0042514 (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 *     IsPTPIVEnabled @ 0x1C0042570 (IsPTPIVEnabled.c)
 *     ApiSetEditionCancelCoolSwitch @ 0x1C00425C8 (ApiSetEditionCancelCoolSwitch.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00427EC (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C00445A0 (ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0044710 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0044884 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     IsTouchpadDevice @ 0x1C00E8F60 (IsTouchpadDevice.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01F41B0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01F9F58 (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01FA990 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x1C01FAB28 (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseButton(
        CMouseProcessor *this,
        const struct CMouseProcessor::CButtonEvent *a2,
        __int64 a3)
{
  const struct CMouseProcessor::CButtonEvent *v3; // r14
  char v5; // r13
  char v6; // si
  void *v7; // r9
  __int64 v8; // rax
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int ButtonMessage; // r12d
  unsigned int v14; // edx
  struct tagPOINT v15; // rbx
  int MessageWParamInfo; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edi
  int v20; // ebx
  unsigned int v21; // eax
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ebx
  struct tagTHREADINFO *v33; // rax
  unsigned __int8 v34; // dl
  int v35; // edx
  __int64 v36; // r9
  __int64 v37; // rax
  CMouseProcessor *v38; // rcx
  unsigned __int8 v39; // bl
  int v40; // edx
  __int64 v41; // rax
  _QWORD *HasMouseOwner; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  char v49; // al
  int v50; // edx
  __int64 v51; // r9
  __int64 v52; // r10
  __int128 *RawMouseInputDestination; // rax
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  int v60; // ebx
  struct tagTHREADINFO *ThreadInfo; // rax
  unsigned __int8 v62; // dl
  int v63; // edx
  __int64 v64; // r8
  __int64 v65; // rdx
  int v66; // edx
  int v67; // eax
  int v68; // eax
  PDEVICE_OBJECT v69; // rcx
  __int16 v70; // ax
  __int64 PtiFromInputDest; // rax
  struct tagPOINT v72; // [rsp+40h] [rbp-C0h] BYREF
  int v73; // [rsp+48h] [rbp-B8h] BYREF
  struct tagPOINT v74; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v75; // [rsp+58h] [rbp-A8h] BYREF
  int v76; // [rsp+5Ch] [rbp-A4h] BYREF
  int v77; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v78; // [rsp+70h] [rbp-90h] BYREF
  int v79; // [rsp+78h] [rbp-88h]
  __int64 v80; // [rsp+80h] [rbp-80h] BYREF
  HWND WindowHandle; // [rsp+88h] [rbp-78h] BYREF
  __int64 v82; // [rsp+90h] [rbp-70h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-60h] BYREF
  int v84; // [rsp+A8h] [rbp-58h]
  _QWORD v85[3]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v86[2]; // [rsp+C8h] [rbp-38h] BYREF
  char v87; // [rsp+D8h] [rbp-28h]
  _QWORD v88[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v89; // [rsp+F0h] [rbp-10h]
  int v90; // [rsp+F4h] [rbp-Ch]
  int v91; // [rsp+F8h] [rbp-8h]
  int v92; // [rsp+FCh] [rbp-4h]
  char v93[112]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v94; // [rsp+190h] [rbp+90h]
  int v95; // [rsp+198h] [rbp+98h]
  __int128 v96[6]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v97; // [rsp+200h] [rbp+100h]
  struct tagPOINT v98; // [rsp+220h] [rbp+120h] BYREF
  int v99; // [rsp+228h] [rbp+128h]
  int v100; // [rsp+22Ch] [rbp+12Ch]
  int v101; // [rsp+230h] [rbp+130h]
  int v102; // [rsp+234h] [rbp+134h]
  unsigned __int64 ExtraInfoForHook; // [rsp+238h] [rbp+138h]
  __int128 v104; // [rsp+240h] [rbp+140h] BYREF
  __int128 v105; // [rsp+250h] [rbp+150h]
  __int128 v106; // [rsp+260h] [rbp+160h]
  __int128 v107; // [rsp+270h] [rbp+170h]
  __int128 v108; // [rsp+280h] [rbp+180h]
  __int128 v109; // [rsp+290h] [rbp+190h]
  __int128 v110; // [rsp+2A0h] [rbp+1A0h]
  _DWORD v111[32]; // [rsp+2B0h] [rbp+1B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v112; // [rsp+330h] [rbp+230h] BYREF
  __int64 *v113; // [rsp+350h] [rbp+250h]
  __int64 v114; // [rsp+358h] [rbp+258h]
  int *v115; // [rsp+360h] [rbp+260h]
  __int64 v116; // [rsp+368h] [rbp+268h]
  int *v117; // [rsp+370h] [rbp+270h]
  __int64 v118; // [rsp+378h] [rbp+278h]
  unsigned int *v119; // [rsp+380h] [rbp+280h]
  __int64 v120; // [rsp+388h] [rbp+288h]
  HWND *p_WindowHandle; // [rsp+390h] [rbp+290h]
  __int64 v122; // [rsp+398h] [rbp+298h]

  v3 = a2;
  v5 = 0;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  v7 = &WPP_47101fbb63c9386296243f9d06c06c50_Traceguids;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      23,
      (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
  v8 = *((_QWORD *)v3 + 1);
  v86[0] = this;
  v86[1] = v3;
  v87 = 0;
  v9 = *(_DWORD *)(v8 + 140);
  v10 = *(_DWORD *)(v8 + 108);
  v94 = *(_QWORD *)(v8 + 132);
  v95 = v9;
  v73 = 0;
  ApiSetEditionCancelCoolSwitch(&v73, a2, a3, v7);
  if ( v73 )
  {
    if ( v10 != 1 )
    {
      v83 = v94;
      v84 = v9;
      if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v83, v11, 0LL) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v6 = 0;
        }
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = v6;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v12,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            6,
            24,
            (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
        }
        v46 = 14LL;
LABEL_59:
        v47 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 88LL);
LABEL_101:
        InputTraceLogging::Mouse::DropButton(v47, v46, v12);
        goto LABEL_32;
      }
    }
  }
  if ( !*((_QWORD *)v3 + 5) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        25,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    }
    v46 = 15LL;
    goto LABEL_59;
  }
  ButtonMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(v3);
  if ( !(unsigned __int8)IsPTPIVEnabled()
    || !isChildPartition()
    || !(unsigned __int8)IsTouchpadDevice(*(_QWORD *)(*((_QWORD *)v3 + 1) + 8LL)) )
  {
    goto LABEL_11;
  }
  v48 = *((_DWORD *)v3 + 8);
  if ( v48 != 1 )
  {
    if ( v48 == 2 && *((_BYTE *)this + 3560) )
    {
      *((_BYTE *)this + 3560) = 0;
      goto LABEL_67;
    }
LABEL_11:
    if ( (gpdwCPUserPreferencesMask & 0x80008000) != 0x80008000 )
      goto LABEL_12;
    if ( ButtonMessage == 513 )
    {
      if ( *((_BYTE *)this + 3564) )
      {
        v49 = 0;
      }
      else
      {
        v49 = 1;
        *((_DWORD *)this + 892) = *(_DWORD *)(*((_QWORD *)v3 + 1) + 80LL);
      }
      *((_BYTE *)this + 3564) = v49;
      if ( !v49 )
        goto LABEL_79;
    }
    else if ( ButtonMessage == 514 && *((_BYTE *)this + 3564) )
    {
      v14 = *(_DWORD *)(*((_QWORD *)v3 + 1) + 80LL) - *((_DWORD *)this + 892);
      if ( v14 <= dword_1C028F7A0 )
      {
        *((_BYTE *)this + 3564) = 0;
        goto LABEL_12;
      }
LABEL_79:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (v14 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v12,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          6,
          27,
          (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
      }
      v46 = 16LL;
      goto LABEL_100;
    }
LABEL_12:
    v15 = (struct tagPOINT)*((_QWORD *)gpsi + 620);
    v72 = v15;
    v80 = *((_QWORD *)gpsi + 619);
    v74 = v15;
    CMouseProcessor::InformUMObservers(this, v3, &v74, &v74);
    if ( (*(_DWORD *)(*((_QWORD *)v3 + 1) + 112LL) & 0x80u) == 0 && CBaseProcessor::IsUMSuppressed(this) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (v50 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v50) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v50,
          v12,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          6,
          28,
          (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
      }
      v46 = 4LL;
LABEL_100:
      v47 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 88LL);
      goto LABEL_101;
    }
    CMouseProcessor::MouseHitTest((__int64)this, (__int64)v96, &v72, (__int64)&v80, v3, 0, 0LL);
    v87 = 1;
    if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 64LL) )
    {
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v96);
      v76 = *(_DWORD *)(v51 + 56);
      v77 = *(_DWORD *)(v51 + 52);
      v82 = *(_QWORD *)(v51 + 88);
      p_WindowHandle = &WindowHandle;
      v119 = &v75;
      v117 = &v76;
      v115 = &v77;
      v113 = &v82;
      v75 = ButtonMessage;
      v122 = 8LL;
      v120 = v52;
      v118 = v52;
      v116 = v52;
      v114 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C0263D5F, 0, 0, 7u, &v112);
    }
    v98 = v15;
    MessageWParamInfo = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v3);
    v17 = *((_QWORD *)v3 + 1);
    v99 = MessageWParamInfo;
    v100 = *(unsigned __int8 *)(v17 + 112) >> 7;
    v101 = *(_DWORD *)(v17 + 80);
    v102 = 0;
    ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(v3);
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v88, (struct CInputDest *)v96);
    v18 = *((_QWORD *)v3 + 1);
    v19 = *(_DWORD *)(v18 + 112);
    v20 = *(_DWORD *)(v18 + 140);
    v78 = *(_QWORD *)(v18 + 132);
    v21 = CMouseProcessor::CButtonEvent::GetButtonMessage(v3);
    v79 = v20;
    if ( (unsigned int)ApiSetEditionLLMouseButtonHook(
                         (unsigned int)v96,
                         (unsigned int)&v98,
                         v21,
                         (unsigned int)&v78,
                         (v19 & 1) == 0) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (v22 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v22,
          v23,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          6,
          29,
          (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
      }
      InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v3 + 1) + 88LL), 0LL, v23);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v88);
      goto LABEL_31;
    }
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v88);
    CMouseProcessor::CMouseRawInput::PostRawMouse((char *)this + 3464, 0LL, 3LL);
    if ( (unsigned __int8)anonymous_namespace_::InMouseRawInputMode(0LL, 1LL, 0LL, v24) )
    {
      RawMouseInputDestination = (__int128 *)anonymous_namespace_::GetRawMouseInputDestination(v93);
      v54 = RawMouseInputDestination[1];
      v104 = *RawMouseInputDestination;
      v55 = RawMouseInputDestination[2];
      v105 = v54;
      v56 = RawMouseInputDestination[3];
      v106 = v55;
      v57 = RawMouseInputDestination[4];
      v107 = v56;
      v58 = RawMouseInputDestination[5];
      v108 = v57;
      v59 = RawMouseInputDestination[6];
      v109 = v58;
      v110 = v59;
      CInputDest::CInputDest((CInputDest *)v111, (const struct tagINPUTDEST *)&v104);
      if ( v111[0] )
      {
        v60 = *((_DWORD *)v3 + 8);
        CMouseProcessor::CButtonEvent::GetVKey(v3);
        ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)v111);
        UpdateAsyncKeyState(*((_QWORD *)ThreadInfo + 54), v62, v60 == 2);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (v63 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v6 = 0;
        }
        LOBYTE(v64) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v63) = v6;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v63,
            v64,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            6,
            30,
            (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
        }
        InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v3 + 1) + 88LL), 19LL, v64);
        CInputDest::SetEmpty((CInputDest *)v111);
        goto LABEL_31;
      }
      CInputDest::SetEmpty((CInputDest *)v111);
    }
    if ( !LODWORD(v96[0]) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (v25 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v6 = 0;
      }
      LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v25,
          v26,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          6,
          31,
          (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
      }
      v65 = 13LL;
      goto LABEL_185;
    }
    if ( (unsigned int)IsPointerPromotedMouseMessage(ButtonMessage, (_DWORD *)(*((_QWORD *)v3 + 1) + 104LL)) )
    {
      v5 = 1;
      if ( !anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v28 + 132), v96, v27) )
        goto LABEL_133;
    }
    v29 = LOWORD(v72.x) | (LOWORD(v72.y) << 16);
    ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(v96, *((_DWORD *)v3 + 8) == 2);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 924, 1, 1) )
    {
      if ( v5
        && !anonymous_namespace_::ValidateUIPI(*(_QWORD *)(*((_QWORD *)v3 + 1) + 132LL), (_DWORD *)this + 894, v26) )
      {
        goto LABEL_133;
      }
      v104 = v96[0];
      v106 = v96[2];
      v105 = v96[1];
      v108 = v96[4];
      v107 = v96[3];
      v110 = v97;
      v109 = v96[5];
      if ( *((_DWORD *)v3 + 8) == 1 )
      {
        v68 = *((_DWORD *)v3 + 7);
        if ( !v68 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v26);
          v68 = *((_DWORD *)v3 + 7);
        }
        *((_DWORD *)this + 893) |= v68;
        CInputDest::operator=(v96, (char *)this + 3576);
      }
      else
      {
        HasMouseOwner = (_QWORD *)CMouseProcessor::HandleCapture_BreakHasMouseOwner(this, v111, v96, v3);
        CInputDest::operator=((__int64)v96, HasMouseOwner);
        CInputDest::SetEmpty((CInputDest *)v111);
      }
      if ( !LODWORD(v96[0]) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45);
      ApiSetEditionGetLogicalPointForMouseCaptureButtonEvent(
        (unsigned int)v96,
        (unsigned int)&v104,
        v74.x,
        v72.x,
        (__int64)&v72);
      v29 = LOWORD(v72.x) | (LOWORD(v72.y) << 16);
    }
    else if ( *((_DWORD *)v3 + 8) == 1 )
    {
      if ( !CMouseProcessor::HandleCapture_MakeNoMouseOwner(
              this,
              (const struct CInputDest *)v96,
              v3,
              v29,
              v74,
              ButtonMessage) )
      {
        v66 = 32;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v6 = 0;
        }
        LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v66) = v6;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v66,
            v26,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            6,
            32,
            (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
        }
        v65 = 17LL;
        goto LABEL_185;
      }
    }
    else
    {
      v67 = *((_DWORD *)v3 + 7);
      if ( !v67 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v26);
        v67 = *((_DWORD *)v3 + 7);
      }
      *((_DWORD *)this + 893) &= ~v67;
    }
    v32 = *((_DWORD *)v3 + 8);
    CMouseProcessor::CButtonEvent::GetVKey(v3);
    v33 = CInputDest::GetThreadInfo((CInputDest *)v96);
    UpdateAsyncKeyState(*((_QWORD *)v33 + 54), v34, v32 == 2);
    if ( *((_DWORD *)v3 + 8) == 1 )
    {
      v92 = 0;
      v88[0] = v97;
      v37 = *((_QWORD *)v3 + 1);
      v90 = (__int16)v29;
      v89 = 4;
      v88[1] = *(_QWORD *)(v37 + 8);
      v91 = SWORD1(v29);
      InputExtensibilityCallout::CoreMsgSendMessage((unsigned int)SWORD1(v29), 6);
    }
    if ( (*(_DWORD *)(*((_QWORD *)v3 + 1) + 112LL) & 0x100) != 0
      || CInputDest::ShouldSkipForegroundActivation((CInputDest *)v96) )
    {
      v39 = 1;
LABEL_26:
      if ( LODWORD(v96[0]) )
      {
        if ( !v5
          || (PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(v96, 2LL)) == 0
          || (*(_DWORD *)(PtiFromInputDest + 488) & 1) == 0 )
        {
          if ( !(unsigned __int8)anonymous_namespace_::InMouseRawInputMode(v96, 1LL, 1LL, v36) )
          {
            v85[0] = v39;
            v85[1] = v29;
            v85[2] = 0LL;
            v41 = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(v3);
            if ( (unsigned int)CMouseProcessor::ForwardInputToISM(
                                 this,
                                 v96,
                                 v3,
                                 (struct CMouseProcessor::InputDeliveryContext *)v85,
                                 &v74,
                                 0,
                                 ButtonMessage,
                                 v41) == 1 )
              CMouseProcessor::DeliverMouseButtonToInputDest(
                this,
                v3,
                (const struct CInputDest *)v96,
                (const struct CMouseProcessor::InputDeliveryContext *)v85);
            goto LABEL_31;
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (v40 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v6 = 0;
          }
          LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v40) = v6;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v40,
              v26,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              3,
              6,
              36,
              (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
          }
          v65 = 12LL;
LABEL_185:
          InputTraceLogging::Mouse::DropButton(*(_QWORD *)(*((_QWORD *)v3 + 1) + 88LL), v65, v26);
LABEL_31:
          CInputDest::SetEmpty((CInputDest *)v96);
          goto LABEL_32;
        }
        v69 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (v35 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v6 = 0;
        }
        LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_167:
          v65 = 18LL;
          goto LABEL_185;
        }
        v70 = 35;
      }
      else
      {
        v69 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (v35 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v6 = 0;
        }
        LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_167;
        v70 = 34;
      }
      LOBYTE(v35) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        v69->AttachedDevice,
        v35,
        v26,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        v70,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
      goto LABEL_167;
    }
    v39 = 0;
    if ( CMouseProcessor::UpdateForegroundForInput(v38, (struct CInputDest *)v96, v3, v36) )
      goto LABEL_26;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (v35 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v35) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v35,
        v26,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        6,
        33,
        (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
    }
LABEL_133:
    v65 = 10LL;
    goto LABEL_185;
  }
  if ( (unsigned int)CMouseProcessor::InertiaEndSuppression::HandleMake(
                       (char *)this + 3560,
                       *(_QWORD *)(*((_QWORD *)v3 + 1) + 96LL)) )
    goto LABEL_11;
LABEL_67:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (v14 = 32, (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = v6;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v12,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      26,
      (__int64)&WPP_47101fbb63c9386296243f9d06c06c50_Traceguids);
  }
LABEL_32:
  CMouseProcessor::EndStreamToken::~EndStreamToken((CMouseProcessor::EndStreamToken *)v86);
}
