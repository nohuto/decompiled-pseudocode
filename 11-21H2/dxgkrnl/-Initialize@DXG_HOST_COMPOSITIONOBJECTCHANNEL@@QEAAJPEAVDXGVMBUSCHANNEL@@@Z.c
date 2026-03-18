/*
 * XREFs of ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02DFAD0
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C0350B5C (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C004B314 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C0356550 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize(struct _EPROCESS **this, struct DXGVMBUSCHANNEL *a2)
{
  DXGSESSIONMGR *v4; // rbx
  __int64 v5; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _EPROCESS *CurrentProcess; // rax
  int v14; // eax

  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  if ( !SessionDataForSpecifiedSession )
  {
    v10 = -1073741790LL;
LABEL_6:
    WdLogSingleEntry1(3LL, v10);
    return (unsigned int)v10;
  }
  LODWORD(v10) = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, this + 3);
  if ( (int)v10 >= 0 )
  {
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v9, v8, v11, v12);
    this[4] = CurrentProcess;
    ObfReferenceObject(CurrentProcess);
    v14 = DXGVMBUSCHANNEL::RegisterSubscriber(a2, 0x706D6F63u, (struct IDXGCHANNELSUBSCRIBER *)this, this + 1);
    v10 = v14;
    if ( v14 < 0 )
      goto LABEL_6;
  }
  return (unsigned int)v10;
}
