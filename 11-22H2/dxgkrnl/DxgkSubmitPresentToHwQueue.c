/*
 * XREFs of DxgkSubmitPresentToHwQueue @ 0x1C031E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001064 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001198 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00012E4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001314 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000138C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C000148C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00042E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0007620 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007894 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0024B90 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C0025F00 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0025FA8 (--1CWin32kLocks@@QEAA@XZ.c)
 *     McTemplateK0qpqqqqpp_EtwWriteTransfer @ 0x1C00260AC (McTemplateK0qpqqqqpp_EtwWriteTransfer.c)
 *     McTemplateK0qqxxqq_EtwWriteTransfer @ 0x1C0026184 (McTemplateK0qqxxqq_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C002A716 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C002A8D8 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01BC080 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01BF8F0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C01C0160 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C02BAE24 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C02DE380 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ??1?$PagedPoolZeroedArray@I$03@@QEAA@XZ @ 0x1C03165E0 (--1-$PagedPoolZeroedArray@I$03@@QEAA@XZ.c)
 *     _DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE @ 0x1C0316954 (_DxgkSubmitPresentToHwQueue_--_3_--ENSURE_CONTEXT_DEREFERENCE--_ENSURE_CONTEXT_DEREFERENCE.c)
 *     _DxgkSubmitPresentToHwQueue_::_3_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1C0316A8C (_DxgkSubmitPresentToHwQueue_--_3_--ENSURE_DELETE--_ENSURE_DELETE.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0316BB0 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C033D898 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C033FB9C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_.c)
 */

