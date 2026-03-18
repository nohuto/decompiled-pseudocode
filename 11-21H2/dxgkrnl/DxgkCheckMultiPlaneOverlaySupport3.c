/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C015D690
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
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015DFB4 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C015FA00 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C015FA4C (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C015FA98 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C015FB14 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C015FB90 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rax
  int v5; // eax
  _OWORD *v6; // rax
  __int64 v7; // r13
  __int64 v8; // rsi
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v9; // rbx
  __int64 v10; // r12
  const void *v11; // rdx
  char *v12; // rcx
  unsigned int i; // edx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  struct DXGDEVICE *v19; // rcx
  unsigned int j; // edx
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  const void *v23; // rdx
  char *v24; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v25; // rcx
  unsigned int v26; // r8d
  struct DXGDEVICE *v27; // r9
  __int64 v28; // r10
  __int64 v29; // rbx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v30; // rdx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v31; // rcx
  unsigned int v32; // edx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v33; // rbx
  DXGDEVICE *v34; // rbx
  __int64 v35; // r9
  int v36; // eax
  unsigned int v37; // r12d
  int v38; // ebx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v39; // r9
  _DWORD *v40; // r8
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  bool v49; // sf
  __int64 CurrentProcess; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  bool v54; // sf
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // r8
  int *v63; // [rsp+30h] [rbp-3F8h]
  int *v64; // [rsp+30h] [rbp-3F8h]
  int v65; // [rsp+50h] [rbp-3D8h] BYREF
  __int64 v66; // [rsp+58h] [rbp-3D0h]
  char v67; // [rsp+60h] [rbp-3C8h]
  struct DXGDEVICE *v68; // [rsp+68h] [rbp-3C0h] BYREF
  PVOID v69; // [rsp+70h] [rbp-3B8h] BYREF
  _BYTE v70[24]; // [rsp+78h] [rbp-3B0h] BYREF
  int v71; // [rsp+90h] [rbp-398h]
  PVOID v72; // [rsp+98h] [rbp-390h] BYREF
  _BYTE v73[24]; // [rsp+A0h] [rbp-388h] BYREF
  int v74; // [rsp+B8h] [rbp-370h]
  int v75; // [rsp+C0h] [rbp-368h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v76; // [rsp+C4h] [rbp-364h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v77; // [rsp+C8h] [rbp-360h]
  ULONG64 v78; // [rsp+D0h] [rbp-358h]
  unsigned int v79; // [rsp+D8h] [rbp-350h]
  unsigned int v80; // [rsp+DCh] [rbp-34Ch]
  BOOL v81; // [rsp+E0h] [rbp-348h]
  __int64 v82; // [rsp+E8h] [rbp-340h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v83; // [rsp+F0h] [rbp-338h]
  struct DXGPROCESS *v84[2]; // [rsp+F8h] [rbp-330h] BYREF
  struct DXGDEVICE *v85; // [rsp+108h] [rbp-320h] BYREF
  unsigned int v86[4]; // [rsp+110h] [rbp-318h]
  void *Src[2]; // [rsp+120h] [rbp-308h]
  void *v88[2]; // [rsp+130h] [rbp-2F8h]
  PVOID v89; // [rsp+140h] [rbp-2E8h] BYREF
  _BYTE v90[96]; // [rsp+148h] [rbp-2E0h] BYREF
  int v91; // [rsp+1A8h] [rbp-280h]
  PVOID P; // [rsp+1B0h] [rbp-278h] BYREF
  _BYTE v93[132]; // [rsp+1B8h] [rbp-270h] BYREF
  int v94; // [rsp+23Ch] [rbp-1ECh]
  PVOID v95; // [rsp+240h] [rbp-1E8h] BYREF
  _BYTE v96[264]; // [rsp+248h] [rbp-1E0h] BYREF
  int v97; // [rsp+350h] [rbp-D8h]
  _BYTE v98[160]; // [rsp+360h] [rbp-C8h] BYREF

  v78 = a1;
  v65 = -1;
  v66 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v67 = 1;
    v65 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v65, 2093);
  Current = DXGPROCESS::GetCurrent();
  v84[0] = Current;
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
    goto LABEL_76;
  }
  v5 = *((_DWORD *)Current + 106) >> 2;
  LOBYTE(v5) = !(v5 & 1);
  v81 = v5;
  v6 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v86 = *v6;
  *(_OWORD *)Src = v6[1];
  *(_OWORD *)v88 = v6[2];
  v7 = v86[2];
  if ( !v86[2] )
  {
    CurrentProcess = PsGetCurrentProcess();
    WdLogSingleEntry3(2LL, 0LL, -1073741811LL, CurrentProcess);
    v64 = (int *)PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport3 multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      0LL,
      -1073741811LL,
      (__int64)v64,
      0LL,
      0LL);
