/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8
 * Callers:
 *     NtUserSetManipulationInputTarget @ 0x1C01618F0 (NtUserSetManipulationInputTarget.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C01C04E0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001CF8 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0034240 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC6E4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7A4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC990 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x1C01BFD54 (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01C562C (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01C59E8 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAX_NPEAUCInputPointerNode@@AEBVCInputDest@@@Z @ 0x1C01CDC48 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE088 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE6FC (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C01D0660 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01D0D94 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01D288C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01D2B28 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01D39D4 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C01D54BC (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C01D7360 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C01D752C (-SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KV.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01D82D4 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C0207E2C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1C020F784 (ApiSetSetManipulationInputTargetTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        void *a5,
        struct TELEMETRY_POINTER_FRAME_TIMES *a6,
        int a7)
{
  unsigned int v7; // ebx
  struct _KTHREAD **v8; // r14
  unsigned int v9; // esi
  char v10; // r15
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct CPointerInputFrame *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // ebx
  __int64 v23; // r8
  int v24; // ebx
  const struct CPointerInputFrame *v25; // r12
  CTouchProcessor *v26; // rcx
  struct CPointerQFrame *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // edi
  __int64 v33; // r14
  CPointerInfoNode *v34; // rcx
  int v35; // ecx
  int v36; // edx
  unsigned int v37; // eax
  unsigned int v38; // edi
  CPointerInfoNode *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int MessagesCore; // edi
  unsigned int i; // ebx
  int v46; // eax
  __int64 v47; // rdx
  int v48; // eax
  int v49; // ecx
  struct CInputPointerNode *NodeById; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct CInputPointerNode *v54; // r12
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  int v59; // eax
  __int64 v60; // r8
  __int64 v61; // r8
  unsigned __int16 v62; // r12
  unsigned __int64 v63; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // rdi
  bool v65; // zf
  unsigned int v66; // ebx
  __int64 Queue; // rdi
  CInputDest *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // r8
  struct CPointerQFrame *v74; // rbx
  struct CPointerInfoNode *v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  int v79; // edx
  int v80; // r8d
  unsigned int v82; // [rsp+28h] [rbp-D8h]
  unsigned int v84; // [rsp+48h] [rbp-B8h]
  int v85; // [rsp+4Ch] [rbp-B4h]
  int v86; // [rsp+50h] [rbp-B0h]
  int v87; // [rsp+54h] [rbp-ACh]
  unsigned int v88; // [rsp+58h] [rbp-A8h]
  unsigned int v89; // [rsp+5Ch] [rbp-A4h]
  const struct CPointerInputFrame *v90; // [rsp+60h] [rbp-A0h]
  unsigned int v91; // [rsp+68h] [rbp-98h]
  struct CPointerQFrame *v92; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v93; // [rsp+80h] [rbp-80h]
  _OWORD v94[7]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v95[7]; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v96[14]; // [rsp+170h] [rbp+70h] BYREF
  char v97; // [rsp+1E0h] [rbp+E0h]
  CInpLockGuard *v98[6]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v99[128]; // [rsp+220h] [rbp+120h] BYREF
  __int128 v100; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v101; // [rsp+2B0h] [rbp+1B0h]
  __int128 v102; // [rsp+2C0h] [rbp+1C0h]
  __int128 v103; // [rsp+2D0h] [rbp+1D0h]
  __int128 v104; // [rsp+2E0h] [rbp+1E0h]
  __int128 v105; // [rsp+2F0h] [rbp+1F0h]
  __int128 v106; // [rsp+300h] [rbp+200h]
  _DWORD v107[28]; // [rsp+320h] [rbp+220h] BYREF
  _QWORD v108[16]; // [rsp+390h] [rbp+290h] BYREF

  v7 = a2;
  v8 = this;
  v93 = a4;
  v91 = a3;
  v9 = 0;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      77,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v98, (struct CInpLockGuard *)(v8 + 4), 0LL);
  v16 = CTouchProcessor::FindAndReferenceFrameById(v8, v7, v11);
  if ( v16 )
  {
    if ( a7 && a5 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    *(_OWORD *)((char *)v16 + 72) = *(_OWORD *)a6;
    *(_OWORD *)((char *)v16 + 88) = *((_OWORD *)a6 + 1);
    *(_OWORD *)((char *)v16 + 104) = *((_OWORD *)a6 + 2);
    *(_OWORD *)((char *)v16 + 120) = *((_OWORD *)a6 + 3);
    *(_OWORD *)((char *)v16 + 136) = *((_OWORD *)a6 + 4);
    *(_OWORD *)((char *)v16 + 152) = *((_OWORD *)a6 + 5);
    *(_OWORD *)((char *)v16 + 168) = *((_OWORD *)a6 + 6);
    *(_OWORD *)((char *)v16 + 184) = *((_OWORD *)a6 + 7);
    *(_OWORD *)((char *)v16 + 200) = *((_OWORD *)a6 + 8);
    if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v13, (__int64)v16, v14) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
    if ( !*((_QWORD *)v16 + 32) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
    v22 = *(_DWORD *)(*((_QWORD *)v16 + 30) + 168LL);
    if ( v22 == 6 || !v22 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
    v89 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v16 + 32) + 360LL), 4);
    v88 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v16 + 32) + 360LL), 5);
    memset(v96, 0, sizeof(v96));
    v97 = 0;
    memset(v107, 0, sizeof(v107));
    v86 = 0;
    if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a5, v22, (struct tagINPUTDEST *)v107) )
    {
      v24 = -(v107[4] & 1);
      v86 = v24;
      CInputDest::CInputDest((CInputDest *)v108, (const struct tagINPUTDEST *)v107);
      CInputDest::operator=((__int64)v96, v108);
      CInputDest::SetEmpty((CInputDest *)v108);
    }
    else
    {
      v24 = 0;
    }
    v90 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(v8, v16, v23);
    v25 = v90;
    v27 = CTouchProcessor::SetupQFrame(v26, v16, 0xFFFFFFFFFFFFFFFFuLL, (const struct CInputDest *)v96, 0);
    v92 = v27;
    if ( !v27 || *(_DWORD *)v27 == -1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
    v31 = 0LL;
    v32 = 0;
    v84 = 0;
    v85 = 0;
    if ( !*((_DWORD *)v16 + 12) )
      goto LABEL_138;
    do
    {
      v33 = *((_QWORD *)v16 + 30) + 480LL * (unsigned int)v31;
      CInputDest::CInputDest((CInputDest *)&v100, v96);
      v87 = 0;
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v33)
        && CPointerInfoNode::IsForManipulationThread(v34)
        && (*(_DWORD *)(v33 + 4) & 0x200) == 0
        && (v35 = 0, v91) )
      {
        v36 = *(unsigned __int16 *)(v33 + 172);
        while ( v93[v35] != v36 )
        {
          if ( ++v35 >= v91 )
            goto LABEL_53;
        }
        NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)this, v36, 0, 0);
        v54 = NodeById;
        if ( NodeById )
        {
          _InterlockedDecrement((volatile signed __int32 *)NodeById + 9);
          if ( *((int *)NodeById + 9) < 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53);
          if ( (*(_DWORD *)v33 & 4) != 0 && *((_DWORD *)v54 + 74) == 2 )
          {
            if ( (_DWORD)v100 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53);
            if ( a7 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53);
            CInputDest::SetEmpty((CInputDest *)&v100);
          }
          else
          {
            if ( (*(_DWORD *)(v33 + 4) & 0x80u) != 0 || HIDWORD(v105) || (v55 = 2, a7) )
              v55 = 1;
            *((_DWORD *)v54 + 74) = v55;
          }
          if ( HIDWORD(v105) )
          {
            if ( *((_DWORD *)v54 + 74) != 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53);
            if ( !CInputDest::IsCompositionInput((CInputDest *)&v100) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v58);
            v59 = *(_DWORD *)v33;
            if ( (*(_DWORD *)v33 & 0x400) == 0 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v58);
              v59 = *(_DWORD *)v33;
            }
            if ( (v59 & 0x100) == 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v58);
            if ( *(_DWORD *)(v33 + 144) != 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v58);
            *(_DWORD *)(v33 + 4) |= 0x80u;
            v60 = *(_QWORD *)(v33 + 248);
            v94[0] = v100;
            v94[2] = v102;
            v94[1] = v101;
            v94[4] = v104;
            v94[3] = v103;
            v94[6] = v106;
            v94[5] = v105;
            v87 = ApiSetSetManipulationInputTargetTransform((unsigned int)v94, (_DWORD)a5, v60, (int)v33 + 160, v24);
          }
          else if ( *((_DWORD *)v54 + 74) == 2 )
          {
            if ( (*(_DWORD *)(v33 + 4) & 0x80u) != 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53);
            if ( (_DWORD)v100 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53);
            CInputDest::operator=((__int64)&v100, v33 + 352);
            *(_DWORD *)v33 &= 0xFFFFFAFF;
            *(_DWORD *)(v33 + 144) = 0;
          }
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53);
          CInputDest::SetEmpty((CInputDest *)&v100);
        }
        InputTraceLogging::Pointer::HandleResultFromUserMode(
          v16,
          (const struct tagPOINTEREVENTINT *)(v33 + 160),
          (__int64)a5,
          a7 != 0,
          v54,
          (const struct CInputDest *)&v100);
        if ( (_DWORD)v100 )
        {
          Queue = CInputDest::GetQueue((__int64)&v100, 2, v61);
          v68 = CInputDest::CInputDest((CInputDest *)v99, (__int64 **)&v100);
          v72 = CTouchProcessor::SetupQFramePostMT(v69, v16, &v92, Queue, v68, v90 != 0LL);
          if ( !v72 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v71, v70, v73);
          *(_DWORD *)(v33 + 4) |= 0x200u;
          v74 = v92;
          v85 = 1;
          if ( v92 )
          {
            if ( *(_DWORD *)(v33 + 8) != *(_DWORD *)v92 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v71, v70, v73);
            if ( !*((_DWORD *)v74 + 34) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v71, v70, v73);
            *(_DWORD *)(v33 + 8) = *(_DWORD *)v72;
            ++*(_DWORD *)(v72 + 136);
            --*((_DWORD *)v74 + 34);
          }
          *(_QWORD *)(v33 + 192) = CInputDest::GetWindowHandle((CInputDest *)&v100);
          CInputDest::operator=(v33 + 352, (__int64)&v100);
          if ( (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v33) )
            *(_DWORD *)(v33 + 456) = *((_DWORD *)v54 + 44);
          if ( v87 )
            *(_DWORD *)(v33 + 180) |= 0x400000u;
          if ( HIDWORD(v105) )
          {
            v95[0] = v100;
            v95[2] = v102;
            v95[1] = v101;
            v95[4] = v104;
            v95[3] = v103;
            v95[6] = v106;
            v95[5] = v105;
            if ( ApiSetEditionGetInputDelegate(v95) )
              *(_DWORD *)v33 |= 0x100000u;
          }
          v25 = v90;
          v75 = (struct CPointerInfoNode *)v33;
          v8 = this;
          CTouchProcessor::ProcessQFrameNode(this, (struct CPointerQFrame *)v72, v90, v75);
          if ( *(_DWORD *)v72 == -1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v77, v76, v78);
        }
        else
        {
          v62 = *(_WORD *)(v33 + 172);
          v63 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          if ( v90 )
          {
            ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, v90, v62, 0LL);
            if ( ValidNodeInFrame )
            {
              *(_QWORD *)(v33 + 192) = 0LL;
              CInputDest::SetEmpty((CInputDest *)(v33 + 352));
              *(_DWORD *)(v33 + 4) |= 0x200u;
              CTouchProcessor::ProcessEnterLeave(this, v90, (struct CPointerInfoNode *)v33);
              if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
                CTouchProcessor::ProcessAndUnreferencePreviousInput(
                  (CTouchProcessor *)this,
                  (const struct CPointerInfoNode *)v33,
                  *((_QWORD *)ValidNodeInFrame + 2),
                  v63,
                  v89,
                  v88);
            }
          }
          v65 = (*(_DWORD *)(v33 + 180) & 0x40000) == 0;
          v8 = this;
          if ( v65 )
          {
            v66 = v84;
          }
          else
          {
            v82 = v63;
            v66 = v84;
            CTouchProcessor::ProcessRoutedAwayList((CTouchProcessor *)this, v62, 1LL, v16, v84, v82);
          }
          CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)v16, v66);
          CTouchProcessor::CheckFreeOnDeparture((CTouchProcessor *)this, v62);
          v25 = v90;
        }
      }
      else
      {
LABEL_53:
        v8 = this;
      }
      CInputDest::SetEmpty((CInputDest *)&v100);
      v37 = *((_DWORD *)v16 + 12);
      v31 = v84 + 1;
      v24 = v86;
      v84 = v31;
    }
    while ( (unsigned int)v31 < v37 );
    v32 = v85;
    if ( v85 )
    {
      v38 = 0;
      if ( v37 )
      {
        do
        {
          if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)(*((_QWORD *)v16 + 30) + 480LL * v38)) )
          {
            if ( CPointerInfoNode::IsForManipulationThread(v39) && (*(_DWORD *)(v40 + 4) & 0x200) != 0 )
            {
              v41 = *((_QWORD *)v16 + 31) + 160LL * *(unsigned int *)(v40 + 8);
              if ( *(_QWORD *)(v41 + 8) != -1LL && (*(_DWORD *)(v41 + 140) & 0x10) == 0 )
              {
                CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)v8, v16, v25, (const struct CPointerQFrame *)v41);
                if ( (*(_DWORD *)(v41 + 140) & 0x10) == 0 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v30);
              }
            }
          }
          ++v38;
        }
        while ( v38 < *((_DWORD *)v16 + 12) );
      }
      v32 = v85;
    }
    else
    {
LABEL_138:
      if ( LODWORD(v96[0]) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v28, v30);
    }
    if ( v25 )
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)v8, (__int64)v25, v30);
    if ( v32 )
    {
      MessagesCore = CTouchProcessor::GenerateMessagesCore((CTouchProcessor *)v8, v89, v88, 1, v16);
      for ( i = 0; i < *((_DWORD *)v16 + 12); ++i )
      {
        v30 = *((_QWORD *)v16 + 30) + 480LL * i;
        v46 = *(_DWORD *)(v30 + 4);
        if ( (v46 & 0x200) != 0 && (v46 & 0x400) == 0 )
        {
          v47 = *(_QWORD *)(v30 + 16);
          v48 = v46 | 0x400;
          *(_DWORD *)(v30 + 4) = v48;
          if ( v47 )
          {
            if ( (v48 & 0x80u) != 0 )
            {
              v49 = *(_DWORD *)(v30 + 180);
              if ( (v49 & 4) != 0 )
                CTouchProcessor::SetPointerCapture(
                  v8,
                  v47,
                  v30 + 352,
                  2 - (unsigned int)((v49 & 0x10000) != 0),
                  1,
                  -__CFSHR__(*(_DWORD *)v30, 21));
            }
          }
        }
      }
    }
    else
    {
      MessagesCore = 0;
    }
    CTouchProcessor::UnreferenceFrame((__int64)v8, (__int64)v16, v30);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v79) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v79) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v79 || v10 )
    {
      LOBYTE(v80) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v79,
        v80,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        80,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    v9 = MessagesCore;
    CInputDest::SetEmpty((CInputDest *)v96);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v12) = 0;
    }
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v14,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        78,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    UserSetLastError(87LL, v12, v14, v15);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v17) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v17 || v10 )
    {
      LOBYTE(v18) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v18,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        7,
        79,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v98, v17, v18);
  return v9;
}
