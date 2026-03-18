/*
 * XREFs of ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C0186EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0003E48 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C00040B0 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000538C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0041BC0 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01868E4 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C02BD840 (-GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z.c)
 */

__int64 __fastcall DxgkCddEnable(
        __int64 a1,
        int a2,
        const struct _CDDDXGK_INTERFACE *a3,
        unsigned int a4,
        const struct _D3DKMT_DISPLAYMODE *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int *a8)
{
  unsigned int v10; // r14d
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rsi
  volatile signed __int32 *v13; // rdi
  int v14; // r15d
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // rdi
  unsigned int CddShadowPitch; // eax
  unsigned int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // r12
  const wchar_t *v28; // rax
  __int64 v29; // r13
  __int64 CurrentProcess; // rax
  int v31; // edx
  void **v32; // rsi
  ADAPTER_DISPLAY *v33; // rcx
  void *DoDCddShadowSection; // rax
  unsigned __int64 v35; // rcx
  unsigned int v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h]
  char v39; // [rsp+68h] [rbp-98h]
  void **v40; // [rsp+70h] [rbp-90h]
  unsigned int *v41; // [rsp+78h] [rbp-88h]
  struct _CDDDXGK_INTERFACE *v42; // [rsp+80h] [rbp-80h]
  char v43[8]; // [rsp+90h] [rbp-70h] BYREF
  char v44[64]; // [rsp+98h] [rbp-68h] BYREF
  char v45[88]; // [rsp+D8h] [rbp-28h] BYREF

  v37 = -1;
  v38 = 0LL;
  v10 = a1;
  v40 = a6;
  v41 = a8;
  v42 = a3;
  v36 = a1;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v39 = 1;
    v37 = 3002;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 3002);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 3002);
  if ( (a2 & 0x40000000) != 0 )
  {
    v27 = 450LL;
    WdLogSingleEntry1(1LL, 450LL);
    v28 = L"(OLD_MODE_CHANGE & Win32kCommand) == 0";
    v23 = -1073741637;
    v29 = 0LL;
    v14 = 262146;
LABEL_25:
    v12 = 0LL;
LABEL_30:
    DxgkLogInternalTriageEvent(0LL, v14, -1, (__int64)v28, v27, v29, v12, 0LL, 0LL);
    goto LABEL_17;
  }
  Current = DXGPROCESS::GetCurrent();
  v12 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess();
    v23 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v14 = 0x40000;
    v27 = -1073741811LL;
    v29 = PsGetCurrentProcess();
    v28 = L"0x%I64x Unexpected process 0x%I64x";
    goto LABEL_25;
  }
  v13 = (volatile signed __int32 *)((char *)Current + 248);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v14 = 0x40000;
  v15 = (v10 >> 6) & 0xFFFFFF;
  if ( v15 >= *(_DWORD *)(v12 + 296) )
    goto LABEL_9;
  v16 = *(_QWORD *)(v12 + 280);
  if ( ((v36 >> 25) & 0x60) != (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v31 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
  if ( !v31 )
    goto LABEL_9;
  if ( v31 != 3 )
  {
    WdLogSingleEntry1(2LL, 316LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v17 = 0LL;
    goto LABEL_10;
  }
  v17 = *(_QWORD *)(v16 + 16LL * v15);
LABEL_10:
  _InterlockedDecrement(v13 + 4);
  ExReleasePushLockSharedEx(v13, 0LL);
  KeLeaveCriticalRegion();
  if ( !v17 )
  {
    v29 = v36;
    v23 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v36, v12);
    v28 = L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x";
    v27 = -1073741811LL;
    goto LABEL_30;
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, v17, 1, v18, 0);
  v19 = COREDEVICEACCESS::AcquireExclusive((__int64)v43, 2LL);
  v20 = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry3(4LL, v19, v17, v12);
    v23 = v20;
  }
  else
  {
    v21 = *(_QWORD *)(v17 + 1880);
    if ( !v21 || !*(_QWORD *)(v21 + 2920) )
    {
      WdLogSingleEntry1(1LL, 486LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
        486LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *(_QWORD *)(v17 + 1880) != *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) )
    {
      v32 = v40;
      if ( !*v40 && (*(_BYTE *)(v17 + 1901) & 1) == 0 )
      {
        if ( !a7 )
        {
          WdLogSingleEntry1(1LL, 504LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(ppDoDShadowSession != NULL) && (pDoDShadowSize != NULL)",
            504LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( ADAPTER_DISPLAY::IsIdenticalMode(*(ADAPTER_DISPLAY **)(v21 + 2920), a4) )
        {
          v33 = *(ADAPTER_DISPLAY **)(v21 + 2920);
          v36 = 0;
          DoDCddShadowSection = ADAPTER_DISPLAY::GetDoDCddShadowSection(v33, a4, &v36);
          v35 = v36;
          if ( *a7 > v36 )
          {
            if ( DoDCddShadowSection )
              ObfDereferenceObject(DoDCddShadowSection);
          }
          else
          {
            *v32 = DoDCddShadowSection;
            *a7 = v35;
          }
        }
      }
    }
    CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(*(ADAPTER_DISPLAY **)(v21 + 2920), a4);
    *v41 = CddShadowPitch;
    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v21 + 2920), a4, 1);
    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v21 + 2920), a4, v42);
    v23 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v45);
  COREACCESS::~COREACCESS((COREACCESS *)v44);
LABEL_17:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37);
  if ( v39 )
  {
    LOBYTE(v24) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v37);
  }
  return v23;
}
