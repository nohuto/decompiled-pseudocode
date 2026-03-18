/*
 * XREFs of ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C02BB170
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716___ @ 0x1C002C8F0 (DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716___.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgIsRemoteSession@@YAHXZ @ 0x1C01C0A44 (-DxgIsRemoteSession@@YAHXZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C01DB11C (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     _lambda_d80ae1be2ed16c50038304b59cdfb672_::operator() @ 0x1C02B9878 (_lambda_d80ae1be2ed16c50038304b59cdfb672_--operator().c)
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x1C02BB444 (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C02D4418 (DxgkSetIndirectDisplayRenderAdapter.c)
 */

__int64 DxgkpProcessBddFallbackRequest(void)
{
  unsigned int v0; // edi
  struct DXGGLOBAL *Global; // rbx
  bool v2; // zf
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v16; // rax
  struct DXGGLOBAL *v17; // rax
  unsigned int v18; // esi
  struct DXGADAPTER **v19; // rbx
  int v20; // [rsp+50h] [rbp-49h] BYREF
  struct _LUID v21; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v22[2]; // [rsp+60h] [rbp-39h] BYREF
  __int128 *v23; // [rsp+68h] [rbp-31h]
  __int128 v24; // [rsp+70h] [rbp-29h] BYREF
  bool *v25; // [rsp+80h] [rbp-19h]
  int *v26; // [rsp+88h] [rbp-11h]
  int *v27[4]; // [rsp+90h] [rbp-9h] BYREF
  char v28; // [rsp+B0h] [rbp+17h]
  bool v29; // [rsp+108h] [rbp+6Fh] BYREF
  int v30; // [rsp+110h] [rbp+77h] BYREF
  int v31; // [rsp+118h] [rbp+7Fh] BYREF

  if ( *((_BYTE *)DXGGLOBAL_GetGlobal() + 304514) || *((_BYTE *)DXGGLOBAL_GetGlobal() + 304512) )
    return 0LL;
  WdLogSingleEntry1(1LL, 12746LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"Investigate why DWM failed to initialize, contact basevid",
    12746LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v0 = -1073741823;
  v30 = 1;
  v31 = -1073741823;
  v20 = 0;
  Global = DXGGLOBAL_GetGlobal();
  v2 = *((_QWORD *)Global + 125) == *((_QWORD *)DXGGLOBAL_GetGlobal() + 124);
  *(_QWORD *)&v24 = &v31;
  *((_QWORD *)&v24 + 1) = &v30;
  v29 = v2;
  v25 = &v29;
  v26 = &v20;
  DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716_((__int64)v27, &v24);
  v6 = 2;
  if ( ((dword_1C0130A00 - 10) & 0xFFFFFFF9) == 0 && dword_1C0130A00 != 12 )
  {
    v0 = -1073741637;
LABEL_19:
    v31 = v0;
LABEL_22:
    v30 = v6;
    goto LABEL_10;
  }
  if ( (unsigned int)DxgIsRemoteSession((unsigned int)dword_1C0130A00, v3, v4, v5) )
  {
    if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v8, v7, v9, v10) )
    {
      v20 = 2;
      v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
      if ( v13 )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
        if ( SessionDataForSpecifiedSession )
          *((_BYTE *)SessionDataForSpecifiedSession + 18505) = 0;
      }
      v16 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 123);
      if ( !v16 )
      {
        v0 = -1073741275;
        goto LABEL_19;
      }
      v21 = *(struct _LUID *)(v16 + 404);
      v23 = &v24;
      v22[0] = 0;
      v22[1] = 1;
      v17 = DXGGLOBAL_GetGlobal();
      v6 = 4;
      v31 = DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)v17,
              (__int64 (__fastcall *)(_QWORD *, __int64))DxgkpAdapterRefCallback,
              (__int64)v22,
              4LL);
      if ( v31 < 0 )
      {
        WdLogSingleEntry1(1LL, 12831LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"As we do not support more than one remote ID adapter we would not expect the search to fail",
          12831LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v0 = v31;
        goto LABEL_22;
      }
      if ( !v22[0] )
      {
        v0 = -1073741275;
        v30 = 6;
        goto LABEL_9;
      }
      v18 = 0;
      do
      {
        v19 = (struct DXGADAPTER **)&v23[v18];
        v31 = DxgkSetIndirectDisplayRenderAdapter(*v19, &v21);
        DXGADAPTER::ReleaseReference(*v19);
        ++v18;
      }
      while ( v18 < v22[0] );
    }
    else
    {
      v20 = 3;
      if ( v29 )
        goto LABEL_8;
    }
    v30 = 7;
    goto LABEL_9;
  }
  v20 = 1;
LABEL_8:
  v0 = DxgkpStopRenderAndSessionDisplayAdapters((enum _DXGK_DIAG_BDD_FALLBACK_STAGE *)&v30);
LABEL_9:
  v31 = v0;
LABEL_10:
  if ( v28 )
    lambda_d80ae1be2ed16c50038304b59cdfb672_::operator()(v27);
  return v0;
}
