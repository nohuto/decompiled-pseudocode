/*
 * XREFs of ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0188C5C
 * Callers:
 *     DxgkSetVidPnSourceOwner @ 0x1C0188AE0 (DxgkSetVidPnSourceOwner.c)
 * Callees:
 *     ??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z @ 0x1C00041DC (--0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0004224 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0004278 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00042E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046C0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000501C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0005070 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000538C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0007158 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007174 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0008088 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0023F34 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0024B0C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024E8C (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0024EB4 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     DxgkStatusChangeNotify @ 0x1C01716F0 (DxgkStatusChangeNotify.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173118 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C0187B90 (-CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1C0187DB0 (DxgkShutdownBootGraphics.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C01885C4 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0188608 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C018893C (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ @ 0x1C0188AA4 (--1MANAGEDPRIMARIESTRACKER@@QEAA@XZ.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C0189A34 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01952F8 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C0195464 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1C0195B14 (-AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C019D2BC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x1C02BEC54 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C02BEF88 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z @ 0x1C02ECC58 (-RemoveVidPnOwnership@DXGDEVICE@@QEAAXI@Z.c)
 */

__int64 __fastcall SetVidPnSourceOwnerInternal(
        const struct _D3DKMT_SETVIDPNSOURCEOWNER *a1,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a2,
        void *const *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct DXGPROCESS *Current; // r14
  unsigned int v8; // r13d
  const void *v9; // r12
  char *v10; // r15
  size_t v11; // r8
  size_t v12; // r8
  __int64 v13; // rbx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rdi
  DXGDEVICE *v18; // rsi
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // rdi
  unsigned int i; // r14d
  __int64 v23; // rax
  __int64 v24; // rdx
  DISPLAY_SOURCE *v25; // rcx
  int v26; // r15d
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v28; // r9
  struct DXGDEVICE *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  ADAPTER_DISPLAY *v32; // r12
  __int64 v33; // rax
  __int64 v34; // r14
  int v35; // edx
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int v39; // esi
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v40; // eax
  unsigned int v41; // edx
  char v42; // [rsp+50h] [rbp-428h] BYREF
  unsigned __int8 v43; // [rsp+51h] [rbp-427h] BYREF
  unsigned __int8 v44[6]; // [rsp+52h] [rbp-426h] BYREF
  struct DXGDEVICE *v45; // [rsp+58h] [rbp-420h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v46; // [rsp+60h] [rbp-418h]
  _QWORD v47[2]; // [rsp+68h] [rbp-410h] BYREF
  struct DXGDEVICE *v48; // [rsp+78h] [rbp-400h] BYREF
  DXGDEVICE *v49; // [rsp+80h] [rbp-3F8h] BYREF
  _QWORD v50[2]; // [rsp+88h] [rbp-3F0h] BYREF
  _BYTE v51[16]; // [rsp+98h] [rbp-3E0h] BYREF
  _BYTE v52[24]; // [rsp+A8h] [rbp-3D0h] BYREF
  void *Src[2]; // [rsp+C0h] [rbp-3B8h]
  void *v54[2]; // [rsp+D0h] [rbp-3A8h]
  _BYTE v55[160]; // [rsp+E0h] [rbp-398h] BYREF
  _BYTE v56[432]; // [rsp+180h] [rbp-2F8h] BYREF
  unsigned int v57[16]; // [rsp+330h] [rbp-148h] BYREF
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE v58[16]; // [rsp+370h] [rbp-108h] BYREF
  void *v59[16]; // [rsp+3B0h] [rbp-C8h] BYREF

  v46 = a4;
  Current = DXGPROCESS::GetCurrent();
  v50[0] = Current;
  if ( !Current )
  {
    v39 = -1073741811;
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
    return v39;
  }
  memset(v59, 0, sizeof(v59));
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v51, Current);
  v57[0] = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&a1->hDevice;
  *(_OWORD *)v54 = *(_OWORD *)&a1->pVidPnSourceId;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v54, 8));
  if ( v8 )
  {
    if ( v8 > 0x10 )
    {
      v13 = LODWORD(Src[0]);
      WdLogSingleEntry3(2LL, LODWORD(Src[0]), v8, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: VidPnSourceCount (0x%I64x) is too large, returning 0x%I64x",
        v13,
        v8,
        -1073741811LL,
        0LL,
        0LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v51);
      return 3221225485LL;
    }
    v9 = Src[1];
    v10 = (char *)v54[0];
    if ( !Src[1] || !v54[0] )
    {
      v16 = LODWORD(Src[0]);
      WdLogSingleEntry5(2LL, LODWORD(Src[0]), v8, Src[1], v54[0], -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%I64x: (0x%I64x) must have both Type (0x%I64x) and VidPnSourceId (0x%I64x) array, returning 0x%I64x",
        v16,
        v8,
        (__int64)v9,
        (__int64)v10,
        -1073741811LL);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v51);
      return 3221225485LL;
    }
    v11 = 4LL * v8;
    if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v58, v9, v11);
    v12 = 4LL * v8;
    if ( &v10[v12] < v10 || (unsigned __int64)&v10[v12] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v57, v10, v12);
    if ( (*(_BYTE *)&a2.0 & 4) != 0 )
    {
      v15 = v8;
      if ( &a3[v15] < a3 || (unsigned __int64)&a3[v15] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v59, a3, v15 * 8);
    }
  }
  v49 = 0LL;
  v17 = LODWORD(Src[0]);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v45,
    (unsigned int)Src[0],
    (struct _KTHREAD **)Current,
    &v49);
  v18 = v49;
  if ( !v49 )
  {
    v39 = -1073741811;
    WdLogSingleEntry2(2LL, v17, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_111:
    if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
LABEL_96:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v51);
    return v39;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47, v49);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v52, (struct _KTHREAD **)v18 + 18);
  v19 = *((_QWORD *)v18 + 235);
  if ( !v19 )
  {
    v39 = -1073741637;
    WdLogSingleEntry2(2LL, v17, -1073741637LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkSetVidPnSourceOwner function is called on a render only device (0x%I64x), returning 0x%I64x.",
      v17,
      -1073741637LL,
      0LL,
      0LL,
      0LL);
LABEL_109:
    DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v52);
    if ( v47[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
    goto LABEL_111;
  }
  MANAGEDPRIMARIESTRACKER::MANAGEDPRIMARIESTRACKER(
    (MANAGEDPRIMARIESTRACKER *)v56,
    *(struct ADAPTER_DISPLAY **)(v19 + 2920),
    Current);
  MANAGEDPRIMARIESTRACKER::AcquireWin32kAndPDEVLocks((MANAGEDPRIMARIESTRACKER *)v56);
  DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
  v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v42, 1);
  v21 = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry1(2LL, v20);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
      v21,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v56);
    DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v52);
    if ( v47[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
    if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    v39 = v21;
    goto LABEL_96;
  }
  for ( i = 0; i < v8; ++i )
  {
    v23 = *(_QWORD *)(v19 + 2920);
    v24 = v57[i];
    if ( (unsigned int)v24 >= *(_DWORD *)(v23 + 96) )
    {
      v39 = -1073741811;
      WdLogSingleEntry3(2LL, v24, i, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x at index 0x%I64x) is specified, returning 0x%I64x",
        v57[i],
        i,
        -1073741811LL,
        0LL,
        0LL);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
      MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v56);
      goto LABEL_109;
    }
    v25 = (DISPLAY_SOURCE *)(*(_QWORD *)(v23 + 128) + 4000 * v24);
    if ( v58[i] )
    {
      if ( !v25 || !DISPLAY_SOURCE::CheckSessionOwnership(v25) )
      {
        DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
        MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v56);
        DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v52);
        if ( v47[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
        if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
        v39 = -1071774910;
        goto LABEL_96;
      }
      v26 = DXGDISPLAYMANAGEROBJECT::CheckOwnership(*(struct _LUID *)(v19 + 404), v57[i], v59[i]);
      if ( v26 < 0 )
      {
        WdLogSingleEntry1(2LL, v57[i]);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed DispMgr ownership check on VidPn source 0x%I64x",
          v57[i],
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_119;
      }
    }
  }
  v48 = 0LL;
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                           (struct _LUID *)(v19 + 404),
                                           &v48,
                                           0LL,
                                           0LL,
                                           0);
  if ( CddDeviceAndContextForCurrentSession < 0 )
    WdLogSingleEntry1(4LL, CddDeviceAndContextForCurrentSession);
  v29 = v48;
  if ( v48 )
  {
    DxgkShutdownBootGraphics(v48, 0);
    if ( *((_BYTE *)v29 + 1936) )
    {
      WdLogSingleEntry1(1LL, 3108LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCddDevice->IsVsyncForced() == FALSE",
        3108LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v29 )
    {
      v30 = *((_QWORD *)v18 + 2);
      if ( *((_QWORD *)v29 + 2) != v30 )
        v29 = 0LL;
      v48 = v29;
      if ( v29 )
      {
        if ( *((_QWORD *)v29 + 2) != v30 || *((_QWORD *)v29 + 235) != *((_QWORD *)v18 + 235) )
        {
          WdLogSingleEntry1(1LL, 3123LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pCddDevice == NULL) || ((pCddDevice->GetRenderCore() == pDevice->GetRenderCore()) && (pCddDevice->"
                      "GetDisplayAdapter(VidPnSourceId[0]) == pDevice->GetDisplayAdapter(VidPnSourceId[0])))",
            3123LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *((_BYTE *)v29 + 1937) = 1;
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v51);
      }
    }
  }
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v55, (__int64)v18, 1, v28, 0);
  v26 = COREDEVICEACCESS::AcquireExclusive((__int64)v55, 2LL);
  if ( v26 < 0 )
  {
    if ( v29 )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v51);
      *((_BYTE *)v29 + 1937) = 0;
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
LABEL_119:
    DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
    MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v56);
    DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v52);
    if ( v47[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
    if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
    v39 = v26;
    goto LABEL_96;
  }
  if ( !*(_QWORD *)(v19 + 2920) )
  {
    WdLogSingleEntry1(1LL, 3159LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      3159LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v32 = *(ADAPTER_DISPLAY **)(v19 + 2920);
  LOBYTE(v31) = 0;
  if ( !v8 || v58[0] == D3DKMT_VIDPNSOURCEOWNER_UNOWNED && v8 == 1 && v57[0] < *((_DWORD *)v32 + 24) )
    LOBYTE(v31) = 1;
  if ( (_BYTE)v31 )
  {
    if ( !v8 && (ADAPTER_DISPLAY::IsVidPnSourceOwner(v32, v18) || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v32, v18))
      || v8 == 1
      && (ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)v32, v18, v57[0])
       || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner((DXGADAPTER **)v32, v18, v57[0])) )
    {
      MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v56, v18, 0xFFFFFFFF);
      if ( v8 )
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v32, v18, v57[0]);
        v41 = 1;
      }
      else
      {
        ADAPTER_DISPLAY::ReleaseVidPnSourceOwner(v32, v18);
        v41 = *((_DWORD *)v18 + 473);
      }
      DXGDEVICE::RemoveVidPnOwnership(v18, v41);
      DXGDEVICE::SetSchedulingPriorityAdjustment(v18, 0);
    }
    v34 = v50[0];
    goto LABEL_59;
  }
  if ( g_OSTestSigningEnabled )
  {
    v33 = *((_QWORD *)v18 + 5);
    v31 = *(_DWORD *)(v33 + 424) >> 13;
    if ( (*(_DWORD *)(v33 + 424) & 0x2000) != 0 )
    {
      v40 = v58[0];
      if ( v58[0] == D3DKMT_VIDPNSOURCEOWNER_SHARED )
        v40 = D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE;
      v58[0] = v40;
    }
  }
  v34 = v50[0];
  if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v50[0] + 88LL) + 208LL))(v31, 0LL)
    && (v58[0] != D3DKMT_VIDPNSOURCEOWNER_SHARED && v58[0] != D3DKMT_VIDPNSOURCEOWNER_EMULATED
     || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v34 + 88) + 304LL))(0LL)) )
  {
    MANAGEDPRIMARIESTRACKER::SaveManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v56, 0LL, 0xFFFFFFFF);
    v26 = ADAPTER_DISPLAY::AcquireVidPnSourceOwner(v32, v18, v58, v57, v8, a2);
    if ( v26 < 0 )
      goto LABEL_59;
    switch ( v58[0] )
    {
      case D3DKMT_VIDPNSOURCEOWNER_SHARED:
        goto LABEL_57;
      case D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE:
      case D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI:
        v35 = 7;
        break;
      case D3DKMT_VIDPNSOURCEOWNER_EMULATED:
LABEL_57:
        v35 = 3;
        break;
      default:
        WdLogSingleEntry1(1LL, 3243LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid VidPn source ownership!",
          3243LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v35 = 0;
        break;
    }
    DXGDEVICE::SetSchedulingPriorityAdjustment(v18, v35);
    *((_DWORD *)v18 + 473) += v8;
    goto LABEL_59;
  }
  v26 = -1073741790;
  WdLogSingleEntry1(4LL, -1073741790LL);
