/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C019399C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C00365D0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006F118 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006FBD8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C0071540 (RIMIDEFreeInjectedInfo.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1C007FD34 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C007FE10 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     IsProcessHidRawInputSupported @ 0x1C0080084 (IsProcessHidRawInputSupported.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMFreeHidDesc @ 0x1C01810B4 (RIMFreeHidDesc.c)
 *     RIMIsInteractiveCtrl @ 0x1C01824A8 (RIMIsInteractiveCtrl.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x1C0184D2C (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     rimHidP_FreeCollectionDescription @ 0x1C0185080 (rimHidP_FreeCollectionDescription.c)
 *     rimHidP_GetCaps @ 0x1C01850C8 (rimHidP_GetCaps.c)
 *     RIMFreePointerDevice @ 0x1C0188858 (RIMFreePointerDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0191414 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0191A58 (RIMSearchHidTLCInfo.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C0193398 (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0194488 (RIMIDECreatePointerDeviceInfo.c)
 */

__int64 __fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm0
  __int64 v4; // r14
  __int128 v5; // xmm1
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  NSInstrumentation::CLeakTrackingAllocator *v16; // rbx
  int v17; // eax
  _QWORD *Pool2; // rax
  int v19; // ebx
  __int128 v20; // xmm0
  NSInstrumentation::CLeakTrackingAllocator *v21; // r15
  char v22; // r12
  unsigned __int64 v23; // r14
  int v24; // eax
  _QWORD *v25; // rax
  unsigned int v26; // r10d
  __int64 v27; // r12
  NSInstrumentation::CLeakTrackingAllocator *v28; // r15
  unsigned __int64 v29; // r14
  int v30; // eax
  __int64 v31; // r14
  _QWORD *v32; // rax
  char v33; // r10
  unsigned int v34; // r11d
  char v35; // di
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r10
  char v42; // dl
  int v43; // edx
  int v44; // r8d
  __int64 v45; // r9
  char v46; // dl
  int v47; // kr00_4
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // eax
  int v54; // eax
  int v55; // eax
  __int64 v56; // r9
  __int64 v57; // r8
  int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v64; // rdx
  int v65; // [rsp+20h] [rbp-E0h]
  int v66; // [rsp+28h] [rbp-D8h]
  unsigned int v67; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v68; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v69; // [rsp+70h] [rbp-90h] BYREF
  __int64 v70; // [rsp+78h] [rbp-88h]
  __int64 v71; // [rsp+80h] [rbp-80h]
  unsigned __int64 v72; // [rsp+88h] [rbp-78h] BYREF
  _OWORD *v73; // [rsp+90h] [rbp-70h]
  unsigned __int64 v74; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v75; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v76; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v77; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v80; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v81; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v82; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v83; // [rsp+E8h] [rbp-18h]
  __int128 v84; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v85; // [rsp+100h] [rbp+0h]
  __int128 v86; // [rsp+110h] [rbp+10h]
  void *Src; // [rsp+120h] [rbp+20h]
  __int128 v88; // [rsp+130h] [rbp+30h] BYREF
  __int128 v89; // [rsp+140h] [rbp+40h]
  __int128 v90; // [rsp+150h] [rbp+50h]
  __int128 v91; // [rsp+160h] [rbp+60h]
  PVOID BackTrace[20]; // [rsp+170h] [rbp+70h] BYREF
  PVOID v93[20]; // [rsp+210h] [rbp+110h] BYREF
  PVOID v94[20]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _OWORD v95[4]; // [rsp+350h] [rbp+250h] BYREF
  _OWORD v96[4]; // [rsp+390h] [rbp+290h] BYREF

  v3 = a3[1];
  v4 = 0LL;
  v73 = a3;
  v5 = a3[3];
  v71 = a1;
  v84 = v3;
  v96[0] = v3;
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
  v8 = a3[2];
  v70 = 0LL;
  v96[2] = v5;
  v96[1] = v8;
  v96[3] = a3[4];
  memset(v95, 0, sizeof(v95));
  v9 = *(_OWORD *)(v84 + 16);
  v85 = *(_OWORD *)v84;
  Src = *(void **)(v84 + 32);
  v86 = v9;
  if ( (int)rimHidP_GetCaps((__int64)Src, (__int64)v95, v10, v11) < 0 || !WORD2(v95[0]) || !WORD5(v86) )
    goto LABEL_79;
  v16 = gpLeakTrackingAllocator;
  v12 = 120LL;
  v77 = 120LL;
  v67 = 1147695954;
  v78 = 260LL;
  v17 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v17 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x44687352u) )
      {
LABEL_79:
        v19 = 1;
        goto LABEL_80;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(v78 & 0xFFFFFFFFFFFFFFFDuLL, 136LL, v67);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedAdd64((volatile signed __int64 *)v16 + 14, 1uLL),
            *Pool2 = 1147695954LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v16 + 1),
          0x44687352uLL);
      }
      goto LABEL_19;
    }
    if ( v17 == 2 )
    {
      v74 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1147695954, &v74) )
      {
        v82 = &v78;
        v83 = &v67;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v16,
                                                                                           (__int64)&v82,
                                                                                           &v77);
        goto LABEL_19;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         136LL,
                                                                                         1147695954LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v16 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v16,
                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v74,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            v19 = 0;
            goto LABEL_23;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v16,
                    (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v74,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_19;
        }
        _InterlockedAdd64((volatile signed __int64 *)v16 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_79;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                     260LL,
                                                                                     120LL,
                                                                                     1147695954LL);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    _InterlockedAdd64((volatile signed __int64 *)v16 + 14, 1uLL);
LABEL_19:
  v19 = 0;
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    goto LABEL_79;
LABEL_23:
  v20 = v95[0];
  v21 = gpLeakTrackingAllocator;
  *(_QWORD *)(a2 + 456) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 40) = v20;
  v79 = 260LL;
  v22 = 0;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 56) = v95[1];
  v68 = 1785620818;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72) = v95[2];
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 88) = v95[3];
  v23 = *(unsigned __int16 *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 44);
  v24 = *(_DWORD *)v21;
  v80 = v23;
  if ( !v24 )
  {
    v4 = ExAllocatePool2(260LL, (unsigned int)v23, 1785620818LL);
    if ( v4 )
      _InterlockedAdd64((volatile signed __int64 *)v21 + 14, 1uLL);
    goto LABEL_46;
  }
  if ( v24 != 1 )
  {
    if ( v24 == 2 )
    {
      v75 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v21, 1785620818, &v75) )
      {
        *(_QWORD *)&v84 = &v79;
        *((_QWORD *)&v84 + 1) = &v68;
        v4 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
               (__int64)v21,
               (__int64)&v84,
               &v80);
        goto LABEL_46;
      }
      if ( v23 < 0x1000 || (v23 & 0xFFF) != 0 )
      {
        v23 += 16LL;
        v22 = 1;
        v80 = v23;
      }
      v4 = ExAllocatePool2(260LL, v23, v26);
      if ( !v4 )
      {
        v4 = 0LL;
        goto LABEL_46;
      }
      _InterlockedAdd64((volatile signed __int64 *)v21 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(v93);
      if ( v22 && (unsigned __int64)(v4 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v21,
               (const void *)v4,
               v75,
               (struct NSInstrumentation::CBackTrace *)v93) )
        {
          v4 += 16LL;
          goto LABEL_46;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v21,
                  v4,
                  v75,
                  (struct NSInstrumentation::CBackTrace *)v93) )
      {
        goto LABEL_46;
      }
      _InterlockedAdd64((volatile signed __int64 *)v21 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v4);
    }
