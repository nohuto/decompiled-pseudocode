/*
 * XREFs of DxgkDispMgrOperation @ 0x1C01E21B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C0187A48 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01E237C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1C01E270C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkDispMgrOperation(_OWORD *a1)
{
  ULONG64 v2; // rcx
  __int64 v3; // rsi
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGPROCESS *Current; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // eax
  HANDLE Handle[2]; // [rsp+50h] [rbp-28h]
  HANDLE v18[2]; // [rsp+60h] [rbp-18h]
  PVOID v19; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v2 = (ULONG64)(a1 + 2);
  if ( v2 < (unsigned __int64)a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *a1;
  *(_OWORD *)v18 = a1[1];
  Object = 0LL;
  LODWORD(v3) = ObReferenceObjectByHandleWithTag(
                  Handle[1],
                  0x20000u,
                  g_pDxgkDisplayManagerObjectType,
                  1,
                  0x4B677844u,
                  &Object,
                  0LL);
  if ( (int)v3 < 0 )
  {
    WdLogSingleEntry1(3LL, Handle[1]);
    goto LABEL_17;
  }
  if ( !*(_QWORD *)Object )
  {
    WdLogSingleEntry1(3LL, 859LL);
    goto LABEL_20;
  }
  if ( LODWORD(Handle[0]) != 1 )
  {
LABEL_20:
    LODWORD(v3) = -1073741811;
    goto LABEL_17;
  }
  v19 = 0LL;
  v4 = ObReferenceObjectByHandleWithTag(v18[0], 0x1F0001u, LpcPortObjectType, 1, 0x4B677844u, &v19, 0LL);
  LODWORD(v3) = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(3LL, v18[0], v4);
  }
  else if ( LODWORD(v18[1]) )
  {
    SessionDataForSpecifiedSession = (struct DXGSESSIONDATA *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         SessionDataForSpecifiedSession,
                                         CurrentProcessSessionId);
    }
    Current = DXGPROCESS::GetCurrent(v5);
    if ( !Current
      || !SessionDataForSpecifiedSession
      || (*((_DWORD *)Current + 106) & 4) == 0 && !*((_BYTE *)SessionDataForSpecifiedSession + 18500) )
    {
      WdLogSingleEntry1(3LL, 883LL);
      NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v19);
      LODWORD(v3) = -1073741790;
      goto LABEL_17;
    }
    v9 = DXGSESSIONDATA::ConnectSessionDisplayBroker(SessionDataForSpecifiedSession);
    v3 = v9;
    if ( v9 < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v10);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      WdLogSingleEntry2(2LL, v3, ProcessSessionId);
      v15 = PsGetCurrentProcess(v14);
      v16 = PsGetProcessSessionId(v15);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to connect to session broker with status 0x%I64x in session 0x%I64x",
        v3,
        v16,
        0LL,
        0LL,
        0LL);
    }
  }
  NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&v19);
LABEL_17:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v3;
}