__int64 __fastcall DxgkSubmitPresentToHwQueue(ULONG64 a1)
{
  int v2; // r13d
  struct DXGGLOBAL *Global; // rax
  _DWORD *v4; // rax
  unsigned __int64 v5; // r12
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  const void *v16; // rdx
  __int64 v17; // rbx
  const void **v18; // rax
  const void *v19; // rdx
  void *v20; // rcx
  ULONG64 v21; // r9
  struct DXGPROCESS *v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // r9
  unsigned int v25; // ecx
  int v26; // ecx
  __int64 v27; // rdx
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  DXGCONTEXT *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGDEVICE *v33; // rdx
  struct DXGCONTEXT **Pool2; // rcx
  unsigned int v35; // r8d
  unsigned __int64 v36; // rdx
  _DWORD *v37; // rcx
  unsigned int v38; // eax
  int v39; // r9d
  __int64 v40; // r11
  unsigned int v41; // ecx
  int v42; // ecx
  struct DXGHWQUEUE *v43; // rcx
  struct DXGHWQUEUE **v44; // r9
  struct DXGHWQUEUE **v45; // rax
  struct DXGHWQUEUE **v46; // rcx
  struct DXGCONTEXT *v47; // rcx
  int v48; // r9d
  __int64 v49; // r9
  __int64 v50; // rbx
  unsigned int *v51; // rcx
  __int64 v52; // rbx
  unsigned int *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // edx
  __int64 v57; // rbx
  const wchar_t *v58; // r9
  struct DXGADAPTER *v59; // rcx
  __int64 v60; // r9
  __int64 v61; // rcx
  int v62; // eax
  int v63; // ebx
  __int64 v64; // rcx
  __int64 v65; // r8
  _BYTE *v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rcx
  struct DXGPROCESS *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // r8
  int v78; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v79; // [rsp+68h] [rbp-2D0h]
  unsigned __int64 v80; // [rsp+70h] [rbp-2C8h]
  int *v81; // [rsp+78h] [rbp-2C0h]
  char v82; // [rsp+80h] [rbp-2B8h]
  int AllocationInfo; // [rsp+88h] [rbp-2B0h] BYREF
  DXGCONTEXT *v84; // [rsp+90h] [rbp-2A8h] BYREF
  struct DXGADAPTER *v85; // [rsp+98h] [rbp-2A0h] BYREF
  unsigned int v86; // [rsp+A0h] [rbp-298h]
  struct DXGDEVICE *v87; // [rsp+A8h] [rbp-290h] BYREF
  _BYTE v88[16]; // [rsp+B0h] [rbp-288h] BYREF
  struct DXGPROCESS *Current; // [rsp+C0h] [rbp-278h]
  _BYTE v90[16]; // [rsp+C8h] [rbp-270h] BYREF
  unsigned __int64 v91; // [rsp+D8h] [rbp-260h]
  struct DXGHWQUEUE **v92[5]; // [rsp+E0h] [rbp-258h] BYREF
  unsigned int v93; // [rsp+108h] [rbp-230h]
  unsigned __int64 v94; // [rsp+110h] [rbp-228h] BYREF
  struct DXGCONTEXT **v95; // [rsp+118h] [rbp-220h] BYREF
  _BYTE v96[32]; // [rsp+120h] [rbp-218h] BYREF
  unsigned int v97; // [rsp+140h] [rbp-1F8h]
  unsigned __int64 v98; // [rsp+148h] [rbp-1F0h]
  struct DXGCONTEXT **v99; // [rsp+150h] [rbp-1E8h]
  char v100[8]; // [rsp+158h] [rbp-1E0h] BYREF
  __int64 v101; // [rsp+160h] [rbp-1D8h]
  char v102; // [rsp+168h] [rbp-1D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v103[2]; // [rsp+170h] [rbp-1C8h] BYREF
  ULONG64 v104; // [rsp+180h] [rbp-1B8h]
  _QWORD v105[6]; // [rsp+188h] [rbp-1B0h] BYREF
  char v106; // [rsp+1B8h] [rbp-180h]
  _BYTE v107[32]; // [rsp+1C0h] [rbp-178h] BYREF
  _BYTE v108[64]; // [rsp+1E0h] [rbp-158h] BYREF
  _BYTE v109[24]; // [rsp+220h] [rbp-118h] BYREF
  void *v110[3]; // [rsp+238h] [rbp-100h] BYREF
  unsigned int v111; // [rsp+250h] [rbp-E8h]
  _BYTE v112[24]; // [rsp+260h] [rbp-D8h] BYREF
  DXGADAPTER *v113; // [rsp+278h] [rbp-C0h]

  v104 = a1;
  v2 = -1073741811;
  AllocationInfo = -1073741811;
  Global = DXGGLOBAL::GetGlobal();
  v4 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 1136));
  v5 = (unsigned __int64)v4;
  if ( !v4 )
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for present parameters. Returing 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  memset(v4, 0, 0x5F8uLL);
  v94 = v5;
  v79 = 0LL;
  v78 = 2020;
  v81 = &AllocationInfo;
  v82 = 0;
  v80 = v5 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C013F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v5 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v7, 2020);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v78, 2020);
  Current = DXGPROCESS::GetCurrent(v8);
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v9);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v12 = PsGetCurrentProcess(v11);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting from unexpected process 0x%I64x, returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    v15 = v80;
    if ( !v82 )
      goto LABEL_112;
    if ( v80 )
      goto LABEL_110;