LABEL_45:
    v4 = 0LL;
    goto LABEL_46;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v21, 0x6A6E6952u) || v23 + 16 < v23 )
    goto LABEL_45;
  v25 = (_QWORD *)ExAllocatePool2(v79 & 0xFFFFFFFFFFFFFFFDuLL, v23 + 16, v68);
  v4 = (__int64)v25;
  if ( !v25
    || (_InterlockedAdd64((volatile signed __int64 *)v21 + 14, 1uLL),
        *v25 = 1785620818LL,
        v4 = (__int64)(v25 + 2),
        v25 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v21 + 1),
      0x6A6E6952uLL);
  }
LABEL_46:
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) = v4;
  v27 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( !v4 )
    goto LABEL_79;
  v28 = gpLeakTrackingAllocator;
  v29 = WORD5(v86);
  v13 = 260LL;
  v69 = 1785620818;
  v81 = 260LL;
  v30 = *(_DWORD *)gpLeakTrackingAllocator;
  v72 = WORD5(v86);
  if ( !v30 )
  {
    v31 = ExAllocatePool2(260LL, WORD5(v86), 1785620818LL);
    if ( v31 )
      _InterlockedAdd64((volatile signed __int64 *)v28 + 14, 1uLL);
    goto LABEL_50;
  }
  if ( v30 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6A6E6952u)
      && v29 + 16 >= v29 )
    {
      v32 = (_QWORD *)ExAllocatePool2(v81 & 0xFFFFFFFFFFFFFFFDuLL, v29 + 16, v69);
      v31 = (__int64)v32;
      if ( !v32
        || (_InterlockedAdd64((volatile signed __int64 *)v28 + 14, 1uLL),
            *v32 = 1785620818LL,
            v31 = (__int64)(v32 + 2),
            v32 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v28 + 1),
          0x6A6E6952uLL);
      }
    }
    else
    {
      v31 = 0LL;
    }
    goto LABEL_50;
  }
  if ( v30 != 2 )
  {
LABEL_73:
    v31 = 0LL;
    goto LABEL_74;
  }
  v76 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1785620818, &v76) )
  {
    v82 = &v81;
    v83 = &v69;
    v31 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
            (__int64)v28,
            (__int64)&v82,
            &v72);
    goto LABEL_74;
  }
  v35 = v33;
  if ( v29 < 0x1000 || (v29 & 0xFFF) != 0 )
  {
    v29 += 16LL;
    v35 = 1;
    v72 = v29;
  }
  v31 = ExAllocatePool2(260LL, v29, v34);
  if ( !v31 )
  {
LABEL_72:
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v27;
    goto LABEL_73;
  }
  _InterlockedAdd64((volatile signed __int64 *)v28 + 16, 1uLL);
  NSInstrumentation::CBackTrace::CBackTrace(v94);
  if ( !v35 || (unsigned __int64)(v31 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v28,
           v31,
           v76,
           (struct NSInstrumentation::CBackTrace *)v94) )
    {
      goto LABEL_50;
    }
    goto LABEL_71;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v28,
          (const void *)v31,
          v76,
          (struct NSInstrumentation::CBackTrace *)v94) )
  {
LABEL_71:
    _InterlockedAdd64((volatile signed __int64 *)v28 + 17, 1uLL);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v31);
    goto LABEL_72;
  }
  v31 += 16LL;
