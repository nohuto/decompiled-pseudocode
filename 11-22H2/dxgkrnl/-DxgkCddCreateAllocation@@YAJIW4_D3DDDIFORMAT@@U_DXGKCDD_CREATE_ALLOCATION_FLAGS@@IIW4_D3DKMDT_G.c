/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C019FE90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00073B4 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000778C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0007850 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01E4BFC (-DxgkpExpandStackAndCreateStandardAllocation@@YAJPEAVDXGDEVICE@@PEAU_D3DKM_CREATESTANDARDALLOCAT.c)
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
  __int64 v15; // r13
  __int64 v16; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  struct DXGDEVICE *v20; // r15
  __int64 v21; // rax
  int v22; // eax
  int StandardAllocation; // esi
  int v24; // eax
  unsigned int v25; // r12d
  int v26; // ebx
  int v27; // ebx
  int v28; // eax
  unsigned int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // r8
  int v33; // eax
  __int64 CurrentProcess; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rbx
  int v39; // eax
  struct DXGDEVICE *v41; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGDEVICE *v42; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v43; // [rsp+70h] [rbp-90h]
  int v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h]
  char v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  _QWORD *v49; // [rsp+A0h] [rbp-60h]
  char v50[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-50h]
  char v52; // [rsp+B8h] [rbp-48h]
  _BYTE v53[16]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v54[54]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD *v55; // [rsp+280h] [rbp+180h] BYREF
  int v56; // [rsp+288h] [rbp+188h]
  int v57; // [rsp+28Ch] [rbp+18Ch]
  _DWORD v58[4]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v59; // [rsp+2A0h] [rbp+1A0h]
  char v60[8]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v61[64]; // [rsp+2B8h] [rbp+1B8h] BYREF
  _BYTE v62[64]; // [rsp+2F8h] [rbp+1F8h] BYREF
  struct DXGDEVICE *v63; // [rsp+338h] [rbp+238h]
  char v64; // [rsp+340h] [rbp+240h]

  v44 = -1;
  v14 = a3;
  v47 = a7;
  v48 = a8;
  v43 = a11;
  v55 = a12;
  v49 = a13;
  v15 = a4;
  v16 = (unsigned int)a1;
  v45 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v46 = 1;
    v44 = 3017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3017);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 3017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v19 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v18);
    v29 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v36 = PsGetCurrentProcess(v35);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Unexpected process 0x%I64x",
      -1073741811LL,
      v36,
      0LL,
      0LL,
      0LL);
    goto LABEL_25;
  }
  v41 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v16, Current, &v41);
  v20 = v41;
  if ( v41 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v53, v41);
    v21 = *((_QWORD *)v20 + 2);
    v52 = 0;
    v51 = *(_QWORD *)(v21 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
    COREACCESS::COREACCESS((COREACCESS *)v61, *(struct DXGADAPTER *const *)(*((_QWORD *)v20 + 2) + 16LL));
    COREACCESS::COREACCESS((COREACCESS *)v62, *(struct DXGADAPTER *const *)(*((_QWORD *)v20 + 2) + 16LL));
    v63 = v20;
    v64 = 0;
    v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v60, 0LL);
    StandardAllocation = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry3(4LL, v22, v20, v19);
LABEL_62:
      v29 = StandardAllocation;
LABEL_19:
      COREACCESS::~COREACCESS((COREACCESS *)v62);
      COREACCESS::~COREACCESS((COREACCESS *)v61);
      if ( v52 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v53);
      goto LABEL_22;
    }
    memset(v54, 0, 0x1A8uLL);
    LODWORD(v54[40]) = a10;
    v54[39] = a9;
    v24 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 2268LL);
    if ( (v24 & 4) == 0 && ((v24 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
        goto LABEL_15;
      if ( a6 != 2 )
      {
        if ( a6 != 3 && a6 != 6 )
          goto LABEL_16;
LABEL_15:
        v25 = a5;
        v57 = 0;
        v56 = a2;
        v54[3] = &v55;
        v55 = (_DWORD *)__PAIR64__(a5, v15);
        LODWORD(v54[2]) = 2;
        StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                               v20,
                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v54,
                               (struct COREDEVICEACCESS *)v60);
        if ( StandardAllocation >= 0 )
        {
LABEL_16:
          if ( !LODWORD(v54[1]) )
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
          v29 = 0;
          *v43 = HIDWORD(v54[6]);
          goto LABEL_19;
        }
        goto LABEL_61;
      }
      v25 = a5;
      v57 = 0;
      LODWORD(v54[0]) |= 2u;
      v56 = a2;
      v54[3] = &v55;
      v55 = (_DWORD *)__PAIR64__(a5, v15);
      LODWORD(v54[2]) = 2;
      StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                             v20,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v54,
                             (struct COREDEVICEACCESS *)v60);
      if ( StandardAllocation >= 0 )
      {
        v33 = v57;
        if ( !v57 )
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
          v33 = v57;
        }
LABEL_32:
        *a14 = v33;
        goto LABEL_16;
      }
LABEL_61:
      WdLogSingleEntry4(3LL, StandardAllocation, v20, v15, v25);
      goto LABEL_62;
    }
    v59 = 0LL;
    v25 = a5;
    v58[2] = a2;
    v26 = LODWORD(v54[0]) ^ (LOBYTE(v54[0]) ^ (unsigned __int8)(8 * v14)) & 0x18;
    v58[0] = v15;
    v58[1] = a5;
    v58[3] = a6;
    LODWORD(v54[2]) = 4;
    v54[3] = v58;
    LODWORD(v54[0]) = v26;
    switch ( a6 )
    {
      case 1:
        goto LABEL_8;
      case 2:
        v27 = v26 | 2;
        break;
      case 5:
        v27 = v26 | 4;
        v54[4] = v47;
        v54[5] = v48;
        break;
      case 6:
LABEL_8:
        v27 = v26 | 1;
        break;
      default:
        if ( (unsigned int)(a6 - 7) > 1 )
        {
LABEL_10:
          StandardAllocation = DxgkpExpandStackAndCreateStandardAllocation(
                                 v20,
                                 (struct _D3DKM_CREATESTANDARDALLOCATION *)v54,
                                 (struct COREDEVICEACCESS *)v60);
          if ( StandardAllocation < 0 )
            goto LABEL_61;
          if ( a6 == 1 )
          {
LABEL_12:
            v28 = HIDWORD(v54[1]);
            if ( !HIDWORD(v54[1]) )
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
              v28 = HIDWORD(v54[1]);
            }
            *v55 = v28;
            goto LABEL_16;
          }
          if ( a6 == 2 || a6 == 5 )
          {
            v33 = HIDWORD(v59);
            if ( !HIDWORD(v59) )
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
              v33 = HIDWORD(v59);
            }
            goto LABEL_32;
          }
          if ( a6 != 6 )
          {
            if ( a6 == 7 )
              goto LABEL_12;
            if ( a6 != 8 )
              goto LABEL_16;
          }
          *v49 = v54[41];
          v39 = HIDWORD(v59);
          if ( !HIDWORD(v59) )
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
            v39 = HIDWORD(v59);
          }
          *a14 = v39;
          goto LABEL_12;
        }
        v27 = v26 | 0x21;
        break;
    }
    LODWORD(v54[0]) = v27;
    goto LABEL_10;
  }
  v37 = v16;
  v38 = v16;
  v29 = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, v37, v19);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x",
    -1073741811LL,
    v38,
    v19,
    0LL,
    0LL);
LABEL_22:
  if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( v46 )
  {
    LOBYTE(v30) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v44);
  }
  return v29;
}