LABEL_115:
    if ( (qword_1C013F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v78);
    goto LABEL_201;
  }
  v110[0] = 0LL;
  v111 = 0;
  v92[0] = 0LL;
  v93 = 0;
  v16 = (const void *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v16 = (const void *)MmUserProbeAddress;
  memmove((void *)v5, v16, 0x5D8uLL);
  v17 = (unsigned int)(*(_DWORD *)(v5 + 92) + 1);
  v86 = v17;
  if ( (unsigned int)(v17 - 1) > 0x40 )
  {
    v75 = v86;
    WdLogSingleEntry1(2LL, v86);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"SubmitPresentToHwQueue passed a wrong number of broadcast contexts 0x%d",
      v75,
      0LL,
      0LL,
      0LL,
      0LL);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v92);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((__int64)v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    if ( v82 )
    {
      if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          *(_QWORD *)(v80 + 88),
          *(_QWORD *)(v80 + 80),
          *(_DWORD *)v80,
          *(_DWORD *)(v80 + 56),
          *(_QWORD *)(v80 + 80),
          *(_QWORD *)(v80 + 88),
          *(_DWORD *)(v80 + 1096),
          *v81);
    }
    else if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v80,
        v77,
        *(_DWORD *)v80,
        *(_QWORD *)(v80 + 8),
        *(_DWORD *)(v80 + 16),
        *(_DWORD *)(v80 + 84),
        *(_DWORD *)(v80 + 88),
        *v81,
        *(_DWORD *)(v80 + 20),
        *(_DWORD *)(v80 + 24));
    }
    if ( (qword_1C013F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v76, &EventProfilerExit, v77, v78);
    DxgkSubmitPresentToHwQueue_::_3_::ENSURE_DELETE::_ENSURE_DELETE((PVOID *)&v94);
    return 3221225485LL;
  }
  if ( !PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64 *)v110, v17)
    || !PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements((__int64 *)v92, v17) )
  {
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v92);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((__int64)v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    if ( v82 )
    {
      if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          *(_QWORD *)(v80 + 88),
          *(_QWORD *)(v80 + 80),
          *(_DWORD *)v80,
          *(_DWORD *)(v80 + 56),
          *(_QWORD *)(v80 + 80),
          *(_QWORD *)(v80 + 88),
          *(_DWORD *)(v80 + 1096),
          *v81);
    }
    else if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v80,
        v74,
        *(_DWORD *)v80,
        *(_QWORD *)(v80 + 8),
        *(_DWORD *)(v80 + 16),
        *(_DWORD *)(v80 + 84),
        *(_DWORD *)(v80 + 88),
        *v81,
        *(_DWORD *)(v80 + 20),
        *(_DWORD *)(v80 + 24));
    }
    if ( (qword_1C013F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v73, &EventProfilerExit, v74, v78);
    DxgkSubmitPresentToHwQueue_::_3_::ENSURE_DELETE::_ENSURE_DELETE((PVOID *)&v94);
    return 3221225495LL;
  }
  v98 = 0LL;
  v18 = (const void **)v104;
  if ( v104 >= MmUserProbeAddress )
    v18 = (const void **)MmUserProbeAddress;
  v19 = *v18;
  v98 = (unsigned __int64)v19;
  v20 = v110[0];
  v99 = (struct DXGCONTEXT **)v110[0];
  v91 = (unsigned int)v17;
  v21 = (ULONG64)v19 + 4 * v17;
  if ( v21 < (unsigned __int64)v19 || v21 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v20, v19, 4 * v17);
  v84 = 0LL;
  v22 = Current;
  if ( (*(_DWORD *)(v5 + 88) & 0x10000000) != 0 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v109, Current);
    v23 = (*(_DWORD *)(v5 + 1448) >> 6) & 0xFFFFFF;
    if ( v23 < *((_DWORD *)v22 + 74) )
    {
      v24 = *((_QWORD *)v22 + 35);
      v25 = *(_DWORD *)(v24 + 16LL * v23 + 8);
      if ( *(_DWORD *)(v5 + 1448) >> 30 == ((v25 >> 5) & 3) && (v25 & 0x2000) == 0 )
      {
        v26 = v25 & 0x1F;
        if ( v26 )
        {
          if ( v26 == 7 )
          {
            v27 = *(_QWORD *)(v24 + 16LL * v23);
            goto LABEL_28;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v27 = 0LL;
LABEL_28:
    v84 = (DXGCONTEXT *)v27;
    if ( !v27 )
    {
      DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v109);
      goto LABEL_144;
    }
    _m_prefetchw((const void *)(v27 + 32));
    v28 = *(_QWORD *)(v27 + 32);
    do
    {
      if ( !v28 )
        break;
      v29 = v28;
      v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 32), v28 + 1, v28);
    }
    while ( v29 != v28 );
    DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v109);
    v85 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v87, *(_DWORD *)v5, (struct _KTHREAD **)v22, &v85);
    if ( !v85 )
    {
      if ( v87 && _InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v87 + 2), v87);
      goto LABEL_144;
    }
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       v22,
                       v85,
                       *(_DWORD *)(v5 + 20),
                       (struct INDIRECT_RESOURCE_INFO *)(v5 + 1516));
    if ( AllocationInfo < 0 )
      WdLogSingleEntry1(3LL, *(unsigned int *)(v5 + 20));
    if ( v87 && _InterlockedExchangeAdd64((volatile signed __int64 *)v87 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v87 + 2), v87);
  }
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v88, *(_DWORD *)v110[0], v22, v92[0], 0);
  if ( !*v92[0] )
  {
    WdLogSingleEntry3(2LL, v22, *(unsigned int *)v110[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x failed with invalid hHwQueue 0x%I64x returning 0x%I64x",
      (__int64)v22,
      *(unsigned int *)v110[0],
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_143;
  }
  *(struct DXGHWQUEUE ***)(v5 + 1504) = v92[0];
  if ( (*(_DWORD *)(v5 + 88) & 0x10000000) != 0 )
    v30 = v84;
  else
    v30 = (DXGCONTEXT *)*((_QWORD *)*v92[0] + 2);
  v85 = v30;
  if ( *((_BYTE *)v30 + 442) && *(_DWORD *)(v5 + 92) )
  {
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v88);
    DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE((__int64 *)&v84);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v92);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((__int64)v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    if ( v82 )
    {
      if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v80,
          v32,
          *(_DWORD *)v80,
          *(_DWORD *)(v80 + 56),
          *(_QWORD *)(v80 + 80),
          *(_QWORD *)(v80 + 88),
          *(_DWORD *)(v80 + 1096),
          *v81);
    }
    else if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v80,
        v32,
        *(_DWORD *)v80,
        *(_QWORD *)(v80 + 8),
        *(_DWORD *)(v80 + 16),
        *(_DWORD *)(v80 + 84),
        *(_DWORD *)(v80 + 88),
        *v81,
        *(_DWORD *)(v80 + 20),
        *(_DWORD *)(v80 + 24));
    }
    if ( (qword_1C013F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v78);
    v2 = -1073741822;
LABEL_201:
    DxgkSubmitPresentToHwQueue_::_3_::ENSURE_DELETE::_ENSURE_DELETE((PVOID *)&v94);
    return (unsigned int)v2;
  }
  v33 = (struct DXGDEVICE *)*((_QWORD *)v30 + 2);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 2) + 16LL) + 2792LL) & 8) != 0 )
  {
    WdLogSingleEntry1(2LL, v30);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
      (__int64)v30,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_143;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90, v33);
  Pool2 = 0LL;
  v95 = 0LL;
  v97 = 0;
  if ( v86 <= 4 )
  {
    Pool2 = (struct DXGCONTEXT **)v96;
    v95 = (struct DXGCONTEXT **)v96;
    if ( v86 )
    {
      memset(v96, 0, 8 * v91);
      Pool2 = v95;
    }
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v91 < 8 )
      goto LABEL_69;
    Pool2 = (struct DXGCONTEXT **)ExAllocatePool2(256LL, 8 * v91, 1265072196LL);
    v95 = Pool2;
  }
  v97 = v86;
