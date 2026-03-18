/*
 * XREFs of ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C015FE30
 * Callers:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0002634 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DispBrokerClient@@QEAA@XZ @ 0x1C0002668 (--1DispBrokerClient@@QEAA@XZ.c)
 *     ?CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C00026D8 (-CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C00026F8 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001E3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00823B0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this)
{
  __int64 v2; // rcx
  OUTPUTDUPL_SESSION_MGR *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  struct DXGGLOBAL *Global; // rax
  void *v7; // rcx
  int v8; // eax
  _QWORD *v9; // rcx
  struct _KEVENT *v10; // rcx
  char *v11; // rcx
  void *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx

  v2 = *((_QWORD *)this + 2343);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 2343) = 0LL;
  }
  v3 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2317) = 0LL;
  if ( *((_DWORD *)this + 4738) )
  {
    WdLogSingleEntry1(1LL, 3413LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_cVailGuestReference", 3413LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 2370) )
  {
    WdLogSingleEntry1(1LL, 3414LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"nullptr == m_pVailGuestObject", 3414LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGSESSIONDATA **)this + 2322) != (DXGSESSIONDATA *)((char *)this + 18576) )
  {
    WdLogSingleEntry1(1LL, 3419LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_SessionAdapterListHead)",
      3419LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((DXGSESSIONDATA **)this + 2324) != (DXGSESSIONDATA *)((char *)this + 18592) )
  {
    WdLogSingleEntry1(1LL, 3420LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsListEmpty(&m_SessionViewListHead)",
      3420LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 4630) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *((_WORD *)this + 9317) )
  {
    WdLogSingleEntry1(1LL, 3427LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_NumDeviceInBatch == 0", 3427LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = (void *)*((_QWORD *)this + 2330);
  if ( v4 )
  {
    operator delete[](v4);
    *((_WORD *)this + 9316) = 0;
    *((_QWORD *)this + 2330) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 2331);
  *((_QWORD *)this + 2332) = 0LL;
  ObfDereferenceObject(v5);
  if ( *((_QWORD *)this + 2339) )
  {
    WdLogSingleEntry1(1LL, 3438LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_DwmProcess == nullptr", 3438LL, 0LL, 0LL, 0LL, 0LL);
  }
  Global = DXGGLOBAL_GetGlobal();
  DXGVALIDATION::CleanupForSession((struct DXGGLOBAL *)((char *)Global + 1716), this);
  v7 = (void *)*((_QWORD *)this + 2342);
  if ( v7 )
  {
    operator delete[](v7);
    *((_QWORD *)this + 2342) = 0LL;
    *((_DWORD *)this + 4682) = 0;
  }
LABEL_23:
  v8 = *((_DWORD *)this + 4690);
  while ( v8 )
  {
    v9 = (_QWORD *)(*((_QWORD *)this + 2346) + 32LL * (unsigned int)--v8);
    *((_DWORD *)this + 4690) = v8;
    if ( v9[1] )
    {
      v13 = v9[2];
      if ( *(_QWORD **)(v13 + 8) != v9 + 2 || (v14 = (_QWORD *)v9[3], (_QWORD *)*v14 != v9 + 2) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      --*(_DWORD *)(v9[1] + 4LL);
      goto LABEL_23;
    }
  }
  v10 = (struct _KEVENT *)*((_QWORD *)this + 2344);
  *((_DWORD *)this + 4690) = -1;
  if ( v10 )
  {
    KeSetEvent(v10, 0, 0);
    ObfDereferenceObject(*((PVOID *)this + 2344));
    *((_QWORD *)this + 2344) = 0LL;
  }
  v11 = (char *)*((_QWORD *)this + 2346);
  if ( v11 != (char *)this + 18776 )
    operator delete[](v11);
  v12 = (void *)*((_QWORD *)this + 2394);
  if ( v12 )
    operator delete[](v12);
  if ( RtlNumberOfClearBits((PRTL_BITMAP)((char *)this + 19208)) != 2 )
  {
    WdLogSingleEntry1(1LL, 3494LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"RtlNumberOfClearBits(&m_SessionAdapterOrdinalMap) == (MAX_SESSIONIZED_ADAPTERS_PER_SESSION)",
      3494LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19160));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19088));
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)this + 2385, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 19024));
  DispBrokerClient::~DispBrokerClient((DXGSESSIONDATA *)((char *)this + 18968));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18904));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18664));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16));
}