LABEL_59:
  v43 = 0;
  v44[0] = 0;
  if ( v26 < 0 )
    goto LABEL_79;
  if ( v29 )
    ADAPTER_DISPLAY::EnsureGdiOutput(v32, v29, (struct COREDEVICEACCESS *)v55, &v43, v44, v46);
  v36 = 1;
  if ( !v43 )
LABEL_79:
    v36 = 0;
  MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState((MANAGEDPRIMARIESTRACKER *)v56, v36);
  COREDEVICEACCESS::Release((COREDEVICEACCESS *)v55);
  if ( v29 )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v51);
    *((_BYTE *)v29 + 1937) = 0;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    v18 = v49;
  }
  if ( v42 )
  {
    v42 = 0;
    DxgkReleaseSessionModeChangeLock();
  }
  if ( v26 >= 0 )
  {
    if ( v44[0] && v43 )
      (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)v18 + 5) + 88LL) + 192LL))();
    (*(void (**)(void))(*(_QWORD *)(v34 + 88) + 344LL))();
    v50[0] = 1LL;
    v50[1] = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)v50, v37, v38) < 0 )
    {
      WdLogSingleEntry1(1LL, 3357LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 3357LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v55);
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v42);
  MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER((MANAGEDPRIMARIESTRACKER *)v56);
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v52);
  if ( v47[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v47);
  if ( v45 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v51);
  return (unsigned int)v26;
}