LABEL_50:
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v27;
LABEL_74:
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = v31;
  if ( !v31 )
    v19 = 1;
  v4 = 0LL;
LABEL_80:
  v36 = SGDGetUserSessionState(v13, v12, v14, v15);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v77, (struct _KTHREAD **)(v36 + 288));
  if ( v19 )
    goto LABEL_120;
  memmove(
    *(void **)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16),
    Src,
    WORD5(v86));
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 108) = 0;
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 104) = WORD5(v86);
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112) = 0x10000;
  v70 = (__int64)RIMSearchHidTLCInfo(WORD1(v95[0]), LOWORD(v95[0]), v37, v38);
  v41 = v70;
  if ( !v70 )
  {
    v70 = RIMAllocateAndLinkHidTLCInfo(WORD1(v95[0]), LOWORD(v95[0]), v39, v40);
    v45 = v70;
    if ( !v70 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v43) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v43) = 0;
      }
      if ( (_BYTE)v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v44) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v43,
          v44,
          (_DWORD)gRimLog,
          3,
          1,
          13,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
          v71);
        v45 = v70;
      }
      v19 = 1;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v4 = 0LL;
      v46 = 0;
    }
    else
    {
      v46 = 1;
      v4 = 0LL;
    }
    if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qDD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v46,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0xEu,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
        v45,
        WORD1(v95[0]),
        LOWORD(v95[0]));
    if ( !v19 )
      goto LABEL_108;
