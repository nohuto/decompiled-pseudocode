/*
 * XREFs of DxgkCreateContext @ 0x1C015C120
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
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C016A9E0 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C016BC6C (-GetBitCount@@YAII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateContext(struct DXGCONTEXT *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // r8
  _OWORD *v5; // rax
  struct DXGDEVICE *v6; // r13
  int v7; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // r9
  UINT v11; // edx
  __int64 v12; // r9
  __int64 v13; // r9
  int v14; // r14d
  void *v15; // rbx
  char *v16; // r12
  size_t v17; // r8
  unsigned int v18; // r8d
  struct DXGCONTEXT *v19; // r12
  int v20; // r8d
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // r11
  int v24; // r13d
  _DWORD *v25; // rdx
  _QWORD *v26; // rdx
  _QWORD *v27; // rdx
  _QWORD *v28; // rdx
  _DWORD *v29; // rdx
  _QWORD *v30; // rdx
  _DWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 Value; // rbx
  __int64 v36; // rdx
  bool v37; // sf
  __int64 v38; // rcx
  __int64 v39; // r8
  struct DXGDEVICE *v40; // [rsp+50h] [rbp-1C8h] BYREF
  int v41; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-1B8h]
  char v43; // [rsp+68h] [rbp-1B0h]
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v44; // [rsp+70h] [rbp-1A8h]
  __int64 v45; // [rsp+78h] [rbp-1A0h]
  struct DXGDEVICE *v46; // [rsp+80h] [rbp-198h] BYREF
  struct DXGCONTEXT *v47; // [rsp+88h] [rbp-190h] BYREF
  _QWORD v48[2]; // [rsp+90h] [rbp-188h] BYREF
  struct DXGCONTEXT *v49; // [rsp+A0h] [rbp-178h]
  size_t Size; // [rsp+A8h] [rbp-170h]
  void *v51; // [rsp+B0h] [rbp-168h]
  struct _D3DDDI_CREATECONTEXTFLAGS v52[4]; // [rsp+C0h] [rbp-158h]
  void *Src[2]; // [rsp+D0h] [rbp-148h]
  __int128 v54; // [rsp+E0h] [rbp-138h]
  __int128 v55; // [rsp+F0h] [rbp-128h]
  __int128 v56; // [rsp+100h] [rbp-118h]
  __int128 v57; // [rsp+110h] [rbp-108h]
  int v58; // [rsp+120h] [rbp-F8h]
  __int64 v59; // [rsp+128h] [rbp-F0h]
  __int64 v60; // [rsp+130h] [rbp-E8h]
  __int64 v61; // [rsp+138h] [rbp-E0h]
  __int64 v62; // [rsp+140h] [rbp-D8h]
  _BYTE v63[160]; // [rsp+150h] [rbp-C8h] BYREF

  v49 = a1;
  v47 = a1;
  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2039);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v14 = -1073741811;
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
    goto LABEL_43;
  }
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v52[0].0 = *v5;
  *(_OWORD *)Src = v5[1];
  v54 = v5[2];
  v55 = v5[3];
  v56 = v5[4];
  v57 = v5[5];
  v46 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v52[0].Value, Current, &v46);
  v6 = v46;
  if ( !v46 )
  {
    Value = v52[0].Value;
    v14 = -1073741811;
    WdLogSingleEntry2(2LL, v52[0].Value, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      Value,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_40;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL) + 2152LL) & 1) != 0 )
  {
    v7 = 0;
    v8 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v52[2].Value;
    while ( 1 )
    {
      v8 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)(*(unsigned int *)&v8 >> 1);
      if ( !*(_DWORD *)&v8 )
        break;
      ++v7;
    }
    if ( GetBitCount(v52[2].Value) > 1 || v9 >= *(_DWORD *)(v10 + 288) )
    {
      v36 = v52[2].Value;
    }
    else
    {
      v11 = *(unsigned __int16 *)(344LL * v9 + *(_QWORD *)(v10 + 2680));
      v44 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v52[1].Value;
      if ( v52[1].Value < v11 )
        goto LABEL_13;
      v36 = v52[1].Value;
    }
    v14 = -1073741811;
    WdLogSingleEntry2(3LL, v36, -1073741811LL);
    goto LABEL_40;
  }
  v44 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v52[1].Value;
  if ( v52[1].Value || v52[2].Value )
  {
    v14 = -1073741811;
    WdLogSingleEntry3(3LL, v52[1].Value, v52[2].Value, -1073741811LL);
    goto LABEL_40;
  }
LABEL_13:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v6);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, (__int64)v6, 0, v12, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v63, 0LL);
  if ( v14 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
    if ( v48[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    if ( !v40 )
      goto LABEL_43;
    goto LABEL_41;
  }
  v15 = 0LL;
  v51 = 0LL;
  v16 = (char *)Src[0];
  if ( !Src[0] )
  {
    if ( !LODWORD(Src[1]) )
    {
      v18 = (unsigned int)v44;
      v19 = v49;
LABEL_21:
      v47 = 0LL;
      v14 = DXGDEVICE::CreateContext(
              v6,
              &v47,
              v18,
              v52[2].Value,
              v52[3],
              v15,
              (unsigned int)Src[1],
              SHIDWORD(Src[1]),
              0);
      if ( v14 >= 0 )
      {
        v20 = *((_DWORD *)v47 + 6);
        v58 = v20;
        v21 = *((_QWORD *)v47 + 7);
        v60 = v21;
        v22 = *((_QWORD *)v47 + 6);
        v61 = v22;
        v23 = *((_QWORD *)v47 + 11);
        v62 = v23;
        v24 = *((_DWORD *)v47 + 18);
        LODWORD(v49) = v24;
        v45 = *((_QWORD *)v47 + 15);
        v59 = v45;
        v44 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)*((_DWORD *)v47 + 26);
        LODWORD(Size) = v44;
        v25 = (_DWORD *)((char *)v19 + 32);
        if ( (unsigned __int64)v19 + 32 >= MmUserProbeAddress )
          v25 = (_DWORD *)MmUserProbeAddress;
        *v25 = v20;
        v26 = (_QWORD *)((char *)v19 + 40);
        if ( (unsigned __int64)v19 + 40 >= MmUserProbeAddress )
          v26 = (_QWORD *)MmUserProbeAddress;
        *v26 = v21;
        v27 = (_QWORD *)((char *)v19 + 48);
        if ( (unsigned __int64)v19 + 48 >= MmUserProbeAddress )
          v27 = (_QWORD *)MmUserProbeAddress;
        *v27 = v22;
        v28 = (_QWORD *)((char *)v19 + 56);
        if ( (unsigned __int64)v19 + 56 >= MmUserProbeAddress )
          v28 = (_QWORD *)MmUserProbeAddress;
        *v28 = v23;
        v29 = (_DWORD *)((char *)v19 + 64);
        if ( (unsigned __int64)v19 + 64 >= MmUserProbeAddress )
          v29 = (_DWORD *)MmUserProbeAddress;
        *v29 = v24;
        v30 = (_QWORD *)((char *)v19 + 72);
        if ( (unsigned __int64)v19 + 72 >= MmUserProbeAddress )
          v30 = (_QWORD *)MmUserProbeAddress;
        *v30 = v45;
        v31 = (_DWORD *)((char *)v19 + 80);
        if ( (unsigned __int64)v19 + 80 >= MmUserProbeAddress )
          v31 = (_DWORD *)MmUserProbeAddress;
        *v31 = v44;
      }
      operator delete[](v15);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
      if ( v48[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
LABEL_40:
      if ( v40 )
      {
LABEL_41:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
      }
LABEL_43:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( !v43 )
        return (unsigned int)v14;
      v37 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_61:
      if ( v37 )
        McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v41);
      return (unsigned int)v14;
    }
LABEL_65:
    v14 = -1073741811;
    WdLogSingleEntry3(3LL, Src[0], LODWORD(Src[1]), -1073741811LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
    if ( v48[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 )
      return (unsigned int)v14;
    LOBYTE(v32) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v37 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_61;
  }
  if ( !LODWORD(Src[1]) )
    goto LABEL_65;
  Size = LODWORD(Src[1]);
  v15 = (void *)operator new[](LODWORD(Src[1]), 0x4B677844u, 256LL, v13);
  v51 = v15;
  if ( v15 )
  {
    v17 = Size;
    if ( &v16[Size] < v16 || (unsigned __int64)&v16[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, v16, v17);
    v18 = (unsigned int)v44;
    v19 = v49;
    goto LABEL_21;
  }
  WdLogSingleEntry3(3LL, v6, Size, -1073741801LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
  if ( v48[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 )
  {
    LOBYTE(v38) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v41);
  }
  return 3221225495LL;
}