LABEL_69:
  if ( !Pool2 )
  {
    WdLogSingleEntry1(3LL, 2381LL);
LABEL_190:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v95);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v88);
    DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE((__int64 *)&v84);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v92);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((__int64)v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    if ( v82 )
    {
      if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v80,
          v72,
          *(_DWORD *)v80,
          *(_DWORD *)(v80 + 56),
          *(_QWORD *)(v80 + 80),
          *(_QWORD *)(v80 + 88),
          *(_DWORD *)(v80 + 1096),
          *v81);
    }
    else if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v80,
        v72,
        *(_DWORD *)v80,
        *(_QWORD *)(v80 + 8),
        *(_DWORD *)(v80 + 16),
        *(_DWORD *)(v80 + 84),
        *(_DWORD *)(v80 + 88),
        *v81,
        *(_DWORD *)(v80 + 20),
        *(_DWORD *)(v80 + 24));
    }
    if ( (qword_1C013F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v71, &EventProfilerExit, v72, v78);
    v2 = -1073741801;
    goto LABEL_201;
  }
  *Pool2 = v30;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v107, Current);
  v99 = v95;
  LODWORD(v91) = 0;
  if ( *(_DWORD *)(v5 + 92) )
  {
    v35 = 1;
    LODWORD(v87) = 1;
    while ( 1 )
    {
      v36 = v35;
      v98 = v35;
      if ( v35 >= v111 )
      {
        v37 = v110[0];
        v98 = v35;
      }
      else
      {
        v37 = (char *)v110[0] + 4 * v35;
      }
      v38 = (*v37 >> 6) & 0xFFFFFF;
      v39 = *v37 >> 30;
      if ( v38 >= *((_DWORD *)Current + 74) )
        goto LABEL_82;
      v40 = *((_QWORD *)Current + 35);
      v41 = *(_DWORD *)(v40 + 16LL * v38 + 8);
      if ( v39 != ((v41 >> 5) & 3) )
        goto LABEL_82;
      if ( (v41 & 0x2000) != 0 )
        goto LABEL_82;
      v42 = v41 & 0x1F;
      if ( !v42 )
        goto LABEL_82;
      if ( v42 != 15 )
        break;
      v43 = *(struct DXGHWQUEUE **)(v40 + 16LL * v38);
LABEL_83:
      if ( v35 >= v93 )
        v44 = v92[0];
      else
        v44 = &v92[0][v36];
      *v44 = v43;
      v45 = v92[0];
      v46 = &v92[0][v36];
      if ( v35 >= v93 )
        v46 = v92[0];
      if ( !*v46 )
      {
        if ( v35 >= v111 )
          v51 = (unsigned int *)v110[0];
        else
          v51 = (unsigned int *)((char *)v110[0] + 4 * v36);
        v52 = (unsigned int)(v91 + 1);
        WdLogSingleEntry2(2LL, *v51, v52);
        if ( (unsigned int)v52 >= v111 )
          v53 = (unsigned int *)v110[0];
        else
          v53 = (unsigned int *)((char *)v110[0] + 4 * v52);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkSubmitPresentToHwQueue failed with invalid HW queue handle 0x%x at index %d",
          *v53,
          (unsigned int)v52,
          0LL,
          0LL,
          0LL);
LABEL_108:
        DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v107);
LABEL_142:
        PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v95);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