LABEL_120:
    v49 = v71;
    v48 = (__int64)v73;
    goto LABEL_115;
  }
  v42 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( !v42 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_109;
  WPP_RECORDER_AND_TRACE_SF_DDq(
    (__int64)WPP_GLOBAL_Control->AttachedDevice,
    v42,
    WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
    (__int64)WPP_GLOBAL_Control,
    v65,
    v66,
    0xCu,
    (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
LABEL_108:
  v41 = v70;
LABEL_109:
  ++*(_DWORD *)(v41 + 20);
  v47 = v95[0];
  *(_QWORD *)(a2 + 464) = v41;
  if ( HIWORD(v47) == 13 && ((unsigned __int16)(v47 - 1) <= 1u || (unsigned __int16)(v47 - 4) <= 1u) )
  {
    v48 = (__int64)v73;
    v49 = v71;
    v88 = v85;
    *(_QWORD *)&v90 = Src;
    v89 = v86;
    if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(
                          v71,
                          a2,
                          v73,
                          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                          &v88) )
      v19 = 1;
  }
  else
  {
    v88 = v95[0];
    v89 = v95[1];
    v90 = v95[2];
    v91 = v95[3];
    LOBYTE(v54) = RIMIsInteractiveCtrl(&v88);
    v49 = v71;
    v48 = (__int64)v73;
    if ( v54 )
      *(_DWORD *)(a2 + 200) |= 0x100u;
  }
  v4 = 0LL;
LABEL_115:
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v77);
  if ( v19 )
    goto LABEL_130;
  if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v49, SWORD1(v95[0]), v95[0]) )
  {
    v53 = *(_DWORD *)(a2 + 184) & 0xFFFCFFFF | 0x10000;
    *(_DWORD *)(a2 + 200) |= 0x40u;
    *(_DWORD *)(a2 + 184) = v53;
  }
  else if ( *(_DWORD *)(v49 + 1056) != (_DWORD)v4 )
  {
    v55 = IsProcessHidRawInputSupported();
    v57 = LOWORD(v95[0]);
    v58 = v4;
    if ( v55 >= 0 )
      v58 = 0x20000;
    v59 = WORD1(v95[0]);
    *(_DWORD *)(a2 + 184) = v58 | *(_DWORD *)(a2 + 184) & 0xFFFDFFFF;
    if ( (unsigned int)rimCheckForExplicitRimConflictInProcess(*(_QWORD *)(v49 + 32), v59, v57, v56) )
      goto LABEL_126;
  }
  v60 = RIMIDEAllocateInjectedInfo(v48);
  *(_QWORD *)(a2 + 384) = v60;
  if ( !v60 )
  {
LABEL_126:
    v19 = 1;
    goto LABEL_130;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v61);
  v50 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v50 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  *(_DWORD *)(v50 + 816) |= 0x200000u;
  *(_QWORD *)(*(_QWORD *)(a2 + 384) + 88LL) = v50;
LABEL_130:
  rimHidP_FreeCollectionDescription((__int64)v96, v50, v51, v52);
  *(_QWORD *)&v96[0] = v4;
  if ( !v19 )
    return UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    RIMFreeHidDesc((char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  v64 = *(_QWORD *)(a2 + 472);
  if ( v64 )
  {
    RIMFreePointerDevice(v49, v64);
    *(_QWORD *)(a2 + 472) = v4;
  }
  RIMIDEFreeInjectedInfo(a2);
  return 0LL;
}
