/*
 * XREFs of ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C01708C0
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z @ 0x1C016EE2C (-DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H_N@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C01703A0 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z @ 0x1C0225A02 (-InsertGPUWait@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_CLIENT_INFO@1@PEAUSWAPCHAIN_SURF_INFO@1@I@Z.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C02E5B80 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000E694 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C002B450 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C002B770 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?GetHeadIterator@?$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA?AVITERATOR@1@XZ @ 0x1C002BF64 (-GetHeadIterator@-$DXGNODELIST@VDXGCONTEXT@@VDXGHWQUEUE@@@@QEAA-AVITERATOR@1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0pqPR1XR1_EtwWriteTransfer @ 0x1C0054230 (McTemplateK0pqPR1XR1_EtwWriteTransfer.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C0059A28 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x1C0059F24 (-GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ.c)
 *     McTemplateK0pqPR1x_EtwWriteTransfer @ 0x1C0059FB0 (McTemplateK0pqPR1x_EtwWriteTransfer.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C017EB60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02DB630 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C033FC10 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 *     ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C037FAB0 (-VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTE.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromGpu(
        unsigned int a1,
        unsigned int *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct DXGPROCESS *a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10,
        bool a11)
{
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // r14
  _BYTE *Pool2; // r15
  struct DXGCONTEXT *v14; // r12
  __int64 *v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r9
  struct _KEVENT *v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v26; // rbx
  DXGPUSHLOCK *v27; // rcx
  unsigned int *v28; // rdi
  unsigned int v29; // esi
  unsigned int v30; // ebx
  __int64 v31; // rax
  unsigned int v32; // ebx
  __int64 v33; // rbx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // eax
  __int64 *v40; // rdi
  struct ADAPTER_RENDER *v41; // rsi
  struct ADAPTER_RENDER *v42; // r8
  struct ADAPTER_RENDER *v43; // rdx
  __int64 v44; // r9
  __int64 v45; // rcx
  struct DXGDEVICESYNCOBJECT **v46; // rax
  _BYTE *v47; // r9
  unsigned int v48; // r10d
  size_t v49; // r8
  __int64 v51; // r15
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // eax
  int v57; // ecx
  unsigned __int64 v58; // rbx
  __int64 *v59; // r10
  __int64 v60; // r9
  struct DXGCONTEXT *v61; // rdi
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r8
  unsigned int v67; // ecx
  unsigned int v68; // ebx
  DXGPUSHLOCK *v69; // rdi
  __int64 v70; // rax
  unsigned int v71; // ebx
  __int64 v72; // rbx
  __int64 v73; // r8
  __int64 *v74; // rdi
  __int64 v75; // r8
  unsigned int v76; // ecx
  struct _KEVENT *v77; // rbx
  int v78; // r9d
  __int64 v79; // rdx
  struct _KEVENT *v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rcx
  __int64 v84; // r8
  int v85; // r9d
  int v86; // eax
  int DxgAdapterSyncObject; // r12d
  struct DXGPROCESS *v88; // rsi
  unsigned __int64 RedirectedFlipFenceValue; // rax
  struct DXGPROCESS *v90; // rsi
  PVOID v91; // rcx
  struct DXGPROCESS *v92; // rsi
  PVOID v93; // rcx
  __int64 v94; // rbx
  unsigned int *v95; // rdi
  __int64 v96; // r8
  __int64 v97; // r9
  struct DXGPROCESS *v98; // rsi
  struct DXGPROCESS *v99; // rsi
  unsigned int *v100; // rbx
  struct DXGPROCESS *v101; // rsi
  __int64 v102; // rbx
  unsigned int *v103; // rdi
  __int64 v104; // r8
  __int64 v105; // r9
  struct DXGPROCESS *v106; // rsi
  struct DXGPROCESS *v107; // rsi
  unsigned int v108; // ebx
  int v109; // eax
  int v110; // r9d
  int v111; // eax
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 *v114; // r10
  __int64 v115; // rax
  int v116; // eax
  __int64 v117; // r8
  __int64 v118; // rbx
  unsigned int *v119; // r14
  struct DXGPROCESS *v120; // rsi
  PVOID v121; // rcx
  __int64 v122; // rbx
  unsigned int *v123; // r14
  struct DXGPROCESS *v124; // rsi
  __int64 v125; // rbx
  unsigned int *v126; // r14
  struct DXGPROCESS *v127; // rsi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-2B8h]
  char v129; // [rsp+50h] [rbp-288h]
  char v130; // [rsp+51h] [rbp-287h]
  char v131; // [rsp+52h] [rbp-286h]
  unsigned int v132; // [rsp+54h] [rbp-284h]
  unsigned int v133; // [rsp+54h] [rbp-284h]
  struct DXGGLOBAL *v134; // [rsp+58h] [rbp-280h] BYREF
  char v135; // [rsp+60h] [rbp-278h]
  __int64 v136; // [rsp+68h] [rbp-270h] BYREF
  int v137; // [rsp+70h] [rbp-268h]
  struct DXGPROCESS *v138; // [rsp+78h] [rbp-260h]
  PVOID P; // [rsp+80h] [rbp-258h] BYREF
  _BYTE v140[32]; // [rsp+88h] [rbp-250h] BYREF
  int v141; // [rsp+A8h] [rbp-230h]
  struct DXGDEVICESYNCOBJECT **v142; // [rsp+B0h] [rbp-228h]
  struct DXGCONTEXT *v143; // [rsp+B8h] [rbp-220h] BYREF
  DXGCONTEXT *v144; // [rsp+C0h] [rbp-218h] BYREF
  char v145; // [rsp+C8h] [rbp-210h]
  __int64 v146; // [rsp+D0h] [rbp-208h] BYREF
  char v147; // [rsp+D8h] [rbp-200h]
  __int64 *v148; // [rsp+E0h] [rbp-1F8h]
  unsigned int *v149; // [rsp+E8h] [rbp-1F0h]
  PVOID v150; // [rsp+F0h] [rbp-1E8h]
  _BYTE v151[32]; // [rsp+F8h] [rbp-1E0h] BYREF
  int v152; // [rsp+118h] [rbp-1C0h]
  void *Src; // [rsp+120h] [rbp-1B8h]
  unsigned __int64 v154; // [rsp+128h] [rbp-1B0h] BYREF
  char v155[8]; // [rsp+130h] [rbp-1A8h] BYREF
  __int64 v156; // [rsp+138h] [rbp-1A0h]
  int v157; // [rsp+140h] [rbp-198h]
  __int64 v158; // [rsp+148h] [rbp-190h] BYREF
  unsigned int *v159; // [rsp+150h] [rbp-188h]
  struct DXGPROCESS *v160; // [rsp+158h] [rbp-180h]
  struct DXGDEVICESYNCOBJECT **v161; // [rsp+160h] [rbp-178h]
  __int64 v162; // [rsp+168h] [rbp-170h] BYREF
  char v163; // [rsp+170h] [rbp-168h]
  DXGPUSHLOCK *v164; // [rsp+178h] [rbp-160h]
  __int64 v165; // [rsp+180h] [rbp-158h] BYREF
  char v166; // [rsp+188h] [rbp-150h]
  struct DXGADAPTERSYNCOBJECT *v167; // [rsp+190h] [rbp-148h] BYREF
  __int64 v168; // [rsp+198h] [rbp-140h]
  __int128 v169; // [rsp+1A0h] [rbp-138h] BYREF
  size_t v170; // [rsp+1B0h] [rbp-128h]
  _BYTE *v171; // [rsp+1B8h] [rbp-120h]
  PVOID v172; // [rsp+1C0h] [rbp-118h]
  _BYTE v173[32]; // [rsp+1C8h] [rbp-110h] BYREF
  int v174; // [rsp+1E8h] [rbp-F0h]
  char v175[8]; // [rsp+1F0h] [rbp-E8h] BYREF
  _BYTE v176[16]; // [rsp+1F8h] [rbp-E0h] BYREF
  DXGADAPTER *v177; // [rsp+208h] [rbp-D0h]
  char v178; // [rsp+210h] [rbp-C8h]
  __int64 v179; // [rsp+218h] [rbp-C0h]
  _BYTE v180[16]; // [rsp+238h] [rbp-A0h] BYREF
  __int64 v181; // [rsp+248h] [rbp-90h]
  __int64 v182; // [rsp+278h] [rbp-60h]
  char v183; // [rsp+280h] [rbp-58h]

  v11 = a3;
  v149 = a2;
  v12 = a1;
  Src = a3;
  v154 = a4;
  v138 = a6;
  v160 = a6;
  v150 = 0LL;
  v152 = 0;
  if ( a1 <= 4 )
  {
    Pool2 = v151;
    v150 = v151;
    if ( a1 )
    {
      memset(v151, 0, 8LL * a1);
      Pool2 = v150;
    }
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a1 >= 8 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * a1, 1265072196LL, a4);
    v150 = Pool2;
LABEL_4:
    v152 = v12;
    goto LABEL_5;
  }
  Pool2 = 0LL;
LABEL_5:
  if ( !Pool2 )
    return 3221225495LL;
  v143 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v144, a5, a6, &v143, a8, 1);
  v14 = v143;
  if ( !v143 )
  {
    WdLogSingleEntry3(2LL, a6, a5, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hContext 0x%I64x returning 0x%I64x",
      (__int64)a6,
      a5,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_252;
  }
  v15 = (__int64 *)((char *)v143 + 16);
  v148 = (__int64 *)((char *)v143 + 16);
  v131 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v143 + 2) + 16LL) + 16LL) + 209LL);
  P = 0LL;
  v141 = 0;
  v142 = 0LL;
  if ( v131 )
  {
    v142 = (struct DXGDEVICESYNCOBJECT **)PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(
                                            &P,
                                            (unsigned int)v12);
    if ( !v142 )
    {
      if ( P != v140 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v141 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v144);
      if ( v150 != v151 && v150 )
        ExFreePoolWithTag(v150, 0);
      return 3221225495LL;
    }
  }
  v16 = *v15;
  v136 = v16;
  v137 = 0;
  v17 = v16;
  v146 = v16;
  v147 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155, (struct _KTHREAD **)v14 + 56, 1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v175, *v148, 0, v18, a8);
  if ( a8 )
    goto LABEL_27;
  if ( a9 )
  {
    v77 = *(struct _KEVENT **)(v16 + 16);
    if ( *(_DWORD *)(v16 + 432) == 2 )
    {
      if ( KeReadStateEvent(v77 + 5) )
        goto LABEL_160;
      v80 = v77 + 5;
    }
    else
    {
      if ( KeReadStateEvent(v77 + 4) )
      {
LABEL_160:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v81, (const EVENT_DESCRIPTOR *)"g", v82, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
        }
        v137 = 1;
        goto LABEL_16;
      }
      v80 = v77 + 4;
    }
    KeWaitForSingleObject(v80, Executive, 0, 0, 0LL);
    goto LABEL_160;
  }
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*v148 + 136)) && v16 )
  {
    v19 = *(struct _KEVENT **)(v16 + 16);
    if ( !KeReadStateEvent(v19 + 4) )
      KeWaitForSingleObject(&v19[4], Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v16 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v83, (const EVENT_DESCRIPTOR *)"g", v84, 40);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v16 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL));
    }
    v147 = 1;
  }
LABEL_16:
  if ( !a11 || *((_DWORD *)v14 + 36) == 2 )
  {
    v20 = v156;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v85 = *(_DWORD *)(v20 + 24);
        if ( v85 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (const EVENT_DESCRIPTOR *)"g", v22, v85);
      }
      ExAcquirePushLockExclusiveEx(v20, 0LL);
    }
    *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
    v157 = 2;
  }
  if ( v183 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v180, 0LL);
    if ( *(_DWORD *)(v181 + 200) != 1 )
      goto LABEL_214;
  }
  if ( v178 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v176, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v177 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v177 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, (const EVENT_DESCRIPTOR *)"g", v24, 72);
      KeWaitForSingleObject((char *)v177 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v177, 0LL);
  }
  v179 = 0LL;
  v178 = 1;
  if ( *(_DWORD *)(v182 + 576) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v176);
    if ( !v183 )
    {
LABEL_215:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
      if ( v136 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
      if ( P != v140 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v141 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v144);
      if ( v150 != v151 && v150 )
        ExFreePoolWithTag(v150, 0);
      return 3221226166LL;
    }
LABEL_214:
    COREACCESS::Release((COREACCESS *)v180);
    goto LABEL_215;
  }
  v14 = v143;
  v16 = v136;
  v11 = (unsigned __int64 *)Src;
LABEL_27:
  Global = DXGGLOBAL_GetGlobal();
  v134 = Global;
  v135 = 0;
  if ( !Global )
  {
    WdLogSingleEntry1(1LL, 2725LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pGlobal != NULL", 2725LL, 0LL, 0LL, 0LL, 0LL);
    Global = 0LL;
  }
  if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 79)) )
  {
    WdLogSingleEntry1(1LL, 2730LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_pGlobal->IsSyncObjectLockSharedOwner() || bAllowRecursive",
      2730LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v26 = v134;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*((PERESOURCE *)v26 + 79), 1u);
  v135 = 1;
  v130 = 0;
  v129 = 0;
  v132 = 0;
  if ( (_DWORD)v12 )
  {
    v27 = (struct DXGPROCESS *)((char *)v138 + 248);
    v164 = (struct DXGPROCESS *)((char *)v138 + 248);
    v161 = v142;
    v28 = v149;
    v159 = v149;
    v168 = Pool2 - (_BYTE *)v142;
    v29 = 0;
    while ( 1 )
    {
      v30 = *v28;
      DXGPUSHLOCK::AcquireShared(v27);
      v31 = (v30 >> 6) & 0xFFFFFF;
      v32 = v30 >> 30;
      if ( (unsigned int)v31 < *((_DWORD *)v138 + 74)
        && (v66 = *((_QWORD *)v138 + 35), v67 = *(_DWORD *)(v66 + 16 * v31 + 8), v32 == ((v67 >> 5) & 3))
        && (v67 & 0x2000) == 0
        && (v67 & 0x1F) == 8 )
      {
        v33 = *(_QWORD *)(v66 + 16LL * (unsigned int)v31);
      }
      else
      {
        v33 = 0LL;
      }
      ExReleasePushLockSharedEx(v164, 0LL);
      KeLeaveCriticalRegion();
      if ( v33 )
      {
        if ( v142 )
          *v161 = 0LL;
        v34 = *(_DWORD *)(v33 + 200);
        if ( v34 == 5 )
        {
          WdLogSingleEntry1(1LL, 1181LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_MONITORED_FENCE",
            1181LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v34 = *(_DWORD *)(v33 + 200);
        }
        if ( v34 == 6 )
        {
          WdLogSingleEntry1(1LL, 1182LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pSyncObject->GetSyncObjectType() != D3DDDI_PERIODIC_MONITORED_FENCE",
            1182LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v130 = 1;
        if ( v129 )
        {
          v99 = v138;
          WdLogSingleEntry1(2LL, v138);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%p mixes monitored fence and non-monitored fence sync objects in one wait call.",
            (__int64)v99,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v135 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
          if ( v136 )
LABEL_272:
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
LABEL_273:
          v93 = P;
          if ( P != v140 && P )
LABEL_262:
            ExFreePoolWithTag(v93, 0);
LABEL_263:
          P = 0LL;
          v141 = 0;
          goto LABEL_265;
        }
        v35 = *(_DWORD *)(v33 + 200);
        if ( v35 == 4 )
        {
          v94 = v29;
          v95 = v149;
          v96 = v149[v29];
          v97 = v29;
          v98 = v138;
          WdLogSingleEntry3(2LL, v138, v96, v97);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%p failed, can not wait on CPU Notification object 0x%x at index %d",
            (__int64)v98,
            v95[v94],
            v94,
            0LL,
            0LL);
          if ( v135 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
          if ( v136 )
            goto LABEL_272;
          goto LABEL_273;
        }
        if ( v35 == 3 && (_DWORD)v12 != 1 )
        {
          v92 = v138;
          WdLogSingleEntry2(2LL, v138, v12);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%p can only wait on one fence object at a time instead of %d",
            (__int64)v92,
            v12,
            0LL,
            0LL,
            0LL);
          if ( v135 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
          if ( v136 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
          v93 = P;
          if ( P != v140 && P )
            goto LABEL_262;
          goto LABEL_263;
        }
        DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v165, (struct DXGSYNCOBJECT *)v33);
        if ( v166 )
          WdLogSingleEntry5(0LL, 275LL, 4LL, &v165, 0LL, 0LL);
        v36 = v165;
        KeEnterCriticalRegion();
        if ( *(struct _KTHREAD **)(v36 + 24) == KeGetCurrentThread() )
        {
          v86 = *(_DWORD *)(v36 + 32);
          if ( v86 <= 0 )
          {
            WdLogSingleEntry1(1LL, 472LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
            v86 = *(_DWORD *)(v36 + 32);
          }
          v39 = v86 + 1;
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v36 + 8, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v78 = *(_DWORD *)(v36 + 36);
              if ( v78 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v37, (const EVENT_DESCRIPTOR *)"g", v38, v78);
            }
            _InterlockedIncrement64((volatile signed __int64 *)(v36 + 16));
            ExAcquirePushLockExclusiveEx(v36 + 8, 0LL);
          }
          if ( *(_QWORD *)(v36 + 24) )
          {
            WdLogSingleEntry1(1LL, 496LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
          }
          if ( *(_DWORD *)(v36 + 32) )
          {
            WdLogSingleEntry1(1LL, 497LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
          }
          *(_QWORD *)(v36 + 24) = KeGetCurrentThread();
          v39 = 1;
        }
        *(_DWORD *)(v36 + 32) = v39;
        v166 = 1;
        v40 = v148;
        v41 = *(struct ADAPTER_RENDER **)(*v148 + 16);
        v167 = 0LL;
        if ( (*(_DWORD *)(v33 + 204) & 4) != 0 )
        {
          DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject((DXGSYNCOBJECTCA *)v33, v41, &v167);
          if ( DxgAdapterSyncObject < 0 )
            goto LABEL_229;
        }
        else
        {
          if ( v41 )
          {
            v42 = *(struct ADAPTER_RENDER **)(v33 + 312);
            if ( v42 != v41 )
            {
              DxgAdapterSyncObject = -1073741811;
              WdLogSingleEntry4(2LL, v33, v42, v41, -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
                v33,
                *(_QWORD *)(v33 + 312),
                (__int64)v41,
                -1073741811LL,
                0LL);
LABEL_229:
              v88 = v138;
              WdLogSingleEntry3(2LL, v138, *(_QWORD *)(*(_QWORD *)(*v40 + 16) + 16LL), DxgAdapterSyncObject);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x failed, failed to create a sync object on logical adapter 0x%I64x returning 0x%I64x",
                (__int64)v88,
                *(_QWORD *)(*(_QWORD *)(*v40 + 16) + 16LL),
                DxgAdapterSyncObject,
                0LL,
                0LL);
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v165);
              if ( v135 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
              DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
              if ( v136 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
              if ( P != v140 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v141 = 0;
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v144);
              if ( v150 != v151 && v150 )
                ExFreePoolWithTag(v150, 0);
              return (unsigned int)DxgAdapterSyncObject;
            }
          }
          v167 = (struct DXGADAPTERSYNCOBJECT *)(v33 + 296);
        }
        if ( !v131
          && ((v43 = *(struct ADAPTER_RENDER **)(*v40 + 16),
               v44 = *((_QWORD *)v43 + 78),
               (*(_DWORD *)(v33 + 204) & 4) != 0)
            ? (v45 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v33, v43) + 4))
            : (v45 = *(_QWORD *)(v33 + 328)),
              (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(v44 + 8) + 848LL))(v45, v154)
           && (v79 = *v40, *(_BYTE *)(*(_QWORD *)(*v40 + 16) + 912LL))) )
        {
          v14 = v143;
          if ( (*(_DWORD *)(*(_QWORD *)(v79 + 40) + 424LL) & 4) == 0 || (*((_DWORD *)v143 + 101) & 8) == 0 )
          {
            if ( (*(_BYTE *)(v33 + 204) & 1) == 0
              || !*(_BYTE *)(v79 + 1867)
              || (RedirectedFlipFenceValue = DXGSYNCOBJECT::GetRedirectedFlipFenceValue((DXGSYNCOBJECT *)v33),
                  v154 > RedirectedFlipFenceValue) )
            {
              v90 = v138;
              WdLogSingleEntry2(2LL, v138, -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"0x%I64x submitted an invalid out of order wait for sync object. Returning 0x%I64x",
                (__int64)v90,
                -1073741811LL,
                0LL,
                0LL,
                0LL);
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v165);
              if ( v135 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
              COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
              DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
              if ( v136 )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
              if ( P != v140 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v141 = 0;
LABEL_252:
              DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v144);
              v91 = v150;
              if ( v150 == v151 || !v150 )
                return 3221225485LL;
              goto LABEL_327;
            }
          }
        }
        else
        {
          v14 = v143;
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v165);
        v29 = v132;
      }
      else
      {
        v68 = *v28;
        v69 = v164;
        DXGPUSHLOCK::AcquireShared(v164);
        v70 = (v68 >> 6) & 0xFFFFFF;
        v71 = v68 >> 30;
        if ( (unsigned int)v70 < *((_DWORD *)v138 + 74)
          && (v75 = *((_QWORD *)v138 + 35), v76 = *(_DWORD *)(v75 + 16 * v70 + 8), v71 == ((v76 >> 5) & 3))
          && (v76 & 0x2000) == 0
          && (v76 & 0x1F) != 0 )
        {
          if ( (v76 & 0x1F) == 0xB )
          {
            v72 = *(_QWORD *)(v75 + 16LL * (unsigned int)v70);
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            v72 = 0LL;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        else
        {
          v72 = 0LL;
        }
        ExReleasePushLockSharedEx(v69, 0LL);
        KeLeaveCriticalRegion();
        if ( !v72 )
        {
          v102 = v29;
          v103 = v149;
          v104 = v149[v29];
          v105 = v29;
          v106 = v138;
          WdLogSingleEntry3(2LL, v138, v104, v105);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%p failed to wait with invalid hSyncObject 0x%x at index %d",
            (__int64)v106,
            v103[v102],
            v102,
            0LL,
            0LL);
          if ( v135 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
          if ( v136 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
          if ( P != v140 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v141 = 0;
LABEL_265:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v144);
          v91 = v150;
          if ( v150 == v151 || !v150 )
            return 3221225485LL;
LABEL_327:
          ExFreePoolWithTag(v91, 0);
          return 3221225485LL;
        }
        if ( v142 )
          *v161 = (struct DXGDEVICESYNCOBJECT *)v72;
        v129 = 1;
        if ( v130 )
        {
          v101 = v138;
          WdLogSingleEntry1(2LL, v138);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%p mixes monitored fence and non-monitored fence sync objects in one wait call.",
            (__int64)v101,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v135 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
          if ( v136 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
          if ( P != v140 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v141 = 0;
          goto LABEL_265;
        }
        v73 = *(_QWORD *)(v72 + 16);
        v74 = v148;
        if ( v73 != *v148 )
        {
          WdLogSingleEntry2(2LL, *v148, v73);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"WaitForSynchronizationObjectFromGpu on device 0x%p attempts to use a sync object opened on a differ"
                      "ent device 0x%p.",
            *v74,
            *(_QWORD *)(v72 + 16),
            0LL,
            0LL,
            0LL);
          if ( v135 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
          if ( v136 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
          if ( P != v140 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v141 = 0;
          goto LABEL_265;
        }
        if ( (*(_DWORD *)(v72 + 72) & 0x20) != 0 )
        {
          v100 = &v149[v29];
          WdLogSingleEntry1(2LL, *v100);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%x object is opened as signal only and thus cannot be waited on.",
            *v100,
            0LL,
            0LL,
            0LL,
            0LL);
          if ( v135 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
          if ( v136 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
          if ( P != v140 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v141 = 0;
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v144);
          if ( v150 != v151 && v150 )
            ExFreePoolWithTag(v150, 0);
          return 3221225506LL;
        }
        v33 = *(_QWORD *)(v72 + 32);
        if ( (unsigned int)(*(_DWORD *)(v33 + 200) - 5) > 1 )
        {
          WdLogSingleEntry1(1LL, 1325LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pSyncObject->GetSyncObjectType() == D3DDDI_MONITORED_FENCE || pSyncObject->GetSyncObjectType() == D"
                      "3DDDI_PERIODIC_MONITORED_FENCE",
            1325LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v46 = v161;
      *(struct DXGDEVICESYNCOBJECT **)((char *)v161 + v168) = (struct DXGDEVICESYNCOBJECT *)v33;
      v132 = ++v29;
      v28 = ++v159;
      v161 = v46 + 1;
      if ( v29 >= (unsigned int)v12 )
        break;
      v27 = v164;
    }
    v16 = v136;
    v11 = (unsigned __int64 *)Src;
  }
  v47 = 0LL;
  v172 = 0LL;
  v48 = 0;
  v174 = 0;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)Pool2 + 200LL) - 5) > 1 )
    goto LABEL_91;
  if ( !a7 )
  {
    if ( a10 )
    {
      v11 = &v154;
      Src = &v154;
    }
    else if ( !v11 )
    {
      v107 = v138;
      WdLogSingleEntry1(2LL, v138);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x encountered exception, MonitoredFenceValueArray may not be null for monitored fence types.",
        (__int64)v107,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v172 != v173 && v172 )
        ExFreePoolWithTag(v172, 0);
      v172 = 0LL;
      v174 = 0;
      if ( v135 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
      if ( v16 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
      if ( P != v140 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v141 = 0;
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v144);
      v91 = v150;
      if ( v150 == v151 || !v150 )
        return 3221225485LL;
      goto LABEL_327;
    }
    goto LABEL_91;
  }
  if ( (unsigned int)v12 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v12 < 8 )
      goto LABEL_72;
    v47 = (_BYTE *)ExAllocatePool2(64LL, 8 * v12, 1265072196LL, 0LL);
    v172 = v47;
  }
  else
  {
    v47 = v173;
    v172 = v173;
    if ( (_DWORD)v12 )
    {
      memset(v173, 0, 8 * v12);
      v47 = v172;
    }
  }
  v48 = v12;
  v174 = v12;
LABEL_72:
  if ( !v47 )
  {
    v172 = 0LL;
    v174 = 0;
    if ( v135 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
    if ( v16 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
    if ( P != v140 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v141 = 0;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v144);
    if ( v150 != v151 && v150 )
      ExFreePoolWithTag(v150, 0);
    v150 = 0LL;
    v152 = 0;
    return 3221225495LL;
  }
  v49 = v48;
  v170 = v49 * 8;
  v171 = v47;
  if ( &v11[v49] < v11 || (unsigned __int64)&v11[v49] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v47, v11, v49 * 8);
  v47 = v172;
  v11 = (unsigned __int64 *)v172;
  Src = v172;
LABEL_91:
  if ( v131 )
  {
    v108 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*v148 + 16) + 16LL) + 4344LL),
             v138,
             v14,
             v149,
             (struct DXGSYNCOBJECT **)Pool2,
             v142,
             v11,
             v154,
             v12,
             0LL);
    if ( v172 != v173 && v172 )
      ExFreePoolWithTag(v172, 0);
    v172 = 0LL;
    v174 = 0;
    if ( v135 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
    if ( v16 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
    if ( P != v140 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v141 = 0;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v144);
    if ( v150 != v151 && v150 )
      ExFreePoolWithTag(v150, 0);
    return v108;
  }
  v133 = 0;
  if ( !(_DWORD)v12 )
  {
LABEL_116:
    if ( v47 != v173 && v47 )
      ExFreePoolWithTag(v47, 0);
    v172 = 0LL;
    v174 = 0;
    if ( v135 )
    {
      v135 = 0;
      ExReleaseResourceLite(*((PERESOURCE *)v134 + 79));
      KeLeaveCriticalRegion();
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
    if ( v17 && v147 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v16 && v137 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 136));
      KeLeaveCriticalRegion();
    }
    if ( P != v140 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v141 = 0;
    if ( v144 && !v145 )
      DXGCONTEXT::ReleaseReference(v144);
    if ( v150 != v151 )
    {
      if ( v150 )
        ExFreePoolWithTag(v150, 0);
    }
    return 0LL;
  }
  v51 = Pool2 - (_BYTE *)v11;
  while ( 1 )
  {
    v52 = *(unsigned __int64 *)((char *)v11 + v51);
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v162, (struct DXGSYNCOBJECT *)v52);
    if ( v163 )
      WdLogSingleEntry5(0LL, 275LL, 4LL, &v162, 0LL, 0LL);
    v53 = v162;
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v53 + 24) == KeGetCurrentThread() )
    {
      v109 = *(_DWORD *)(v53 + 32);
      if ( v109 <= 0 )
      {
        WdLogSingleEntry1(1LL, 472LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
        v109 = *(_DWORD *)(v53 + 32);
      }
      v56 = v109 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v53 + 8, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v110 = *(_DWORD *)(v53 + 36);
          if ( v110 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v54, (const EVENT_DESCRIPTOR *)"g", v55, v110);
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v53 + 16));
        ExAcquirePushLockExclusiveEx(v53 + 8, 0LL);
      }
      if ( *(_QWORD *)(v53 + 24) )
      {
        WdLogSingleEntry1(1LL, 496LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( *(_DWORD *)(v53 + 32) )
      {
        WdLogSingleEntry1(1LL, 497LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_QWORD *)(v53 + 24) = KeGetCurrentThread();
      v56 = 1;
    }
    *(_DWORD *)(v53 + 32) = v56;
    v163 = 1;
    v57 = *(_DWORD *)(v52 + 200);
    if ( (unsigned int)(v57 - 5) <= 1 )
    {
      v58 = *v11;
    }
    else
    {
      v58 = 0LL;
      if ( v57 == 3 )
        v58 = v154;
    }
    v59 = v148;
    v60 = (*(_DWORD *)(v52 + 204) & 4) != 0
        ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(
                        (DXGSYNCOBJECTCA *)v52,
                        *(struct ADAPTER_RENDER **)(*v148 + 16))
          + 4)
        : *(_QWORD *)(v52 + 328);
    v158 = v60;
    if ( (*((_DWORD *)v14 + 101) & 0x10) == 0 )
      break;
    if ( !a10 )
    {
      DXGNODELIST<DXGCONTEXT,DXGHWQUEUE>::GetHeadIterator((_QWORD *)v143 + 51, &v169);
      v115 = *((_QWORD *)&v169 + 1);
      while ( 1 )
      {
        v159 = (unsigned int *)v115;
        if ( v115 == (_QWORD)v169 || !v115 )
        {
          v169 = 0LL;
          goto LABEL_114;
        }
        v160 = *(struct DXGPROCESS **)(v115 + 40);
        v116 = (*(__int64 (__fastcall **)(struct DXGPROCESS *, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v114 + 16) + 624LL) + 8LL)
                                                                                         + 632LL))(
                 v160,
                 v113,
                 v58);
        LODWORD(v142) = v116;
        if ( v116 < 0 )
          break;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(Timeout) = 1;
          McTemplateK0pqPR1XR1_EtwWriteTransfer(
            (__int64)Src + 8 * v133,
            &EventWaitForSynchronizationObjectFromGpu,
            v117,
            v160,
            Timeout,
            &v158,
            (char *)Src + 8 * v133);
        }
        v115 = *(_QWORD *)v159;
        v113 = v158;
        v114 = v148;
      }
      v122 = v116;
      v123 = v149;
      v124 = v138;
      WdLogSingleEntry4(2LL, v138, v149[v133], v133, v116);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v124,
        v123[v133],
        v133,
        v122,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v162);
      if ( v172 != v173 && v172 )
        ExFreePoolWithTag(v172, 0);
      v172 = 0LL;
      v174 = 0;
      if ( v135 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
      if ( v136 )
        goto LABEL_386;
      goto LABEL_387;
    }
    v160 = (struct DXGPROCESS *)*((_QWORD *)v143 + 36);
    v111 = (*(__int64 (__fastcall **)(struct DXGPROCESS *, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v59 + 16) + 624LL)
                                                                                                 + 8LL)
                                                                                     + 632LL))(
             v160,
             v60,
             v58);
    LODWORD(v142) = v111;
    if ( v111 < 0 )
    {
      v118 = v111;
      v119 = v149;
      v120 = v138;
      WdLogSingleEntry4(2LL, v138, v149[v133], v133, v111);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
        (__int64)v120,
        v119[v133],
        v133,
        v118,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v162);
      if ( v172 != v173 && v172 )
        ExFreePoolWithTag(v172, 0);
      v172 = 0LL;
      v174 = 0;
      if ( v135 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
      if ( v136 )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
      v121 = P;
      if ( P != v140 && P )
        goto LABEL_375;
      goto LABEL_376;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(Timeout) = 1;
      McTemplateK0pqPR1XR1_EtwWriteTransfer(
        (__int64)Src + 8 * v133,
        &EventWaitForSynchronizationObjectFromGpu,
        v112,
        v160,
        Timeout,
        &v158,
        (char *)Src + 8 * v133);
    }
LABEL_114:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v162);
    ++v133;
    ++v11;
    if ( v133 >= (unsigned int)v12 )
    {
      v16 = v136;
      v47 = v172;
      goto LABEL_116;
    }
  }
  v61 = v143;
  v62 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v59 + 16)
                                                                                             + 624LL)
                                                                                 + 8LL)
                                                                     + 624LL))(
          *((_QWORD *)v143 + 32),
          v60,
          v58);
  LODWORD(v142) = v62;
  if ( v62 >= 0 )
  {
    if ( v129 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        LODWORD(Timeout) = 1;
        McTemplateK0pqPR1XR1_EtwWriteTransfer(
          (__int64)Src + 8 * v133,
          &EventWaitForSynchronizationObjectFromGpu,
          v65,
          v143,
          Timeout,
          &v158,
          (char *)Src + 8 * v133);
      }
    }
    else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0pqPR1x_EtwWriteTransfer(v64, v63, v65, v61);
    }
    goto LABEL_114;
  }
  v125 = v62;
  v126 = v149;
  v127 = v138;
  WdLogSingleEntry4(2LL, v138, v149[v133], v133, v62);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x failed to acquire hSyncObject 0x%I64x at index %I64d returning 0x%I64x",
    (__int64)v127,
    v126[v133],
    v133,
    v125,
    0LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v162);
  if ( v172 != v173 && v172 )
    ExFreePoolWithTag(v172, 0);
  v172 = 0LL;
  v174 = 0;
  if ( v135 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v134);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v175);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v155);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v146);
  if ( v136 )
LABEL_386:
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v136);
LABEL_387:
  v121 = P;
  if ( P != v140 && P )
LABEL_375:
    ExFreePoolWithTag(v121, 0);
LABEL_376:
  P = 0LL;
  v141 = 0;
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v144);
  if ( v150 != v151 && v150 )
    ExFreePoolWithTag(v150, 0);
  return (unsigned int)v142;
}
