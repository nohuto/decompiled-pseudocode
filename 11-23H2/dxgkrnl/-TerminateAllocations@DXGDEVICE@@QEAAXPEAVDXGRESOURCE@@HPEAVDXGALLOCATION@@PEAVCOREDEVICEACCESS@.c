/*
 * XREFs of ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01B9800
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01B8EF0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01DE690 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0003E88 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004D78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0007B34 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000A958 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000A9D0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00164A0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0024D54 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     Feature_41457977__private_IsEnabledDeviceUsage @ 0x1C0024DC0 (Feature_41457977__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C018AB64 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C018AD20 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01B7900 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C01BA410 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C01BA4E0 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C01BA770 (-DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01CA0D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB6E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01CB910 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C01D9FF8 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C02ECB20 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::TerminateAllocations(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        struct DXGALLOCATION *a4,
        struct COREDEVICEACCESS *a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  DXGDEVICE *v7; // r14
  BOOL v8; // ebp
  __int64 v11; // r15
  BOOL v12; // esi
  struct DXGALLOCATION *v13; // rdi
  int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v20; // r15
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v23; // r14
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v25; // rax
  struct _ETHREAD *v26; // rdi
  KSPIN_LOCK *Global; // rax
  DXGDEVICE *v28; // r14
  void *v29; // rcx
  __int64 v30; // rcx
  struct DXGALLOCATION *v31; // r9
  __int64 v32; // rsi
  char v33; // r12
  struct DXGPROCESS *v34; // r14
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // r9d
  unsigned int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // r9
  int v41; // edx
  char v42; // bp
  __int64 v43; // rcx
  struct _KTHREAD **v44; // rcx
  __int64 v45; // rbp
  unsigned int v46; // edx
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rax
  struct DXGPROCESS *v50; // rsi
  struct DXGTHREAD *v51; // rax
  struct DXGPROCESS *v52; // rdi
  struct _ETHREAD *v53; // rdi
  KSPIN_LOCK *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // r9d
  char v58; // si
  __int64 v59; // rcx
  struct _KTHREAD **v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // r9d
  __int64 v67; // [rsp+50h] [rbp-68h]
  struct DXGTERMINATIONTRACKER *v68; // [rsp+58h] [rbp-60h]
  _BYTE v69[88]; // [rsp+60h] [rbp-58h] BYREF
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v72; // [rsp+E8h] [rbp+30h]

  v7 = this;
  v67 = 0LL;
  v8 = (*(_BYTE *)&a6.0 & 2) == 0;
  v72.0 = 0;
  v11 = 0LL;
  v12 = *((_DWORD *)this + 116) == 2;
  v13 = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(*((_QWORD *)v13 + 6) + 4LL);
      if ( (v14 & 0x2B) != 0 )
        break;
      if ( (*((_DWORD *)v13 + 18) & 0x800) != 0 )
        break;
      if ( (v14 & 0x20000800) != 0 )
        break;
      v15 = *((_QWORD *)v7 + 2);
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 16) + 209LL) )
        break;
      v16 = *((_QWORD *)v13 + 3);
      if ( !v16 )
        break;
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v15 + 760) + 8LL) + 624LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 768LL),
              v16,
              0LL);
      if ( !v17 )
      {
        WdLogSingleEntry1(1LL, 983LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IndividualAllocationSize > 0", 983LL, 0LL, 0LL, 0LL, 0LL);
      }
      v11 += v17;
      v7 = this;
      v67 = v11;
      *(_DWORD *)&v72.0 += (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                  + 760LL)
                                                                                      + 8LL)
                                                                          + 640LL))(
                             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 16LL) + 768LL),
                             *((_QWORD *)v13 + 3));
      if ( v12
        && (*(_BYTE *)&a6.0 & 1) == 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                         + 8LL)
                                                             + 600LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
             *((_QWORD *)v13 + 3)) )
      {
        v12 = 0;
      }
      v13 = (struct DXGALLOCATION *)*((_QWORD *)v13 + 8);
      if ( !v13 )
        goto LABEL_14;
    }
    v8 = 0;
  }
LABEL_14:
  if ( a3 )
    DXGDEVICE::RemoveResourceFromDeviceList(v7, a2);
  if ( !v8 || v12 || (!a3 || !*((_QWORD *)a2 + 3)) && a2 )
    goto LABEL_128;
  v18 = *((_QWORD *)v7 + 2);
  v68 = (struct DXGTERMINATIONTRACKER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v18 + 1536));
  if ( !v68 )
  {
    WdLogSingleEntry1(6LL, 4771LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for deferred allocation tracker, destroying allocation synchronously.",
      4771LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_128:
    if ( a3 )
      DXGDEVICE::DestroyResource(this, (struct DXGALLOCATION **)a2, a5, a6);
    else
      DXGDEVICE::DestroyAllocations(this, a2, 0, a4, a5, a6);
    return;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v18 + 1392, 0LL);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v18 + 1400) = CurrentThread;
  v20 = *(_QWORD *)(v18 + 1376) + v11;
  CurrentProcess = PsGetCurrentProcess(CurrentThread);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v23 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_30;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    v26 = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v25 = DXGGLOBAL::SearchDxgThreadList(Global, v26);
    if ( v25 )
      goto LABEL_31;
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_30;
  }
  v25 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v25 )
LABEL_30:
    v25 = v23;
LABEL_31:
  if ( (*((_DWORD *)v25 + 106) & 4) == 0 && v20 > *((_QWORD *)DXGGLOBAL::GetGlobal() + 110)
    || v20 < *(_QWORD *)(v18 + 1376) )
  {
    *(_QWORD *)(v18 + 1400) = 0LL;
    ExReleasePushLockExclusiveEx(v18 + 1392, 0LL);
    KeLeaveCriticalRegion();
    WdLogSingleEntry1(4LL, 4762LL);
    ADAPTER_RENDER::DeleteTerminationTracker((ADAPTER_RENDER *)v18, v68);
    goto LABEL_128;
  }
  *(_QWORD *)(v18 + 1376) = v20;
  *(_QWORD *)(v18 + 1400) = 0LL;
  ExReleasePushLockExclusiveEx(v18 + 1392, 0LL);
  KeLeaveCriticalRegion();
  v28 = this;
  *(_QWORD *)v68 = a2;
  *((_QWORD *)v68 + 1) = a4;
  v29 = *(void **)(*((_QWORD *)this + 5) + 56LL);
  *((_QWORD *)v68 + 5) = v67;
  *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v68 + 8) = v72;
  *((_QWORD *)v68 + 2) = v29;
  *((_QWORD *)v68 + 3) = this;
  *((struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v68 + 12) = a6;
  ObfReferenceObject(v29);
  v32 = *(_QWORD *)v68;
  v33 = 0;
  if ( !*(_QWORD *)v68 )
    goto LABEL_66;
  v34 = DXGPROCESS::GetCurrent(v30);
  if ( (unsigned int)Feature_41457977__private_IsEnabledDeviceUsage() )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v69, v34);
    v38 = *(_DWORD *)(v32 + 16);
    v39 = (v38 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v39 < *((_DWORD *)v34 + 74) )
    {
      v40 = *((_QWORD *)v34 + 35);
      v41 = *(_DWORD *)(v40 + 16 * v39 + 8);
      if ( ((v38 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x60) && (v41 & 0x2000) == 0 && (v41 & 0x1F) != 0 )
        *(_DWORD *)(v40 + 16LL * ((v38 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DxgkUnreferenceDxgResource((struct _EX_RUNDOWN_REF *)v32);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v69);
  }
  else
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v34 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v37 = *((_DWORD *)v34 + 68);
        if ( v37 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v35, &EventBlockThread, v36, v37);
      }
      ExAcquirePushLockExclusiveEx((char *)v34 + 248, 0LL);
    }
    *((_QWORD *)v34 + 32) = KeGetCurrentThread();
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v34 + 280), *(_DWORD *)(v32 + 16));
    DxgkUnreferenceDxgResource((struct _EX_RUNDOWN_REF *)v32);
    *((_QWORD *)v34 + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v34 + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  v42 = 0;
  if ( !a5 )
    goto LABEL_59;
  v43 = *((_QWORD *)a5 + 3);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v43 + 184) )
  {
    if ( !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v43 + 168)) )
    {
      v42 = 1;
      if ( !*((_BYTE *)a5 + 32) )
        WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a5 + 8, 0LL, 0LL);
      v44 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
      *((_BYTE *)a5 + 32) = 0;
      if ( KeGetCurrentThread() != v44[23] )
        DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v44, *((char **)a5 + 5));
      *((_QWORD *)a5 + 5) = 0LL;
      if ( *((_BYTE *)a5 + 144) )
      {
        COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v32 + 72));
        goto LABEL_60;
      }
    }
LABEL_59:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v32 + 72));
    if ( !v42 )
      goto LABEL_63;
LABEL_60:
    if ( *((_BYTE *)a5 + 144) )
      COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 72), 0LL);
    COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 8), 0LL);
    goto LABEL_63;
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v32 + 72));
LABEL_63:
  if ( (unsigned int)Feature_41457977__private_IsEnabledDeviceUsage() )
    DXGPROCESS::FreeResourceHandleNoRefSafe(v34, *(_DWORD *)(v32 + 16));
  v28 = this;
LABEL_66:
  v45 = *((_QWORD *)v68 + 1);
  if ( v45 )
  {
    while ( 1 )
    {
      v46 = *(_DWORD *)(*(_QWORD *)(v45 + 48) + 4LL);
      if ( (v46 & 0x2000) != 0 && *(_QWORD *)(v45 + 24) )
        DXGDEVICE::RemoveDirectFlipAllocationFromList(v28, (v46 >> 6) & 0xF, (struct DXGALLOCATION *)v45);
      v47 = *(_DWORD *)(*(_QWORD *)(v45 + 48) + 4LL);
      if ( (v47 & 0x200B) != 0 )
        DXGDEVICE::TestAndSetDisplayedPrimary(v28, (v47 >> 6) & 0xF, (const struct DXGALLOCATION *)v45, v31);
      v48 = PsGetCurrentProcess(v30);
      v49 = PsGetProcessDxgProcess(v48);
      v50 = (struct DXGPROCESS *)v49;
      if ( v49 && (*(_DWORD *)(v49 + 424) & 0x80) == 0 )
        goto LABEL_79;
      v51 = DXGTHREAD::GetCurrent();
      if ( !v51 )
        break;
      v52 = (struct DXGPROCESS *)*((_QWORD *)v51 + 3);
      if ( !v52 )
        goto LABEL_79;
LABEL_80:
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v52 + 248, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v57 = *((_DWORD *)v52 + 68);
          if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v55, &EventBlockThread, v56, v57);
        }
        ExAcquirePushLockExclusiveEx((char *)v52 + 248, 0LL);
      }
      *((_QWORD *)v52 + 32) = KeGetCurrentThread();
      HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v52 + 280), *(_DWORD *)(v45 + 16));
      DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v45);
      *((_QWORD *)v52 + 32) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v52 + 248, 0LL);
      KeLeaveCriticalRegion();
      v58 = 0;
      if ( a5 )
      {
        v59 = *((_QWORD *)a5 + 3);
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v59 + 184) )
        {
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v45 + 88));
          goto LABEL_109;
        }
        if ( !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v59 + 168)) )
        {
          v58 = 1;
          if ( !*((_BYTE *)a5 + 32) )
            WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a5 + 8, 0LL, 0LL);
          v60 = (struct _KTHREAD **)*((_QWORD *)a5 + 3);
          *((_BYTE *)a5 + 32) = 0;
          if ( KeGetCurrentThread() != v60[23] )
            DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v60, *((char **)a5 + 5));
          *((_QWORD *)a5 + 5) = 0LL;
          if ( *((_BYTE *)a5 + 144) )
          {
            COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a5 + 72));
            ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v45 + 88));
LABEL_97:
            if ( *((_BYTE *)a5 + 144) )
              COREACCESS::AcquireShared((struct COREDEVICEACCESS *)((char *)a5 + 72), 0LL);
            if ( *((_BYTE *)a5 + 32) )
              WdLogSingleEntry5(0LL, 275LL, 4LL, (char *)a5 + 8, 0LL, 0LL);
            v30 = *((_QWORD *)a5 + 3);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v30 + 184) )
            {
              if ( !KeReadStateEvent((PRKEVENT)(v30 + 48)) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v61, &EventBlockThread, v62, 72);
                KeWaitForSingleObject((PVOID)(*((_QWORD *)a5 + 3) + 48LL), Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(*((DXGADAPTER **)a5 + 3), 0LL);
            }
            *((_QWORD *)a5 + 5) = 0LL;
            *((_BYTE *)a5 + 32) = 1;
            goto LABEL_109;
          }
        }
      }
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v45 + 88));
      if ( v58 )
        goto LABEL_97;
LABEL_109:
      v63 = *(_QWORD *)(v45 + 64);
      if ( *(_QWORD *)(v45 + 24) )
      {
        if ( !v33 )
        {
          v33 = 1;
          if ( v28 != (DXGDEVICE *)-176LL && *((struct _KTHREAD **)v28 + 23) == KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 1453LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
              1453LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v28 + 176, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v66 = *((_DWORD *)v28 + 50);
              if ( v66 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v64, &EventBlockThread, v65, v66);
            }
            ExAcquirePushLockExclusiveEx((char *)v28 + 176, 0LL);
          }
          *((_QWORD *)v28 + 23) = KeGetCurrentThread();
          if ( ++*((_DWORD *)v28 + 476) == 1 )
            KeClearEvent(*((PRKEVENT *)v28 + 239));
          *((_QWORD *)v28 + 23) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v28 + 176, 0LL);
          KeLeaveCriticalRegion();
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, struct DXGTERMINATIONTRACKER *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v28 + 2) + 760LL) + 8LL)
                                                                                               + 136LL))(
          *(_QWORD *)(*((_QWORD *)v28 + 2) + 768LL),
          *(_QWORD *)(v45 + 24),
          (*(_DWORD *)(*(_QWORD *)(v45 + 48) + 4LL) >> 6) & 0xF,
          a6.Value,
          v68);
      }
      v45 = v63;
      if ( !v63 )
        return;
    }
    v53 = KeGetCurrentThread();
    v54 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v52 = DXGGLOBAL::SearchDxgThreadList(v54, v53);
    if ( v52 )
      goto LABEL_80;
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_79:
    v52 = v50;
    goto LABEL_80;
  }
}
