/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C030B034
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x1C02D31C0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C01D2D48 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C01D2D84 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C03876C0 (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C039A9B4 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL *this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  _QWORD *v4; // r15
  ULONG v5; // r12d
  unsigned int v6; // edi
  __int64 v7; // r9
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ebx
  PVOID v12; // rcx
  PVOID *QuadPart; // rsi
  _QWORD *v14; // r14
  _QWORD *v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  char *v18; // r14
  void *v19; // rcx
  int v20; // eax
  __int64 v21; // r13
  PVOID *__attribute__((__org_arrdim(0,0))) v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  const wchar_t *v25; // r9
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  PVOID *__attribute__((__org_arrdim(0,0))) v28; // rax
  PVOID *v29; // rdi
  int v30; // esi
  __int64 v31; // rbx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v32; // r12
  int v33; // eax
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v34; // rdi
  KPROCESSOR_MODE WaitMode; // al
  PVOID *__attribute__((__org_arrdim(0,0))) v36; // r14
  NTSTATUS v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rbx
  const wchar_t *v40; // r9
  signed __int64 v41; // r14
  __int64 v42; // rbx
  _QWORD *v43; // rax
  _QWORD *v44; // rdi
  _QWORD *v45; // rbx
  signed __int64 v46; // rax
  signed __int64 v47; // rtt
  char v48; // al
  bool v49; // zf
  _QWORD *v50; // rax
  ULONG v51; // ecx
  int v52; // eax
  __int64 v53; // rbx
  int v55; // [rsp+50h] [rbp-B0h]
  _QWORD *v56; // [rsp+58h] [rbp-A8h]
  ULONG v57; // [rsp+58h] [rbp-A8h]
  _QWORD *v58; // [rsp+60h] [rbp-A0h]
  PVOID v60; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v61; // [rsp+80h] [rbp-80h]
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v62; // [rsp+88h] [rbp-78h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+90h] [rbp-70h]
  union _LARGE_INTEGER Timeout; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v65[16]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v66; // [rsp+B0h] [rbp-50h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+B8h] [rbp-48h]
  PVOID P; // [rsp+C0h] [rbp-40h]
  _BYTE v69[64]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v70; // [rsp+108h] [rbp+8h]
  PVOID v71; // [rsp+110h] [rbp+10h]
  _BYTE v72[64]; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v73; // [rsp+158h] [rbp+58h]
  PVOID v74; // [rsp+160h] [rbp+60h]
  _BYTE v75[64]; // [rsp+168h] [rbp+68h] BYREF
  unsigned int v76; // [rsp+1A8h] [rbp+A8h]
  PVOID Pool2; // [rsp+1B0h] [rbp+B0h]
  _BYTE v78[64]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v79; // [rsp+1F8h] [rbp+F8h]
  _BYTE v80[144]; // [rsp+200h] [rbp+100h] BYREF
  PVOID v81; // [rsp+290h] [rbp+190h]
  _BYTE v82[384]; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v83; // [rsp+418h] [rbp+318h]
  _BYTE v84[144]; // [rsp+420h] [rbp+320h] BYREF

  v62 = a2;
  v4 = (_QWORD *)((char *)this + 800);
  v66 = a4;
  v55 = 0;
  v5 = 0;
  v6 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v65, (DXGGLOBAL *)((char *)this + 704), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v65);
  v8 = (_QWORD *)*v4;
  while ( v8 != v4 && v8 )
  {
    v9 = v8[349];
    v10 = v6 + 1;
    v8 = (_QWORD *)*v8;
    if ( !v9 )
      v10 = v6;
    v6 = v10;
  }
  if ( !v6 )
  {
    v11 = 0;
    goto LABEL_119;
  }
  Pool2 = 0LL;
  v79 = 0;
  if ( v6 <= 8 )
  {
    Pool2 = v78;
    memset(v78, 0, 8LL * v6);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_14;
    Pool2 = (PVOID)ExAllocatePool2(64LL, 8LL * v6, 1265072196LL, v7);
  }
  v79 = v6;
LABEL_14:
  v81 = 0LL;
  v83 = 0;
  if ( v6 <= 8 )
  {
    v81 = v82;
    memset(v82, 0, 48LL * v6);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 0x30 )
      goto LABEL_19;
    v81 = (PVOID)ExAllocatePool2(64LL, 48LL * v6, 1265072196LL, v7);
  }
  v83 = v6;