LABEL_143:
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v88);
LABEL_144:
        DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE((__int64 *)&v84);
        PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v92);
        PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((__int64)v110);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
        v15 = v80;
        if ( !v82 )
        {
LABEL_112:
          if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
            McTemplateK0qpqqqqpp_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v15,
              v14,
              *(_DWORD *)v15,
              *(_QWORD *)(v15 + 8),
              *(_DWORD *)(v15 + 16),
              *(_DWORD *)(v15 + 84),
              *(_DWORD *)(v15 + 88),
              *v81,
              *(_DWORD *)(v15 + 20),
              *(_DWORD *)(v15 + 24));
          goto LABEL_115;
        }
        if ( !v80 )
          goto LABEL_115;
LABEL_110:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqxxqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v15,
            v14,
            *(_DWORD *)v15,
            *(_DWORD *)(v15 + 56),
            *(_QWORD *)(v15 + 80),
            *(_QWORD *)(v15 + 88),
            *(_DWORD *)(v15 + 1096),
            *v81);
        goto LABEL_115;
      }
      if ( v35 < v93 )
        v45 = &v92[0][v36];
      v95[v36] = (struct DXGCONTEXT *)*((_QWORD *)*v45 + 2);
      v47 = v95[v36];
      if ( !v47 || *((_QWORD *)v47 + 2) != *((_QWORD *)v30 + 2) )
      {
        v50 = (unsigned int)v91;
        WdLogSingleEntry4(
          2LL,
          v85,
          *(unsigned int *)(v5 + 4LL * (unsigned int)v91 + 96),
          (unsigned int)v91,
          -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v85,
          *(unsigned int *)(v5 + 4 * v50 + 96),
          v50,
          -1073741811LL,
          0LL);
        goto LABEL_108;
      }
      v48 = v91;
      if ( *((_DWORD *)v99[v36] + 100) <= *((_DWORD *)v99[(unsigned int)v91] + 100) )
      {
        WdLogSingleEntry1(2LL, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Context physical adapters must be in the increasing adapter ordinal order, returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_108;
      }
      LODWORD(v91) = v91 + 1;
      LODWORD(v87) = ++v35;
      if ( (unsigned int)(v48 + 1) >= *(_DWORD *)(v5 + 92) )
        goto LABEL_96;
    }
    WdLogSingleEntry1(2LL, 316LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
    v36 = v98;
    v35 = (unsigned int)v87;
LABEL_82:
    v43 = 0LL;
    goto LABEL_83;
  }
