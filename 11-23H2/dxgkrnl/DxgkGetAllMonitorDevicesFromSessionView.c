/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C01AB024
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01AAA60 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0001880 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EE4 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B020 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGSYNCOBJECTMUTEX@@QEAA@XZ @ 0x1C0015690 (--1DXGSYNCOBJECTMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C004ABF8 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C019D74C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C019E0C4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C01AB278 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C01DCB78 (MonitorIsMonitorConnected.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C03131C4 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 v5; // r12
  unsigned int v6; // r13d
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 CurrentProcessSessionId; // rdi
  DXGSESSIONDATA *v11; // rbx
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  _QWORD *v13; // rdx
  _QWORD *i; // rax
  _QWORD *v15; // rcx
  DXGSESSIONDATA **v16; // rdi
  __int64 v17; // rsi
  DXGFASTMUTEX *v18; // rdx
  DXGSESSIONDATA *v19; // rcx
  char *v20; // rsi
  bool v21; // zf
  __int64 v22; // rbx
  char v23; // al
  __int64 v24; // rcx
  DXGFASTMUTEX *v25; // rcx
  bool v26; // cf
  unsigned int v28; // eax
  unsigned int *v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // r8
  __int64 IsMonitorConnected; // rdi
  __int64 v36; // rcx
  __int64 v37; // rax
  bool v38; // al
  __int64 v39; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v41; // r8d
  DXGADAPTERSOURCEHASH *v42; // rcx
  __int64 v43; // rax
  int HashForAdapterAndSource; // eax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // eax
  DXGADAPTERSOURCEHASH *v49; // rcx
  char HashBitShift; // di
  int HashBitMask; // eax
  __int64 v52; // rbx
  __int64 v53; // r10
  const wchar_t *v54; // r9
  unsigned int v55; // eax
  __int64 v56; // rcx
  unsigned int v57; // eax
  char v58[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v59; // [rsp+54h] [rbp-ACh] BYREF
  DXGFASTMUTEX *v60; // [rsp+58h] [rbp-A8h] BYREF
  char v61; // [rsp+60h] [rbp-A0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v62[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v63; // [rsp+70h] [rbp-90h] BYREF
  __int64 v64; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+80h] [rbp-80h]
  unsigned int v66; // [rsp+88h] [rbp-78h]
  unsigned int *v67; // [rsp+90h] [rbp-70h]
  _BYTE v68[144]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a2;
  v6 = 0;
  v66 = a2;
  v64 = a5;
  v67 = a4;
  v65 = a3;
  v9 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v9 )
    goto LABEL_63;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v8);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v60, (struct DXGFASTMUTEX *const)(v9 + 88), 0);
  if ( v61 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v60, 0LL, 0LL);
  DXGFASTMUTEX::Acquire(v60);
  v61 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v9 + 80) )
  {
    DXGSYNCOBJECTMUTEX::~DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)&v60);
    v11 = 0LL;
  }
  else
  {
    _mm_lfence();
    v11 = *(DXGSESSIONDATA **)(*(_QWORD *)(v9 + 48) + 8 * CurrentProcessSessionId);
    v61 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v60);
  }
  if ( !v11 )
  {
LABEL_63:
    v55 = PsGetCurrentProcessSessionId(v8);
    LODWORD(IsMonitorConnected) = -1073741811;
    WdLogSingleEntry2(2LL, v55, -1073741811LL);
    v57 = PsGetCurrentProcessSessionId(v56);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
      v57,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)IsMonitorConnected;
  }
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(v11, a1);
  if ( !SessionAdapterFromLuid )
    goto LABEL_62;
  v13 = (_QWORD *)((char *)SessionAdapterFromLuid + 112);
  for ( i = (_QWORD *)*((_QWORD *)SessionAdapterFromLuid + 14); i != v13; i = (_QWORD *)*i )
  {
    v15 = i - 4;
    if ( *((_DWORD *)i - 4) == (_DWORD)v5 )
      goto LABEL_11;
  }
  v15 = 0LL;
