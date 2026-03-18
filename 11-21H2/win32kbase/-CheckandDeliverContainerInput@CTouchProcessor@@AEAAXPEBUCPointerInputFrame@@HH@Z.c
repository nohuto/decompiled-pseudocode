/*
 * XREFs of ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BFDA0
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsPTPIVEnabled @ 0x1C0042570 (IsPTPIVEnabled.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01B8D50 (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1C01B8D74 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x1C01B8D98 (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C01D7798 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 *     ?TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C01D8134 (-TransformPointerCoordinates@CTouchProcessor@@CA_NAEBUtagINPUT_TRANSFORM@@PEAUtagRIMPOINTERINFON.c)
 *     IsPenIVEnabled @ 0x1C01F0D34 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01F0DB4 (IsTouchIVEnabled.c)
 *     ?SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z @ 0x1C01F5B34 (-SendTouchInput@Pointer@IVRootDeliver@@YAJAEAUCContainerPointerInput@@@Z.c)
 *     ApiSetGetLatestInputTransform @ 0x1C020D1AC (ApiSetGetLatestInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckandDeliverContainerInput(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        int a4)
{
  int v5; // edi
  char v6; // al
  CTouchProcessor *v7; // rcx
  const struct CPointerInfoNode *v8; // r15
  __int64 v9; // r12
  unsigned int v10; // r13d
  CInputDest *v11; // r14
  char v12; // di
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  unsigned int v27; // ecx
  PVOID v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 Pool2; // r14
  PDEVICE_OBJECT v32; // rcx
  int v33; // edx
  char v34; // r12
  unsigned int v35; // r13d
  __int64 v36; // r15
  __int64 v37; // r12
  __int64 v38; // rdx
  bool v39; // cf
  __int64 i; // rax
  __int64 v41; // r9
  __int64 v42; // r8
  int v43; // ecx
  int v45; // eax
  _OWORD *v46; // rax
  __int128 v47; // xmm1
  HWND ContainerHwndDest; // rax
  __int64 v49; // r9
  __int64 v50; // r10
  __int64 v51; // r8
  int v52; // r8d
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // edx
  __int16 v56; // [rsp+30h] [rbp-D0h]
  unsigned int v57; // [rsp+50h] [rbp-B0h]
  int v58; // [rsp+50h] [rbp-B0h]
  int v60; // [rsp+54h] [rbp-ACh]
  HWND WindowHandle; // [rsp+58h] [rbp-A8h]
  size_t Size; // [rsp+60h] [rbp-A0h]
  struct tagRIMPOINTERINFONODE *v63; // [rsp+68h] [rbp-98h]
  _QWORD v64[2]; // [rsp+70h] [rbp-90h] BYREF
  int v65; // [rsp+80h] [rbp-80h]
  int v66; // [rsp+84h] [rbp-7Ch]
  PVOID BackTrace[20]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v68[15]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v69[64]; // [rsp+220h] [rbp+120h] BYREF

  v57 = a3;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v5 = *(_DWORD *)(*((_QWORD *)a2 + 30) + 168LL);
  if ( v5 == 2 )
  {
    v6 = IsTouchIVEnabled();
  }
  else
  {
    if ( v5 == 3 && (unsigned __int8)IsPenIVEnabled() )
      goto LABEL_6;
    if ( v5 != 5 )
      return;
    v6 = IsPTPIVEnabled();
  }
  if ( !v6 )
    return;
LABEL_6:
  v8 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 30);
  v9 = 0LL;
  v10 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v11 = (const struct CPointerInfoNode *)((char *)v8 + 352);
    v12 = 1;
    do
    {
      if ( CTouchProcessor::ShouldGenerateMessagesForNode(v7, a2, v8, a4) && CInputDest::GetContainerInfo(v11) )
      {
        v9 = (unsigned int)(v9 + 1);
        v7 = (CTouchProcessor *)(unsigned int)*CInputDest::GetContainerId(v11);
        *(_DWORD *)v8 |= 0x1000u;
        *((_DWORD *)v11 - 87) |= 0x2000u;
        *((_DWORD *)v11 + 30) = (_DWORD)v7;
      }
      ++v10;
      v8 = (const struct CPointerInfoNode *)((char *)v8 + 480);
      v11 = (CInputDest *)((char *)v11 + 480);
    }
    while ( v10 < *((_DWORD *)a2 + 12) );
    if ( (_DWORD)v9 )
    {
      memset(v68, 0, sizeof(v68));
      v13 = *((unsigned int *)a2 + 14);
      if ( *((void **)a2 + 8) != TouchExtensibility::hDeviceUser )
      {
        v14 = *(_QWORD *)(*((_QWORD *)a2 + 32) + 16LL);
        if ( v57 )
          v15 = *(_QWORD *)(v14 + 24);
        else
          v15 = *(_QWORD *)(v14 + 16);
        *(_QWORD *)&v68[2] = v15;
      }
      v16 = *(_OWORD *)((char *)a2 + 88);
      v68[3] = *(_OWORD *)((char *)a2 + 72);
      v17 = *(_OWORD *)((char *)a2 + 104);
      v68[4] = v16;
      v18 = *(_OWORD *)((char *)a2 + 120);
      v68[5] = v17;
      v19 = *(_OWORD *)((char *)a2 + 136);
      v68[6] = v18;
      v20 = *(_OWORD *)((char *)a2 + 152);
      v68[7] = v19;
      v21 = *(_OWORD *)((char *)a2 + 168);
      v68[8] = v20;
      v22 = *(_OWORD *)((char *)a2 + 200);
      v68[9] = v21;
      v68[10] = *(_OWORD *)((char *)a2 + 184);
      v68[11] = v22;
      DWORD2(v68[12]) = 0;
      *(_QWORD *)&v68[13] = 0LL;
      *(_QWORD *)&v68[14] = 0LL;
      v23 = 24 * (v13 + 10);
      *(_QWORD *)&v68[12] = v57;
      v24 = *((_QWORD *)a2 + 29);
      HIDWORD(v68[1]) = v13;
      v58 = v23;
      if ( (_DWORD)v13 )
      {
        v25 = v13;
        do
        {
          v26 = *(_DWORD *)(v24 + 8);
          v24 = *(_QWORD *)(v24 + 24);
          v23 += (v26 + 7) & 0xFFFFFFF8;
          --v25;
        }
        while ( v25 );
        v58 = v23;
      }
      v27 = 192 * v9;
      if ( (unsigned __int64)(192 * v9) <= 0xFFFFFFFF )
      {
        v28 = gpLeakTrackingAllocator;
        Size = v27;
        v29 = v27;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6E705649) == 0x6E705649 )
        {
          v30 = 0LL;
          if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
          {
            while ( *((_DWORD *)gpLeakTrackingAllocator + v30) != 1852855881 )
            {
              if ( ++v30 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                goto LABEL_31;
            }
            v34 = 0;
            if ( v27 < 0x1000uLL || (v27 & 0xFFF) != 0 )
            {
              v34 = 1;
              v29 = v27 + 16LL;
            }
            Pool2 = ExAllocatePool2(260LL, v29);
            if ( !Pool2 )
              goto LABEL_33;
            memset(BackTrace, 0, sizeof(BackTrace));
            RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
            if ( v34 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                     (__int64)v28,
                     (const void *)Pool2,
                     (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                Pool2 += 16LL;
LABEL_32:
                if ( !Pool2 )
                  goto LABEL_33;
LABEL_50:
                v35 = 0;
                if ( *((_DWORD *)a2 + 12) )
                {
                  v36 = *((_QWORD *)a2 + 30) + 4LL;
                  do
                  {
                    if ( (*(_DWORD *)v36 & 0x2000) != 0 && (*(_DWORD *)v36 & 0x4000) == 0 )
                    {
                      v37 = 0LL;
                      memset((void *)Pool2, 0, Size);
                      v39 = v35 < *((_DWORD *)a2 + 12);
                      for ( i = v35; ; v39 = (unsigned int)i < *((_DWORD *)a2 + 12) )
                      {
                        v60 = i;
                        if ( !v39 )
                        {
                          v66 = 0;
                          DWORD2(v68[1]) = v37;
                          LODWORD(v68[0]) = 192 * v37 + v58;
                          v64[0] = v68;
                          *((_QWORD *)&v68[14] + 1) = Pool2;
                          v58 = v68[0];
                          v65 = *(_DWORD *)(v36 + 468);
                          v64[1] = a2;
                          IVRootDeliver::Pointer::SendTouchInput(
                            (IVRootDeliver::Pointer *)v64,
                            (struct CContainerPointerInput *)v38);
                          if ( (*(_DWORD *)(Pool2 + 28) & 0x10000) != 0 )
                          {
                            v53 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(Pool2 + 32), 19) + 472);
                            if ( v53 )
                            {
                              v54 = *(_QWORD *)(v53 + 1056);
                              if ( v54 )
                              {
                                *(_DWORD *)(v54 + 372) |= 2u;
                                *(_DWORD *)(v54 + 368) = v65;
                              }
                            }
                          }
                          break;
                        }
                        v41 = *((_QWORD *)a2 + 30);
                        v42 = 480 * i;
                        v43 = *(_DWORD *)(480 * i + v41 + 4);
                        if ( (v43 & 0x2000) != 0 )
                        {
                          v38 = 0x4000LL;
                          if ( (v43 & 0x4000) == 0
                            && *(_WORD *)(v36 + 468) == *(_WORD *)(v42 + v41 + 472)
                            && *(_WORD *)(v36 + 470) == *(_WORD *)(v42 + v41 + 474) )
                          {
                            v45 = *(_DWORD *)(v42 + v41 + 156);
                            *(_DWORD *)(v42 + v41 + 4) = v43 | 0x4000;
                            v63 = (struct tagRIMPOINTERINFONODE *)(Pool2 + 192 * v37);
                            *(_DWORD *)v63 = v45;
                            v46 = (_OWORD *)(v42 + v41 + 160);
                            *(_OWORD *)((char *)v63 + 8) = *v46;
                            *(_OWORD *)((char *)v63 + 24) = v46[1];
                            *(_OWORD *)((char *)v63 + 40) = v46[2];
                            *(_OWORD *)((char *)v63 + 56) = v46[3];
                            *(_OWORD *)((char *)v63 + 72) = v46[4];
                            *(_OWORD *)((char *)v63 + 88) = v46[5];
                            *(_OWORD *)((char *)v63 + 104) = v46[6];
                            v47 = v46[7];
                            v46 += 8;
                            *(_OWORD *)((char *)v63 + 120) = v47;
                            *(_OWORD *)((char *)v63 + 136) = *v46;
                            *(_OWORD *)((char *)v63 + 152) = v46[1];
                            *(_OWORD *)((char *)v63 + 168) = v46[2];
                            *((_QWORD *)v63 + 23) = *((_QWORD *)v46 + 6);
                            *((_DWORD *)v63 + 7) &= 0xFF87FFFE;
                            ContainerHwndDest = CInputDest::GetContainerHwndDest((CInputDest *)(v36 + 348));
                            *(_QWORD *)(v50 + 40) = ContainerHwndDest;
                            WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v51 + v49 + 352));
                            memset(v69, 0, sizeof(v69));
                            if ( !(unsigned int)ApiSetGetLatestInputTransform(WindowHandle, v69)
                              || !CTouchProcessor::TransformPointerCoordinates(
                                    (const struct tagINPUT_TRANSFORM *)v69,
                                    v63) )
                            {
                              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
                                || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
                              {
                                v12 = 0;
                              }
                              if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                              {
                                v55 = 335;
                                LOBYTE(v55) = v12;
                                LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                                WPP_RECORDER_AND_TRACE_SF_q(
                                  WPP_GLOBAL_Control->AttachedDevice,
                                  v55,
                                  v52,
                                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                                  2,
                                  7,
                                  335,
                                  (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids,
                                  (char)WindowHandle);
                              }
                              return;
                            }
                            v37 = (unsigned int)(v37 + 1);
                          }
                        }
                        i = (unsigned int)(v60 + 1);
                      }
                    }
                    ++v35;
                    v36 += 480LL;
                  }
                  while ( v35 < *((_DWORD *)a2 + 12) );
                }
                NSInstrumentation::CLeakTrackingAllocator::Free(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  (char *)Pool2);
                return;
              }
            }
            else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                        (__int64)v28,
                        Pool2,
                        (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              goto LABEL_50;
            }
            ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_33:
            v32 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
            {
              v12 = 0;
            }
            LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return;
            v33 = 334;
LABEL_87:
            v56 = v33;
            LOBYTE(v33) = v12;
            WPP_RECORDER_AND_TRACE_SF_(
              v32->AttachedDevice,
              v33,
              v24,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              7,
              v56,
              (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
            return;
          }
        }
LABEL_31:
        Pool2 = ExAllocatePool2(260LL, v27);
        goto LABEL_32;
      }
      v32 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v12 = 0;
      }
      LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = 333;
        goto LABEL_87;
      }
    }
  }
}