LABEL_96:
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v107);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v105,
    v95,
    v97,
    v49,
    1);
  if ( v106 )
  {
    if ( !v105[0] )
    {
      WdLogSingleEntry1(3LL, 2453LL);
LABEL_189:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v105);
      goto LABEL_190;
    }
    WdLogSingleEntry1(3LL, 2458LL);
LABEL_141:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v105);
    goto LABEL_142;
  }
  *(_QWORD *)(v5 + 1496) = v95;
  *(_BYTE *)(v5 + 1512) = 1;
  v85 = *(struct DXGADAPTER **)(*((_QWORD *)v30 + 2) + 1880LL);
  LODWORD(v87) = DXGCONTEXT::CopyPresentArgs(v30, (struct _D3DKMT_PRESENT *)v5, Current);
  AllocationInfo = (int)v87;
  if ( (int)v87 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v105);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v95);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v88);
    DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE((__int64 *)&v84);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v92);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((__int64)v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    if ( v82 )
    {
      if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v80,
          v55,
          *(_DWORD *)v80,
          *(_DWORD *)(v80 + 56),
          *(_QWORD *)(v80 + 80),
          *(_QWORD *)(v80 + 88),
          *(_DWORD *)(v80 + 1096),
          *v81);
    }
    else if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v80,
        v55,
        *(_DWORD *)v80,
        *(_QWORD *)(v80 + 8),
        *(_DWORD *)(v80 + 16),
        *(_DWORD *)(v80 + 84),
        *(_DWORD *)(v80 + 88),
        *v81,
        *(_DWORD *)(v80 + 20),
        *(_DWORD *)(v80 + 24));
    }
    if ( (qword_1C013F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v54, &EventProfilerExit, v55, v78);
    v2 = (int)v87;
    goto LABEL_201;
  }
  v56 = *(_DWORD *)(v5 + 88);
  if ( (v56 & 0x10000000) != 0 )
  {
    if ( !v85 )
    {
      v57 = 2479LL;
      WdLogSingleEntry1(2LL, 2479LL);
      v58 = L"Indirect Display present has to be on a context associated with Dod";
LABEL_140:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v58, v57, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_141;
    }
    if ( (*((_DWORD *)v85 + 109) & 0x100) == 0 )
    {
      v57 = 2485LL;
      WdLogSingleEntry1(2LL, 2485LL);
      v58 = L"Indirect Display present can only be used with a indirect display Dod driver";
      goto LABEL_140;
    }
    v59 = v85;
  }
  else
  {
    v59 = v85;
    if ( !v85 )
    {
LABEL_148:
      v59 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v30 + 2) + 16LL) + 16LL);
      goto LABEL_149;
    }
    if ( (*((_DWORD *)v85 + 109) & 0x100) != 0 && (v56 & 0x18000) == 0 )
    {
      v57 = 2495LL;
      WdLogSingleEntry1(2LL, 2495LL);
      v58 = L"No non-direct display presents can go to indirect display device";
      goto LABEL_140;
    }
  }
  if ( !v59 )
    goto LABEL_148;