LABEL_76:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( v67 )
    {
      v49 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_160:
      if ( v49 )
        McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v65);
    }
    return 3221225485LL;
  }
  v8 = LODWORD(Src[1]);
  if ( LODWORD(Src[1]) > 0x10 )
  {
    v45 = LODWORD(Src[1]);
    v46 = PsGetCurrentProcess();
    WdLogSingleEntry3(2LL, v45, -1073741811LL, v46);
    v63 = (int *)PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckMultiPlaneOverlaySupport3 post composition count count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v45,
      -1073741811LL,
      (__int64)v63,
      0LL,
      0LL);
    goto LABEL_76;
  }
  v69 = 0LL;
  v71 = 0;
  v77 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                             &v69,
                                                             v86[2]);
  if ( !v77 )
  {
    v51 = PsGetCurrentProcess();
    WdLogSingleEntry2(3LL, -1073741801LL, v51);
LABEL_81:
    if ( v69 != v70 && v69 )
      ExFreePoolWithTag(v69, 0);
    v69 = 0LL;
    v71 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( !v67 )
      return 3221225495LL;
    v54 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_121:
    if ( v54 )
      McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v65);
    return 3221225495LL;
  }
  v89 = 0LL;
  v91 = 0;
  v82 = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(&v89, (unsigned int)v7);
  if ( !v82 )
  {
    v55 = PsGetCurrentProcess();
    WdLogSingleEntry2(3LL, -1073741801LL, v55);
LABEL_88:
    if ( v89 != v90 && v89 )
      ExFreePoolWithTag(v89, 0);
    v89 = 0LL;
    v91 = 0;
    goto LABEL_81;
  }
  v95 = 0LL;
  v97 = 0;
  v68 = (struct DXGDEVICE *)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements(
                              &v95,
                              (unsigned int)v7);
  if ( !v68 )
  {
    v56 = PsGetCurrentProcess();
    WdLogSingleEntry2(3LL, -1073741801LL, v56);
LABEL_93:
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    goto LABEL_88;
  }
  v72 = 0LL;
  v74 = 0;
  P = 0LL;
  v94 = 0;
  v9 = 0LL;
  v83 = 0LL;
  v10 = 0LL;
  if ( !(_DWORD)v8 )
    goto LABEL_12;
  v9 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,3>::AllocateElements(
                                                                            &v72,
                                                                            (unsigned int)v8);
  v83 = v9;
  if ( !v9 )
  {
    v57 = PsGetCurrentProcess();
    WdLogSingleEntry2(3LL, -1073741801LL, v57);
    if ( P != v93 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v94 = 0;
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v72 = 0LL;
    v74 = 0;
    goto LABEL_93;
  }
  v10 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
          &P,
          (unsigned int)v8);
  if ( !v10 )
  {
    v58 = PsGetCurrentProcess();
    WdLogSingleEntry2(3LL, -1073741801LL, v58);
    if ( P != v93 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v94 = 0;
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v72 = 0LL;
    v74 = 0;
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    if ( v89 != v90 && v89 )
      ExFreePoolWithTag(v89, 0);
    v89 = 0LL;
    v91 = 0;
    if ( v69 != v70 && v69 )
      ExFreePoolWithTag(v69, 0);
    v69 = 0LL;
    v71 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( !v67 )
      return 3221225495LL;
    LOBYTE(v52) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v54 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_121;
  }
LABEL_12:
  v11 = Src[0];
  v12 = (char *)Src[0] + 8 * v7;
  if ( v12 < Src[0] || (unsigned __int64)v12 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v77, v11, 8 * v7);
  for ( i = 0; ; ++i )
  {
    v79 = i;
    if ( i >= (unsigned int)v7 )
      break;
    v14 = v77[i];
    if ( &v14[1] < v14 || (unsigned __int64)&v14[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v15 = 32LL * i;
    v16 = v82;
    *(_OWORD *)(v15 + v82) = *(_OWORD *)&v14->LayerIndex;
    *(_OWORD *)(v15 + v16 + 16) = *(_OWORD *)&v14->VidPnSourceId;
    v17 = *(_QWORD *)(v15 + v16 + 24);
    if ( v17 + 88 < v17 || v17 + 88 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v18 = 88LL * i;
    v19 = v68;
    *(_OWORD *)((char *)v68 + v18) = *(_OWORD *)v17;
    *(_OWORD *)((char *)v19 + v18 + 16) = *(_OWORD *)(v17 + 16);
    *(_OWORD *)((char *)v19 + v18 + 32) = *(_OWORD *)(v17 + 32);
    *(_OWORD *)((char *)v19 + v18 + 48) = *(_OWORD *)(v17 + 48);
    *(_OWORD *)((char *)v19 + v18 + 64) = *(_OWORD *)(v17 + 64);
    *(_QWORD *)((char *)v19 + v18 + 80) = *(_QWORD *)(v17 + 80);
    *(_DWORD *)((char *)v19 + v18 + 60) = 0;
    *(_QWORD *)((char *)v19 + v18 + 64) = 0LL;
  }
  if ( (_DWORD)v8 )
  {
    v23 = v88[0];
    v24 = (char *)v88[0] + 8 * v8;
    if ( v24 < v88[0] || (unsigned __int64)v24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v9, v23, 8 * v8);
  }
  for ( j = 0; ; ++j )
  {
    v80 = j;
    if ( j >= (unsigned int)v8 )
      break;
    v21 = (unsigned __int64)v9[j];
    if ( v21 + 44 < v21 || v21 + 44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v22 = 44LL * j;
    *(_OWORD *)(v22 + v10) = *(_OWORD *)v21;
    *(_OWORD *)(v22 + v10 + 16) = *(_OWORD *)(v21 + 16);
    *(_QWORD *)(v22 + v10 + 32) = *(_QWORD *)(v21 + 32);
    *(_DWORD *)(v22 + v10 + 40) = *(_DWORD *)(v21 + 40);
  }
  v25 = v77;
  Src[0] = v77;
  v26 = 0;
  v27 = v68;
  v28 = v82;
  while ( v26 < (unsigned int)v7 )
  {
    v29 = v26;
    v30 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)(v28 + 32LL * v26);
    v25[v26] = v30;
    v31 = (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)((char *)v27 + 88 * v26);
    v30->pPlaneAttributes = v31;
    if ( (v31->Flags & 4) != 0 )
    {
      _mm_lfence();
      v59 = PsGetCurrentProcess();
      WdLogSingleEntry3(3LL, **(unsigned int **)(32 * v29 + v82 + 24), -1073741811LL, v59);
      if ( P != v93 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v94 = 0;
      if ( v72 != v73 && v72 )
        ExFreePoolWithTag(v72, 0);
      v72 = 0LL;
      v74 = 0;
      if ( v95 != v96 && v95 )
        ExFreePoolWithTag(v95, 0);
      v95 = 0LL;
      v97 = 0;
      if ( v89 != v90 && v89 )
        ExFreePoolWithTag(v89, 0);
      v89 = 0LL;
      v91 = 0;
      if ( v69 != v70 && v69 )
        ExFreePoolWithTag(v69, 0);
      v69 = 0LL;
      v71 = 0;
      goto LABEL_76;
    }
    ++v26;
    v25 = v77;
  }
  v32 = 0;
  v33 = v83;
  while ( v32 < (unsigned int)v8 )
  {
    v33[v32] = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)(v10 + 44LL * v32);
    ++v32;
  }
  v85 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v68, v86[1], (struct _KTHREAD **)v84[0], &v85);
  v34 = v85;
  if ( !v85 )
  {
    v60 = v86[1];
    WdLogSingleEntry2(2LL, v86[1], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v60,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
    if ( P != v93 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v94 = 0;
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v72 = 0LL;
    v74 = 0;
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    if ( v89 != v90 && v89 )
      ExFreePoolWithTag(v89, 0);
    v89 = 0LL;
    v91 = 0;
    if ( v69 != v70 && v69 )
      ExFreePoolWithTag(v69, 0);
    v69 = 0LL;
    v71 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( v67 )
    {
      LOBYTE(v47) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v49 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_160;
    }
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84, v85);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v98, (__int64)v34, 2, v35, 0);
  v36 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v98, 0LL);
  v37 = v36;
  if ( v36 < 0 )
  {
    WdLogSingleEntry2(3LL, v34, v36);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
    if ( v84[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
    if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
    if ( P != v93 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v94 = 0;
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v72 = 0LL;
    v74 = 0;
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    if ( v89 != v90 && v89 )
      ExFreePoolWithTag(v89, 0);
    v89 = 0LL;
    v91 = 0;
    if ( v69 != v70 && v69 )
      ExFreePoolWithTag(v69, 0);
    v69 = 0LL;
    v71 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v61, &EventProfilerExit, v62, v65);
    return v37;
  }
  else
  {
    v75 = 0;
    v76.0 = 0;
    v38 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(v34, v7, v77, v8, v83, v81, &v75, &v76);
    if ( v38 >= 0 )
    {
      v39 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v78;
      v40 = (_DWORD *)(v78 + 40);
      if ( v78 + 40 >= MmUserProbeAddress )
        v40 = (_DWORD *)MmUserProbeAddress;
      *v40 = v75;
      v41 = v39 + 11;
      if ( (unsigned __int64)&v39[11] >= MmUserProbeAddress )
        v41 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
      v41->0 = v76.0;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v98);
    if ( v84[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v84);
    if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
    if ( P != v93 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v94 = 0;
    if ( v72 != v73 && v72 )
      ExFreePoolWithTag(v72, 0);
    v72 = 0LL;
    v74 = 0;
    if ( v95 != v96 && v95 )
      ExFreePoolWithTag(v95, 0);
    v95 = 0LL;
    v97 = 0;
    if ( v89 != v90 && v89 )
      ExFreePoolWithTag(v89, 0);
    v89 = 0LL;
    v91 = 0;
    if ( v69 != v70 && v69 )
      ExFreePoolWithTag(v69, 0);
    v69 = 0LL;
    v71 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v65);
    return (unsigned int)v38;
  }
}
