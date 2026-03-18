/*
 * XREFs of DxgkCreateOverlay @ 0x1C032A080
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C002B57C (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C00567EC (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C02E42E8 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkCreateOverlay(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  _D3DKMT_CREATEOVERLAY *v12; // rax
  struct ADAPTER_RENDER **v13; // rbx
  __int64 hDevice; // rbx
  __int64 v16; // r9
  unsigned int v17; // r14d
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // sf
  __int64 v21; // r9
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // sf
  size_t PrivateDriverDataSize; // rsi
  void *v27; // r9
  char *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _DWORD *v31; // rdx
  struct DXGDEVICE *v32; // [rsp+50h] [rbp-168h] BYREF
  DXGDEVICE *v33; // [rsp+58h] [rbp-160h] BYREF
  int v34; // [rsp+60h] [rbp-158h] BYREF
  __int64 v35; // [rsp+68h] [rbp-150h]
  char v36; // [rsp+70h] [rbp-148h]
  _QWORD v37[2]; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v38[24]; // [rsp+88h] [rbp-130h] BYREF
  _D3DKMT_CREATEOVERLAY v39; // [rsp+A0h] [rbp-118h] BYREF
  _BYTE v40[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v34 = -1;
  v35 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2022);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 2022);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( !v36 )
      return 3221225485LL;
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_16:
    if ( v11 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v34);
    return 3221225485LL;
  }
  v12 = (_D3DKMT_CREATEOVERLAY *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_D3DKMT_CREATEOVERLAY *)MmUserProbeAddress;
  v39 = *v12;
  v33 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v32, v39.hDevice, (struct _KTHREAD **)Current, &v33);
  v13 = (struct ADAPTER_RENDER **)v33;
  if ( !v33 )
  {
    hDevice = v39.hDevice;
    WdLogSingleEntry2(2LL, v39.hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( !v36 )
      return 3221225485LL;
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_16;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37, v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v40, (__int64)v13, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v40, 0LL);
  if ( (v17 & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
    if ( v37[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( !v36 )
      return v17;
    v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_27:
    if ( v20 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v34);
    return v17;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 208LL))() )
  {
    v22 = -1073741790;
    WdLogSingleEntry1(4LL, -1073741790LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
    if ( v37[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( !v36 )
      return (unsigned int)v22;
    LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_38;
  }
  if ( v39.OverlayInfo.PrivateDriverDataSize && v39.OverlayInfo.pPrivateDriverData )
  {
    PrivateDriverDataSize = v39.OverlayInfo.PrivateDriverDataSize;
    v27 = (void *)operator new[](v39.OverlayInfo.PrivateDriverDataSize, 0x4B677844u, 256LL, v21);
    v39.OverlayInfo.pPrivateDriverData = v27;
    if ( !v27 )
    {
      v17 = -1073741801;
      WdLogSingleEntry3(3LL, v13, (unsigned int)PrivateDriverDataSize, -1073741801LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
      if ( v37[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
      if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( !v36 )
        return v17;
      LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_27;
    }
    v28 = *(char **)(a1 + 48);
    if ( &v28[PrivateDriverDataSize] < v28 || (unsigned __int64)&v28[PrivateDriverDataSize] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v27, v28, PrivateDriverDataSize);
  }
  else
  {
    v39.OverlayInfo.PrivateDriverDataSize = 0;
    v39.OverlayInfo.pPrivateDriverData = 0LL;
  }
  if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v13) )
  {
    WdLogSingleEntry1(1LL, 638LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDevice->IsSupportOverlay()", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v38, v13[2]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v38);
  v22 = DXGDEVICE::CreateOverlay((DXGDEVICE *)v13, &v39, v29, v30);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v38);
  operator delete[](v39.OverlayInfo.pPrivateDriverData);
  if ( v22 >= 0 )
  {
    v31 = (_DWORD *)(a1 + 64);
    if ( a1 + 64 >= MmUserProbeAddress )
      v31 = (_DWORD *)MmUserProbeAddress;
    *v31 = v39.hOverlay;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v38);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v40);
  if ( v37[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
  if ( v32 && _InterlockedExchangeAdd64((volatile signed __int64 *)v32 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 )
  {
    v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_38:
    if ( v25 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v34);
  }
  return (unsigned int)v22;
}
