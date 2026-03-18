/*
 * XREFs of ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C01CBEE0
 * Callers:
 *     DxgkCreateAllocation @ 0x1C01DAAC0 (DxgkCreateAllocation.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0379BF0 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0007B34 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007C60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000A958 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000A9D0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00164A0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C018BA78 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0197978 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0198020 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1C01A9020 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C01CD980 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01DE690 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C02D7EE0 (-GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEA.c)
 *     ?ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDALLOCATION@@_N@Z @ 0x1C02D8FDC (-ValidateStandardAllocationParams@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DKMT_CREATESTANDARDAL.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C031266C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C032A700 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCreateAllocationInternal(
        struct _D3DKMT_CREATEALLOCATION *a1,
        struct DXGALLOCATION **a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // r14
  struct DXGPROCESS *v8; // r15
  bool v9; // r14
  _D3DKMT_CREATEALLOCATION *v10; // rax
  struct DXGDEVICE *v11; // rbx
  char Flags; // al
  UINT NumAllocations; // edx
  __int64 v14; // rcx
  int v15; // r14d
  struct _KEVENT *v16; // r15
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  void *v23; // r12
  struct DXGDEVICE *v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rax
  OUTPUTDUPL_MGR *v27; // rcx
  DXGGLOBAL *v28; // rax
  __int64 v29; // rcx
  DXGSESSIONMGR *v30; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  enum _D3DKMDT_STANDARDALLOCATION_TYPE v33; // edx
  __int64 v34; // rax
  OUTPUTDUPL_MGR *v35; // rcx
  void *v36; // r14
  unsigned int v37; // eax
  unsigned int StandardAllocationDriverData; // ebx
  _DWORD *p_hResource; // rcx
  _DWORD *p_hGlobalShare; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS *p_Flags; // rcx
  char *v42; // rcx
  char *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // r14d
  __int64 v53; // rcx
  __int64 v54; // r8
  struct _KEVENT *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r8
  struct DXGDEVICE *v59; // rbx
  __int64 v60; // r8
  unsigned __int8 v61; // [rsp+80h] [rbp-218h]
  struct DXGDEVICE *v62; // [rsp+88h] [rbp-210h] BYREF
  struct DXGPROCESS *v63; // [rsp+90h] [rbp-208h]
  int v64; // [rsp+98h] [rbp-200h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-1F8h]
  char v66; // [rsp+A8h] [rbp-1F0h]
  void *v67; // [rsp+B0h] [rbp-1E8h]
  struct DXGDEVICE *v68; // [rsp+B8h] [rbp-1E0h] BYREF
  struct DXGALLOCATION **v69; // [rsp+C0h] [rbp-1D8h]
  struct DXGRESOURCE *v70; // [rsp+C8h] [rbp-1D0h]
  unsigned int v71[4]; // [rsp+D0h] [rbp-1C8h] BYREF
  _D3DKMT_CREATEALLOCATION v72; // [rsp+E0h] [rbp-1B8h] BYREF
  void *v73; // [rsp+130h] [rbp-168h] BYREF
  struct DXGDEVICE *v74; // [rsp+138h] [rbp-160h] BYREF
  int v75; // [rsp+140h] [rbp-158h]
  __int64 v76; // [rsp+148h] [rbp-150h] BYREF
  struct DXGADAPTER *v77; // [rsp+150h] [rbp-148h]
  char v78; // [rsp+158h] [rbp-140h]
  _QWORD v79[3]; // [rsp+160h] [rbp-138h] BYREF
  int Size; // [rsp+190h] [rbp-108h] BYREF
  __int64 v81; // [rsp+194h] [rbp-104h]
  int v82; // [rsp+19Ch] [rbp-FCh]
  __int64 v83; // [rsp+1A0h] [rbp-F8h]
  struct _D3DKMT_CREATESTANDARDALLOCATION v84; // [rsp+1A8h] [rbp-F0h] BYREF
  _BYTE v85[8]; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE v86[16]; // [rsp+1C8h] [rbp-D0h] BYREF
  DXGADAPTER *v87; // [rsp+1D8h] [rbp-C0h]
  char v88; // [rsp+1E0h] [rbp-B8h]
  __int64 v89; // [rsp+1E8h] [rbp-B0h]
  _BYTE v90[16]; // [rsp+208h] [rbp-90h] BYREF
  __int64 v91; // [rsp+218h] [rbp-80h]
  __int64 v92; // [rsp+248h] [rbp-50h]
  char v93; // [rsp+250h] [rbp-48h]

  v69 = a2;
  v64 = -1;
  v65 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v66 = 1;
    v64 = 2003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2003);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v64, 2003);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v8 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    v63 = v8;
    if ( v8 )
      goto LABEL_6;
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v8 = v7;
    v63 = v7;
    goto LABEL_6;
  }
  v8 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  v63 = v8;
  if ( !v8 )
    goto LABEL_5;
LABEL_6:
  v70 = v8;
  v9 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v61 = v9;
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  memset(&v72, 0, sizeof(v72));
  memset(&v84, 0, sizeof(v84));
  if ( v9 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (_D3DKMT_CREATEALLOCATION *)MmUserProbeAddress;
    v72 = *v10;
  }
  else
  {
    v72 = *a1;
  }
  v68 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v62, v72.hDevice, (struct _KTHREAD **)v8, &v68);
  v11 = v68;
  if ( !v68 )
  {
    WdLogSingleEntry2(2LL, v72.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v72.hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  Flags = (char)v72.Flags;
  if ( (*(_DWORD *)&v72.Flags & 0x100000) != 0 )
  {
    if ( (*(_DWORD *)&v72.Flags & 0x10000) != 0 )
    {
      WdLogSingleEntry1(2LL, 8955LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NoKmdAccess cannot be used with StandardAllocation",
        8955LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
      if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_197;
    }
    if ( !g_OSTestSigningEnabled )
    {
      WdLogSingleEntry1(2LL, 8960LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NoKmdAccess can be used only with testsigning",
        8960LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
      if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_197;
    }
  }
  NumAllocations = v72.NumAllocations;
  if ( v72.NumAllocations > 0x682AA )
  {
    WdLogSingleEntry3(3LL, v68, v72.NumAllocations, -1073741811LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  if ( (*((_DWORD *)v8 + 106) & 0x100) == 0
    && ((*(_BYTE *)&v72.Flags & 8) != 0
     || (*(_WORD *)&v72.Flags & 0x100) != 0
     || (*(_WORD *)&v72.Flags & 0x1000) != 0
     || (*(_WORD *)&v72.Flags & 0x200) != 0) )
  {
    WdLogSingleEntry2(3LL, v68, -1073741811LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  if ( (*(_BYTE *)&v72.Flags & 0x20) != 0
    && (*(_DWORD *)&v72.Flags & 0x10000) == 0
    && (*((_DWORD *)v8 + 106) & 0x100) == 0 )
  {
    WdLogSingleEntry2(3LL, v68, -1073741811LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  if ( (*(_DWORD *)&v72.Flags & 0x20000) != 0 )
  {
    if ( (*(_DWORD *)&v72.Flags & 0x10000) == 0 )
    {
      WdLogSingleEntry2(3LL, v68, -1073741811LL);
      if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
      if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_197;
    }
  }
  else if ( (*(_DWORD *)&v72.Flags & 0x10000) == 0 )
  {
    goto LABEL_22;
  }
  v52 = ValidateStandardAllocationParams(&v72, &v84, v9);
  if ( v52 < 0 )
  {
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v64);
    return (unsigned int)v52;
  }
  Flags = (char)v72.Flags;
  NumAllocations = v72.NumAllocations;
LABEL_22:
  if ( (Flags & 2) != 0 && (Flags & 1) == 0 )
  {
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  if ( !v72.hResource && !NumAllocations )
  {
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_197;
  }
  v74 = v11;
  v14 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
  if ( *(int *)(v14 + 2552) >= 0x2000 || *(_BYTE *)(v14 + 2852) )
  {
    v15 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 340);
    v75 = v15;
  }
  else
  {
    v15 = 0;
    v75 = 0;
  }
  v16 = (struct _KEVENT *)*((_QWORD *)v11 + 2);
  if ( *((_DWORD *)v11 + 116) == 2 )
  {
    if ( KeReadStateEvent(v16 + 5) )
      goto LABEL_29;
    v55 = v16 + 5;
  }
  else
  {
    if ( KeReadStateEvent(v16 + 4) )
      goto LABEL_29;
    v55 = v16 + 4;
  }
  KeWaitForSingleObject(v55, Executive, 0, 0, 0LL);
LABEL_29:
  KeEnterCriticalRegion();
  if ( v15 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v11 + 144, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 40);
      v17 = 1;
    }
    else
    {
      KeLeaveCriticalRegion();
      v17 = 0;
    }
    if ( !v17 )
    {
      KeEnterCriticalRegion();
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
      DXGPUSHLOCK::AcquireShared((struct DXGDEVICE *)((char *)v11 + 144));
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v56, &EventBlockThread, v57, 40);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v11 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL));
  }
  v18 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
  v77 = (struct DXGADAPTER *)v18;
  _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
  v76 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v18 + 136, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 152));
  v78 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v85, (__int64)v68, 2, v19, 0);
  if ( v93 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v90, 0LL);
    if ( *(_DWORD *)(v91 + 200) != 1 )
    {
LABEL_174:
      COREACCESS::Release((COREACCESS *)v90);
LABEL_175:
      WdLogSingleEntry2(3LL, v68, -1073741130LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v76);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v74);
      if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
      if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v58, v64);
      return 3221226166LL;
    }
  }
  if ( v88 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v86, 0LL, 0LL);
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v87 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v87 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventBlockThread, v21, 72);
      KeWaitForSingleObject((char *)v87 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v87, 0LL);
  }
  v89 = 0LL;
  v88 = 1;
  if ( *(_DWORD *)(v92 + 608) != 1 )
  {
    COREACCESS::Release((COREACCESS *)v86);
    if ( !v93 )
      goto LABEL_175;
    goto LABEL_174;
  }
  v22 = 8LL * v72.NumAllocations;
  if ( !is_mul_ok(v72.NumAllocations, 8uLL) )
    v22 = -1LL;
  v23 = (void *)operator new[](v22, 0x4B677844u, 256LL);
  v67 = v23;
  if ( v23 )
  {
    v24 = v68;
    v25 = *((_QWORD *)v68 + 235);
    if ( !v25 )
    {
      v25 = *(_QWORD *)(*((_QWORD *)v68 + 2) + 16LL);
      if ( !v25 )
      {
        WdLogSingleEntry1(1LL, 11147LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11147LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v26 = *(_QWORD *)(v25 + 2920);
    if ( !v26
      || (v27 = *(OUTPUTDUPL_MGR **)(v26 + 120)) == 0LL
      || (int)lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_(v27, v24) >= 0 )
    {
      v79[0] = *(_QWORD *)(v25 + 404);
      v79[1] = lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_;
      v79[2] = v24;
      v28 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
        v28,
        lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_,
        v79);
    }
    v30 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( v30
      && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v29),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                              v30,
                                              CurrentProcessSessionId)) != 0LL) )
    {
      v34 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
      if ( v34 )
      {
        v35 = *(OUTPUTDUPL_MGR **)(v34 + 120);
        if ( v35 )
          OUTPUTDUPL_MGR::CleanUpPendingList(v35, v24);
      }
      else
      {
        WdLogSingleEntry1(2LL, 3909LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"OUTPUTDUPL_SESSION_MGR is NULL",
          3909LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 3902LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"DXGSESSIONDATA is NULL", 3902LL, 0LL, 0LL, 0LL, 0LL);
    }
    v72.hGlobalShare = 0;
    v72.hDevice = 0;
    v36 = 0LL;
    v73 = 0LL;
    v37 = 0;
    v71[0] = 0;
    if ( (*(_DWORD *)&v72.Flags & 0x10000) == 0 )
      goto LABEL_55;
    if ( *(int *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 2820LL) >= 2000 )
    {
      v83 = 0LL;
      Size = v84.ExistingHeapData.Size;
      v81 = 1LL;
      v82 = 7;
      StandardAllocationDriverData = DXGDEVICE::GetStandardAllocationDriverData(v24, v33, &Size, v71, &v73);
      if ( (StandardAllocationDriverData & 0x80000000) != 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v76);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v74);
        if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
        if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return StandardAllocationDriverData;
LABEL_210:
        McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v64);
        return StandardAllocationDriverData;
      }
      v36 = v73;
      v37 = v71[0];
LABEL_55:
      StandardAllocationDriverData = DXGDEVICE::CreateAllocation(
                                       v24,
                                       &v72,
                                       v61,
                                       0,
                                       0LL,
                                       0LL,
                                       (struct COREDEVICEACCESS *)v85,
                                       0,
                                       0LL,
                                       0LL,
                                       0LL,
                                       (unsigned __int64 *)v69,
                                       &v84,
                                       v36,
                                       v37);
      if ( v61 )
      {
        p_hResource = &a1->hResource;
        if ( (unsigned __int64)&a1->hResource >= MmUserProbeAddress )
          p_hResource = (_DWORD *)MmUserProbeAddress;
        *p_hResource = v72.hResource;
        p_hGlobalShare = &a1->hGlobalShare;
        if ( (unsigned __int64)&a1->hGlobalShare >= MmUserProbeAddress )
          p_hGlobalShare = (_DWORD *)MmUserProbeAddress;
        *p_hGlobalShare = v72.hGlobalShare;
        p_Flags = &a1->Flags;
        if ( (unsigned __int64)&a1->Flags >= MmUserProbeAddress )
          p_Flags = (D3DKMT_CREATEALLOCATIONFLAGS *)MmUserProbeAddress;
        *p_Flags = v72.Flags;
      }
      else
      {
        a1->hResource = v72.hResource;
        a1->hGlobalShare = v72.hGlobalShare;
        a1->Flags = v72.Flags;
      }
      operator delete(v23);
      operator delete(v36);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
      v42 = (char *)v77 + 136;
      _InterlockedDecrement((volatile signed __int32 *)v77 + 38);
      ExReleasePushLockSharedEx(v42, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v77 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v77 + 2), v77);
      if ( v75 )
      {
        v43 = (char *)v68 + 144;
        _InterlockedDecrement((volatile signed __int32 *)v68 + 40);
        ExReleasePushLockSharedEx(v43, 0LL);
      }
      else
      {
        ExReleaseResourceLite(*((PERESOURCE *)v68 + 17));
      }
      KeLeaveCriticalRegion();
      if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
      if ( !v66 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return StandardAllocationDriverData;
      goto LABEL_210;
    }
    WdLogSingleEntry2(2LL, v24, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%I64x: Creating StandardAllocation only supported on WDDM2.0+, returning 0x%I64x",
      (__int64)v24,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v76);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v74);
    if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
    if ( !v66 )
      return 3221225485LL;
    v50 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_197:
    McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v64);
    return 3221225485LL;
  }
  v59 = v68;
  WdLogSingleEntry3(6LL, v68, v72.NumAllocations, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Device 0x%I64x: Out of memory allocating destroy handle table with 0x%I64x elements, returning 0x%I64x",
    (__int64)v59,
    v72.NumAllocations,
    -1073741801LL,
    0LL,
    0LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v85);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v76);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v74);
  if ( v62 && _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v60, v64);
  return 3221225495LL;
}