LABEL_149:
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v108, *((const struct _DXGKWIN32KENG_INTERFACE *const *)Current + 11), v59);
  v101 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 2) + 16LL) + 16LL);
  v102 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v112, *((_QWORD *)v30 + 2), 2, v60, 0);
  v2 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v112, 0LL);
  AllocationInfo = v2;
  if ( v2 < 0 )
  {
LABEL_171:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v108);
    goto LABEL_141;
  }
  v61 = *(_QWORD *)(*((_QWORD *)v30 + 2) + 16LL);
  if ( (*(_DWORD *)(v5 + 88) & 0x200000) != 0 )
  {
    v62 = SubmitPresentHistoryTokenPreparation(
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v100,
            (struct COREDEVICEACCESS *)v112,
            *(struct DXGADAPTER **)(v61 + 16),
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 360),
            *(_QWORD *)(v5 + 352),
            (*(_DWORD *)(v5 + 88) & 0x10) != 0);
    AllocationInfo = v62;
    if ( v62 >= 0 )
    {
      v63 = SubmitPresentHistoryToken(
              (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 360),
              (struct COREDEVICEACCESS *)v112,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)v100,
              (struct CWin32kLocks *)v108,
              0,
              0LL,
              (struct DXGK_PRESENT_PARAMS *)v5,
              0LL,
              v30,
              0LL,
              0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, v62);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkSubmitPresentToHwQueue failed, SubmitPresentHistoryTokenPreparation returned 0x%I64x",
        AllocationInfo,
        0LL,
        0LL,
        0LL,
        0LL);
      v63 = AllocationInfo;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v108);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v105);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v95);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v88);
    DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE((__int64 *)&v84);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v92);
    PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((__int64)v110);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
    if ( v82 )
    {
      if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0qqxxqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v80,
          v65,
          *(_DWORD *)v80,
          *(_DWORD *)(v80 + 56),
          *(_QWORD *)(v80 + 80),
          *(_QWORD *)(v80 + 88),
          *(_DWORD *)(v80 + 1096),
          *v81);
    }
    else if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
    {
      McTemplateK0qpqqqqpp_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v80,
        v65,
        *(_DWORD *)v80,
        *(_QWORD *)(v80 + 8),
        *(_DWORD *)(v80 + 16),
        *(_DWORD *)(v80 + 84),
        *(_DWORD *)(v80 + 88),
        *v81,
        *(_DWORD *)(v80 + 20),
        *(_DWORD *)(v80 + 24));
    }
    if ( (qword_1C013F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v64, &EventProfilerExit, v65, v78);
    v2 = v63;
    goto LABEL_201;
  }
  v103[0] = 0LL;
  v103[1] = (struct VIDSCH_SUBMIT_DATA_BASE *)v61;
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v103);
  if ( !v103[0] )
  {
    WdLogSingleEntry1(6LL, 2555LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      2555LL,
      0LL,
      0LL,
      0LL,
      0LL);
    CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v103);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v108);
    goto LABEL_189;
  }
  AllocationInfo = DXGCONTEXT::Present(
                     v30,
                     (const struct DXGK_PRESENT_PARAMS *)v5,
                     (struct COREDEVICEACCESS *)v112,
                     (struct DXGADAPTERSTOPRESETLOCKSHARED *)v100,
                     (struct CWin32kLocks *)v108,
                     v95,
                     v103[0]);
  if ( AllocationInfo == -1071775482 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v113) )
    {
      v2 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v112, 0LL);
      if ( v2 < 0 )
      {
        CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v103);
        goto LABEL_171;
      }
    }
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v30 + 2), (struct COREDEVICEACCESS *)v112);
  }
  CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)v103);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v112);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v100);
  if ( AllocationInfo >= 0 )
  {
    v66 = (_BYTE *)(v104 + 1496);
    if ( v104 + 1496 >= MmUserProbeAddress )
      v66 = (_BYTE *)MmUserProbeAddress;
    *v66 = *(_BYTE *)(v5 + 1512);
  }
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v108);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v105);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v95);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v90);
  DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v88);
  DxgkSubmitPresentToHwQueue_::_3_::ENSURE_CONTEXT_DEREFERENCE::_ENSURE_CONTEXT_DEREFERENCE((__int64 *)&v84);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v92);
  PagedPoolZeroedArray<unsigned int,4>::~PagedPoolZeroedArray<unsigned int,4>((__int64)v110);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
  if ( v82 )
  {
    if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqxxqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v80,
        v68,
        *(_DWORD *)v80,
        *(_DWORD *)(v80 + 56),
        *(_QWORD *)(v80 + 80),
        *(_QWORD *)(v80 + 88),
        *(_DWORD *)(v80 + 1096),
        *v81);
  }
  else if ( v80 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80) != 0 )
  {
    McTemplateK0qpqqqqpp_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v80,
      v68,
      *(_DWORD *)v80,
      *(_QWORD *)(v80 + 8),
      *(_DWORD *)(v80 + 16),
      *(_DWORD *)(v80 + 84),
      *(_DWORD *)(v80 + 88),
      *v81,
      *(_DWORD *)(v80 + 20),
      *(_DWORD *)(v80 + 24));
  }
  if ( (qword_1C013F870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v67, &EventProfilerExit, v68, v78);
  DxgkSubmitPresentToHwQueue_::_3_::ENSURE_DELETE::_ENSURE_DELETE((PVOID *)&v94);
  v70 = DXGPROCESS::GetCurrent(v69);
  DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v70 + 8) + 104LL));
  return (unsigned int)AllocationInfo;
}