LABEL_11:
  if ( !v15 )
  {
LABEL_62:
    v17 = v5;
    WdLogSingleEntry4(3LL, v5, a1->HighPart, a1->LowPart, v11);
    goto LABEL_31;
  }
  v16 = (DXGSESSIONDATA **)v15[6];
  if ( v16 && *v16 != v11 )
  {
    WdLogSingleEntry1(1LL, 4189LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pSessionView == NULL) || (&pSessionView->GetOwnedSession() == this)",
      4189LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_15;
  }
  v17 = v5;
  if ( !v16 )
  {
LABEL_31:
    v28 = PsGetCurrentProcessSessionId(v15);
    WdLogSingleEntry4(4LL, v17, a1->HighPart, a1->LowPart, v28);
    v29 = v67;
    *(_BYTE *)v65 = 1;
    *v29 = 0;
    return 0LL;
  }
LABEL_15:
  v18 = (DXGFASTMUTEX *)(v16 + 6);
  v19 = v16[6];
  v20 = 0LL;
  v21 = *(_QWORD *)v18 == (_QWORD)v18;
  v60 = (DXGFASTMUTEX *)(v16 + 6);
  if ( !v21 )
    v20 = (char *)v19 - 56;
  if ( !v20 )
  {
    WdLogSingleEntry1(1LL, 1196LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplaySource != NULL", 1196LL, 0LL, 0LL, 0LL, 0LL);
    v18 = v60;
  }
  v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL) + 404LL);
  if ( *((_DWORD *)v20 + 4) != (_DWORD)v5 || a1->LowPart != (_DWORD)v22 || (v23 = 1, a1->HighPart != HIDWORD(v22)) )
    v23 = 0;
  *(_BYTE *)v65 = v23;
  while ( *((_DWORD *)v20 + 4) == v66 )
  {
    v24 = *(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL);
    if ( a1->LowPart != *(_DWORD *)(v24 + 404) || a1->HighPart != *(_DWORD *)(v24 + 408) )
      break;
LABEL_26:
    v25 = (DXGFASTMUTEX *)*((_QWORD *)v20 + 7);
    v20 = 0LL;
    if ( v25 != v18 )
      v20 = (char *)v25 - 56;
    if ( !v20 )
    {
      v26 = *v67 < v6;
      *v67 = v6;
      return v26 ? 0x80000005 : 0;
    }
  }
  v30 = *((_QWORD *)v20 + 1);
  v59 = 0;
  v62[0] = D3DKMDT_VOT_HD15;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v68, *(struct DXGADAPTER *const *)(v30 + 16), 0LL);
  v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v68, 0LL);
  v32 = *((_QWORD *)v20 + 1);
  if ( v31 < 0 )
  {
    WdLogSingleEntry3(
      4LL,
      *(int *)(*(_QWORD *)(v32 + 16) + 408LL),
      *(unsigned int *)(*(_QWORD *)(v32 + 16) + 404LL),
      v31);
LABEL_55:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
    goto LABEL_56;
  }
  if ( !*(_BYTE *)(v32 + 290) )
  {
    WdLogSingleEntry1(1LL, 1242LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplaySource->GetDisplayCore()->IsVirtualTopologyEnabled()",
      1242LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !v64 || v6 >= *v67 )
  {
LABEL_54:
    ++v6;
    goto LABEL_55;
  }
  if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
              *(_QWORD **)(*((_QWORD *)v20 + 1) + 16LL),
              *((_DWORD *)v20 + 4),
              1LL,
              &v59) < 0
    || v59 != -1 )
  {
    WdLogSingleEntry1(1LL, 1260LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"NT_SUCCESS(DmmEnumClientVidPnPathTargetsFromSource( pDisplaySource->GetAdapter(), pDisplaySource->GetVidP"
                "nSourceId(), 1, &VidPnTargetId)) && (VidPnTargetId == D3DDDI_ID_UNINITIALIZED)",
      1260LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v33 = DmmEnumClientVidPnPathTargetsFromSource(
          *(_QWORD **)(*((_QWORD *)v20 + 1) + 16LL),
          *((_DWORD *)v20 + 4),
          0LL,
          &v59);
  LODWORD(IsMonitorConnected) = v33;
  if ( v33 >= 0 )
  {
    v36 = *(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL);
    if ( v59 == -1 )
    {
      LODWORD(IsMonitorConnected) = -1073741811;
      WdLogSingleEntry4(
        2LL,
        *((unsigned int *)v20 + 4),
        *(int *)(v36 + 408),
        *(unsigned int *)(v36 + 404),
        -1073741811LL);
      v54 = L"Cannot find the attached target from VidPn source 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
      v52 = -1073741811LL;
      goto LABEL_60;
    }
    v58[0] = 0;
    LOBYTE(v34) = 1;
    IsMonitorConnected = (int)MonitorIsMonitorConnected(v36, v59, v34, v58);
    v37 = *((_QWORD *)v20 + 1);
    if ( (int)IsMonitorConnected < 0 )
    {
      v52 = IsMonitorConnected;
      WdLogSingleEntry4(
        2LL,
        v59,
        *(int *)(*(_QWORD *)(v37 + 16) + 408LL),
        *(unsigned int *)(*(_QWORD *)(v37 + 16) + 404LL),
        IsMonitorConnected);
      v53 = v59;
      v54 = L"Failed to check monitor connection to target 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
      goto LABEL_61;
    }
    if ( !v58[0] )
    {
      WdLogSingleEntry4(
        4LL,
        v59,
        *(int *)(*(_QWORD *)(v37 + 16) + 408LL),
        *(unsigned int *)(*(_QWORD *)(v37 + 16) + 404LL),
        IsMonitorConnected);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
LABEL_56:
      v18 = v60;
      goto LABEL_26;
    }
    DmmGetVideoOutputTechnology(*(_QWORD **)(v37 + 16), v59, v62, 0LL);
    v65 = 5LL * v6;
    v38 = IsInternalVideoOutput(v62[0]);
    v39 = v64;
    v63 = 0;
    *(_BYTE *)(v64 + 20LL * v6 + 16) = v38;
    *(_DWORD *)(v39 + 20LL * v6) = 536870913;
    Global = DXGGLOBAL::GetGlobal();
    v41 = *((_DWORD *)v20 + 4);
    v42 = (struct DXGGLOBAL *)((char *)Global + 1384);
    v43 = *((_QWORD *)v20 + 1);
    *(_QWORD *)v62 = v42;
    HashForAdapterAndSource = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                v42,
                                (const struct _LUID *)(*(_QWORD *)(v43 + 16) + 404LL),
                                v41,
                                &v63);
    if ( HashForAdapterAndSource >= 0 )
    {
      v49 = *(DXGADAPTERSOURCEHASH **)v62;
      *(_QWORD *)(v64 + 20LL * v6 + 8) = v22;
      HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v49);
      HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(*(DXGADAPTERSOURCEHASH **)v62);
      v47 = v65;
      v48 = (v63 << HashBitShift) + (v59 & ~HashBitMask);
      v46 = v64;
    }
    else
    {
      v45 = HashForAdapterAndSource;
      WdLogSingleEntry4(
        2LL,
        *((unsigned int *)v20 + 4),
        *(int *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL) + 408LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL) + 404LL),
        HashForAdapterAndSource);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find hash for VidPn source (0x%I64x) on adapter (0x%I64x%08I64x), status 0x%lx",
        *((unsigned int *)v20 + 4),
        *(int *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL) + 408LL),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL) + 404LL),
        v45,
        0LL);
      v46 = v64;
      v47 = v65;
      *(_QWORD *)(v64 + 4 * v65 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL) + 404LL);
      v48 = v59;
    }
    *(_DWORD *)(v46 + 4 * v47 + 4) = v48;
    goto LABEL_54;
  }
  v52 = v33;
  WdLogSingleEntry4(
    2LL,
    *((unsigned int *)v20 + 4),
    *(int *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL) + 408LL),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL) + 404LL),
    v33);
  v54 = L"Failed to get the attached target from VidPn source 0x%I64x on adapter (0x%I64x%08I64x), returning 0x%I64x.";
LABEL_60:
  v53 = *((unsigned int *)v20 + 4);
LABEL_61:
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)v54,
    v53,
    *(int *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL) + 408LL),
    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v20 + 1) + 16LL) + 404LL),
    v52,
    0LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
  return (unsigned int)IsMonitorConnected;
}
