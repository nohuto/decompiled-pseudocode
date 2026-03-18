/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C0184500
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016E850 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C016ED94 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0184AE0 (-DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCAT.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddCreateAllocation(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *a11,
        _DWORD *a12,
        _QWORD *a13,
        _DWORD *a14)
{
  char v14; // bl
  __int64 v15; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  char *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // edx
  __int64 v28; // rsi
  struct _KEVENT *v29; // rdi
  __int64 v30; // r13
  volatile signed __int64 *v31; // rcx
  volatile signed __int64 *v32; // rcx
  int v33; // eax
  int StandardAllocation; // r14d
  int v35; // eax
  unsigned int v36; // r15d
  int v37; // ebx
  int v38; // ebx
  unsigned int v39; // edi
  int v40; // eax
  unsigned int v41; // ebx
  struct DXGADAPTER *v42; // rcx
  struct DXGADAPTER *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 CurrentProcess; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  int v56; // r9d
  int v57; // eax
  int v60; // [rsp+68h] [rbp-98h] BYREF
  __int64 v61; // [rsp+70h] [rbp-90h]
  char v62; // [rsp+78h] [rbp-88h]
  __int64 v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  _QWORD v66[54]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v67; // [rsp+250h] [rbp+150h] BYREF
  int v68; // [rsp+258h] [rbp+158h]
  int v69; // [rsp+25Ch] [rbp+15Ch]
  _QWORD *v70; // [rsp+260h] [rbp+160h] BYREF
  int v71; // [rsp+268h] [rbp+168h]
  int v72; // [rsp+26Ch] [rbp+16Ch]
  _DWORD v73[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v74; // [rsp+280h] [rbp+180h]
  _BYTE v75[8]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v76[8]; // [rsp+298h] [rbp+198h] BYREF
  __int64 v77; // [rsp+2A0h] [rbp+1A0h]
  struct DXGADAPTER *v78; // [rsp+2A8h] [rbp+1A8h]
  char v79; // [rsp+2B0h] [rbp+1B0h]
  __int64 v80; // [rsp+2B8h] [rbp+1B8h]
  _BYTE v81[8]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v82; // [rsp+2E0h] [rbp+1E0h]
  struct DXGADAPTER *v83; // [rsp+2E8h] [rbp+1E8h]
  char v84; // [rsp+2F0h] [rbp+1F0h]
  __int64 v85; // [rsp+2F8h] [rbp+1F8h]
  __int64 v86; // [rsp+318h] [rbp+218h]
  char v87; // [rsp+320h] [rbp+220h]

  v60 = -1;
  v14 = a3;
  v64 = a7;
  v65 = a8;
  v63 = a9;
  v67 = a12;
  v70 = a13;
  v15 = (unsigned int)a1;
  v61 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v62 = 1;
    v60 = 3017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3017);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v60, 3017);
  Current = DXGPROCESS::GetCurrent();
  v21 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v18, v17, v19, v20);
    v39 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v55 = PsGetCurrentProcess(v52, v51, v53, v54);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v55,
      0LL,
      0LL,
      0LL);
    goto LABEL_52;
  }
  v22 = (char *)Current + 248;
  if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1425LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1425LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v22, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v56 = *((_DWORD *)v22 + 6);
      if ( v56 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, (const EVENT_DESCRIPTOR *)"g", v24, v56);
    }
    ExAcquirePushLockSharedEx(v22, 0LL);
  }
  v25 = ((unsigned int)v15 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v25 >= *(_DWORD *)(v21 + 296) )
    goto LABEL_54;
  v26 = *(_QWORD *)(v21 + 280);
  v27 = *(_DWORD *)(v26 + 16 * v25 + 8);
  if ( (((unsigned int)v15 >> 25) & 0x60) != (*(_BYTE *)(v26 + 16 * v25 + 8) & 0x60)
    || (v27 & 0x2000) != 0
    || (v27 & 0x1F) == 0 )
  {
    goto LABEL_54;
  }
  if ( (v27 & 0x1F) != 3 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_54:
    v28 = 0LL;
    goto LABEL_15;
  }
  v28 = *(_QWORD *)(v26 + 16LL * (unsigned int)v25);
  if ( v28 )
    _InterlockedIncrement64((volatile signed __int64 *)(v28 + 64));