LABEL_19:
  v74 = 0LL;
  v76 = 0;
  if ( v6 <= 8 )
  {
    v74 = v75;
    memset(v75, 0, 8LL * v6);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_24;
    v74 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL, v7);
  }
  v76 = v6;
LABEL_24:
  v71 = 0LL;
  v73 = 0;
  if ( v6 <= 8 )
  {
    v71 = v72;
    memset(v72, 0, 8LL * v6);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_29;
    v71 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL, v7);
  }
  v73 = v6;
LABEL_29:
  v70 = 0;
  v12 = 0LL;
  v58 = 0LL;
  P = 0LL;
  if ( v6 <= 8 )
  {
    P = v69;
    memset(v69, 0, 8LL * v6);
    v12 = P;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 8 )
      goto LABEL_34;
    v12 = (PVOID)ExAllocatePool2(256LL, 8LL * v6, 1265072196LL, v7);
    P = v12;
  }
  v58 = v12;
  v70 = v6;
LABEL_34:
  QuadPart = (PVOID *)v71;
  Object = (PVOID *)Pool2;
  WaitBlockArray = (PKWAIT_BLOCK)v81;
  v61 = v74;
  Timeout.QuadPart = (LONGLONG)v71;
  if ( !v74 || !v71 || !Pool2 || !v81 || !v12 )
  {
    WdLogSingleEntry1(2LL, 3858LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate per-adapter array memory in PollDisplayChildrenAll",
      3858LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v11 = -1073741801;
    goto LABEL_103;
  }
  v14 = (_QWORD *)*v4;
  while ( v14 != v4 && v14 )
  {
    if ( v5 >= v6 )
    {
      WdLogSingleEntry1(1LL, 3869LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumAdapters < MaxNumAdapters", 3869LL, 0LL, 0LL, 0LL, 0LL);
    }
    v15 = v14;
    v14 = (_QWORD *)*v14;
    v56 = v14;
    _m_prefetchw(v15 + 3);
    v16 = v15[3];
    while ( v16 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64(v15 + 3, v16 + 1, v16);
      if ( v17 == v16 )
      {
        LOBYTE(v16) = 1;
        break;
      }
    }
    if ( (_BYTE)v16 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v80, (struct DXGADAPTER *const)v15, 0LL);
      v18 = 0LL;
      v60 = 0LL;
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
      if ( v15[349] && (int)COREADAPTERACCESS::AcquireExclusive((__int64)v80) >= 0 )
      {
        v19 = (void *)v15[27];
        v61[v5] = v19;
        ObfReferenceObject(v19);
        if ( (*((_DWORD *)v62 + 1) & 2) == 0 )
          goto LABEL_53;
        v20 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v15, &v60);
        v18 = (char *)v60;
        v21 = v20;
        if ( v20 >= 0 )
        {
          v22 = Object;
          QuadPart[v5] = v60;
          v22[v5] = v18 + 24;
LABEL_53:
          if ( (*((_DWORD *)v62 + 1) & 4) != 0 )
          {
            v23 = DmmEnableModeResetOnMonitorEvent(v15, 0);
            LODWORD(v21) = v23;
            if ( v23 >= 0 )
            {
              v58[v5] = v15;
              goto LABEL_56;
            }
            v24 = v23;
            WdLogSingleEntry1(2LL, v23);
            v25 = L"Failed in disabling mode reset on monitor event (Status == 0x%I64x)!";
LABEL_64:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v25, v24, 0LL, 0LL, 0LL, 0LL);
            v26 = v61;
            v55 = v21;
            ObfDereferenceObject((PVOID)v61[v5]);
            v26[v5] = 0LL;
            if ( v18 )
            {
              MonitorReleaseMonitorPendingEvent(v18, v27);
              v28 = Object;
              QuadPart[v5] = 0LL;
              v28[v5] = 0LL;
            }
          }
          else
          {
LABEL_56:
            ++v5;
          }
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v80);
          goto LABEL_58;
        }
        if ( v60 )
        {
          WdLogSingleEntry1(1LL, 3926LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pMonitorPendingEvent == NULL",
            3926LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v24 = v21;
        WdLogSingleEntry1(2LL, v21);
        v25 = L"Failed in acquiring monitor pending event (Status == 0x%I64x)!";
        goto LABEL_64;
      }
LABEL_58:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v80);
      v14 = v56;
    }
  }
  v57 = v5;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v65);
  if ( v5 )
  {
    v29 = (PVOID *)v61;
    v30 = v55;
    v31 = v5;
    v32 = v66;
    do
    {
      v33 = DpiPollDisplayChildren(*v29, a3, v32);
      if ( v33 < 0 )
        v30 = v33;
      ObfDereferenceObject(*v29);
      *v29++ = 0LL;
      --v31;
    }
    while ( v31 );
    v5 = v57;
    v55 = v30;
    QuadPart = (PVOID *)Timeout.QuadPart;
  }
  v34 = v62;
  if ( (*((_DWORD *)v62 + 1) & 2) != 0 && v5 )
  {
    Timeout.QuadPart = -10000000LL;
    WaitMode = ExGetPreviousMode();
    v36 = Object;
    v37 = KeWaitForMultipleObjects(v5, Object, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
    if ( v37 == 258 )
    {
      v55 = 258;
      v39 = 4015LL;
      WdLogSingleEntry1(2LL, 4015LL);
      v40 = L"Monitor pending event wait has been timeouted!";
      goto LABEL_78;
    }
    if ( v37 < 0 )
    {
      v55 = v37;
      v39 = v37;
      WdLogSingleEntry1(2LL, v37);
      v40 = L"Failed in waiting for pending monitor event (Status == 0x%I64x)!";
LABEL_78:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v40, v39, 0LL, 0LL, 0LL, 0LL);
    }
    v41 = (char *)v36 - (char *)QuadPart;
    v42 = v5;
    do
    {
      MonitorReleaseMonitorPendingEvent(*QuadPart, v38);
      *QuadPart = 0LL;
      *(PVOID *)((char *)QuadPart++ + v41) = 0LL;
      --v42;
    }
    while ( v42 );
  }
  if ( (*((_DWORD *)v34 + 1) & 4) != 0 && v5 )
  {
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v65);
    v43 = v4;
    v44 = (_QWORD *)*v4;
    while ( v44 != v43 && v44 )
    {
      v45 = v44;
      v44 = (_QWORD *)*v44;
      _m_prefetchw(v45 + 3);
      v46 = v45[3];
      do
      {
        if ( !v46 )
        {
          v48 = 0;
          goto LABEL_90;
        }
        v47 = v46;
        v46 = _InterlockedCompareExchange64(v45 + 3, v46 + 1, v46);
      }
      while ( v47 != v46 );
      v48 = 1;
LABEL_90:
      v49 = v48 == 0;
      v43 = v4;
      if ( !v49 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v84, (struct DXGADAPTER *const)v45, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v45);
        v50 = v58;
        v51 = 0;
        while ( (_QWORD *)*v50 != v45 )
        {
          ++v51;
          ++v50;
          if ( v51 >= v5 )
            goto LABEL_100;
        }
        if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v84) >= 0 )
        {
          v52 = DmmEnableModeResetOnMonitorEvent(v45, 1u);
          if ( v52 < 0 )
          {
            v53 = v52;
            WdLogSingleEntry1(2LL, v52);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to re-eanble mode reset on monitor event (Status == 0x%I64x)!",
              v53,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v84);
        }
LABEL_100:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v84);
        v43 = v4;
      }
    }
  }
  v11 = v55;
LABEL_103:
  if ( P != v69 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v70 = 0;
  if ( v71 != v72 && v71 )
    ExFreePoolWithTag(v71, 0);
  v71 = 0LL;
  v73 = 0;
  if ( v74 != v75 && v74 )
    ExFreePoolWithTag(v74, 0);
  v74 = 0LL;
  v76 = 0;
  if ( v81 != v82 && v81 )
    ExFreePoolWithTag(v81, 0);
  v81 = 0LL;
  v83 = 0;
  if ( Pool2 != v78 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  Pool2 = 0LL;
  v79 = 0;
LABEL_119:
  if ( v65[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v65);
  return v11;
}