LABEL_15:
  ExReleasePushLockSharedEx(v22, 0LL);
  KeLeaveCriticalRegion();
  if ( !v28 )
  {
    v39 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v15, v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
      -1073741811LL,
      v15,
      v21,
      0LL,
      0LL);
    goto LABEL_52;
  }
  v29 = *(struct _KEVENT **)(v28 + 16);
  if ( !KeReadStateEvent(v29 + 5) )
    KeWaitForSingleObject(&v29[5], Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 136), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v48, (const EVENT_DESCRIPTOR *)"g", v49, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 136), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
  }
  v30 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v30 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v30 + 136, 0LL);
  v31 = *(volatile signed __int64 **)(*(_QWORD *)(v28 + 16) + 16LL);
  v78 = (struct DXGADAPTER *)v31;
  v79 = 0;
  v80 = 0LL;
  if ( v31 )
  {
    _InterlockedIncrement64(v31 + 3);
    v77 = -1LL;
  }
  v32 = *(volatile signed __int64 **)(*(_QWORD *)(v28 + 16) + 16LL);
  v83 = (struct DXGADAPTER *)v32;
  v84 = 0;
  v85 = 0LL;
  if ( v32 )
  {
    _InterlockedIncrement64(v32 + 3);
    v82 = -1LL;
  }
  v86 = v28;
  v87 = 0;
  v33 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v75, 0LL);
  StandardAllocation = v33;
  if ( v33 >= 0 )
  {
    memset(v66, 0, 0x1A8uLL);
    v66[39] = v63;
    LODWORD(v66[40]) = a10;
    v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 2140LL);
    if ( (v35 & 4) == 0 && ((v35 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
        goto LABEL_34;
      if ( a6 != 2 )
      {
        if ( a6 != 3 && a6 != 6 )
          goto LABEL_69;
LABEL_34:
        v41 = a4;
        v36 = a5;
        v39 = 0;
        v71 = a2;
        v72 = 0;
        v66[3] = &v70;
        v70 = (_QWORD *)__PAIR64__(a5, a4);
        LODWORD(v66[2]) = 2;
        StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                               (struct DXGDEVICE *)v28,
                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v66,
                               (struct COREDEVICEACCESS *)v75);
        if ( StandardAllocation >= 0 )
        {
LABEL_35:
          if ( !LODWORD(v66[1]) )
          {
            WdLogSingleEntry1(1LL, 1165LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"NULL != CreateStandardAlloc.hResource",
              1165LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *a11 = HIDWORD(v66[6]);
          goto LABEL_38;
        }
        goto LABEL_102;
      }
      v41 = a4;
      v36 = a5;
      v39 = 0;
      LODWORD(v66[0]) |= 2u;
      v68 = a2;
      v66[3] = &v67;
      v69 = 0;
      v67 = (_DWORD *)__PAIR64__(a5, a4);
      LODWORD(v66[2]) = 2;
      StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                             (struct DXGDEVICE *)v28,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v66,
                             (struct COREDEVICEACCESS *)v75);
      if ( StandardAllocation >= 0 )
      {
        v47 = v69;
        if ( !v69 )
        {
          WdLogSingleEntry1(1LL, 1148LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"0 != StagingSurfaceData.Pitch",
            1148LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v47 = v69;
        }
LABEL_60:
        *a14 = v47;
        goto LABEL_35;
      }
LABEL_102:
      WdLogSingleEntry4(3LL, StandardAllocation, v28, v41, v36);
      goto LABEL_103;
    }
    v74 = 0LL;
    v36 = a5;
    v73[0] = a4;
    v37 = LODWORD(v66[0]) ^ (LOBYTE(v66[0]) ^ (unsigned __int8)(8 * v14)) & 0x18;
    v73[2] = a2;
    v73[1] = a5;
    v73[3] = a6;
    LODWORD(v66[2]) = 4;
    v66[3] = v73;
    LODWORD(v66[0]) = v37;
    switch ( a6 )
    {
      case 1:
        goto LABEL_26;
      case 2:
        v38 = v37 | 2;
        break;
      case 5:
        v38 = v37 | 4;
        v66[4] = v64;
        v66[5] = v65;
        break;
      case 6:
LABEL_26:
        v38 = v37 | 1;
        break;
      default:
        if ( a6 <= 6 || a6 > 8 )
        {
LABEL_28:
          StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                                 (struct DXGDEVICE *)v28,
                                 (struct _D3DKM_CREATESTANDARDALLOCATION *)v66,
                                 (struct COREDEVICEACCESS *)v75);
          if ( StandardAllocation < 0 )
          {
            v41 = a4;
            goto LABEL_102;
          }
          if ( a6 == 1 )
            goto LABEL_30;
          if ( a6 == 2 || a6 == 5 )
          {
            v47 = HIDWORD(v74);
            v39 = 0;
            if ( !HIDWORD(v74) )
            {
              WdLogSingleEntry1(1LL, 1108LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"0 != GdiSurfaceData.Pitch",
                1108LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v47 = HIDWORD(v74);
            }
            goto LABEL_60;
          }
          if ( a6 != 6 )
          {
            if ( a6 == 7 )
            {
LABEL_30:
              v39 = 0;
LABEL_31:
              v40 = HIDWORD(v66[1]);
              if ( !HIDWORD(v66[1]) )
              {
                WdLogSingleEntry1(1LL, 1103LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"NULL != CreateStandardAlloc.hGlobalShare",
                  1103LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v40 = HIDWORD(v66[1]);
              }
              *v67 = v40;
              goto LABEL_35;
            }
            if ( a6 != 8 )
            {
LABEL_69:
              v39 = 0;
              goto LABEL_35;
            }
          }
          v39 = 0;
          *v70 = v66[41];
          v57 = HIDWORD(v74);
          if ( !HIDWORD(v74) )
          {
            WdLogSingleEntry1(1LL, 1096LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"0 != GdiSurfaceData.Pitch",
              1096LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v57 = HIDWORD(v74);
          }
          *a14 = v57;
          goto LABEL_31;
        }
        v38 = v37 | 0x21;
        break;
    }
    LODWORD(v66[0]) = v38;
    goto LABEL_28;
  }
  WdLogSingleEntry3(4LL, v33, v28, v21);
LABEL_103:
  v39 = StandardAllocation;
LABEL_38:
  v42 = v83;
  if ( v83 )
  {
    if ( v84 )
    {
      COREACCESS::Release((COREACCESS *)v81);
      v42 = v83;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v42 + 2), v42);
  }
  v43 = v78;
  if ( v78 )
  {
    if ( v79 )
    {
      COREACCESS::Release((COREACCESS *)v76);
      v43 = v78;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v43 + 2), v43);
  }
  ExReleasePushLockSharedEx(v30 + 136, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v30 + 16), (struct DXGADAPTER *)v30);
  ExReleaseResourceLite(*(PERESOURCE *)(v28 + 136));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v28 + 16), (struct DXGDEVICE *)v28);
LABEL_52:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60);
  if ( v62 )
  {
    LOBYTE(v44) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v60);
  }
  return v39;
}
