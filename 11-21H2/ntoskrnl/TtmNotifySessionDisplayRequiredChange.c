/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x1409A4620
 * Callers:
 *     PopPowerRequestCallbackDisplayRequired @ 0x1407F2D00 (PopPowerRequestCallbackDisplayRequired.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     PoSessionEngagementUpdate @ 0x1405DC12C (PoSessionEngagementUpdate.c)
 *     TtmpAcquireSessionById @ 0x1409A5200 (TtmpAcquireSessionById.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1409A6030 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmiLogError @ 0x1409A8628 (TtmiLogError.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x1409A9718 (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x1409A98A4 (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(unsigned int a1, unsigned int a2, char a3)
{
  unsigned int v4; // ebp
  bool v6; // si
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v17; // eax
  char v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0LL;
  v4 = 0;
  v19 = 0;
  v6 = 0;
  v7 = TtmpAcquireSessionById(&v20, a1);
  v9 = v20;
  v10 = v7;
  if ( v7 < 0 )
  {
    v11 = (unsigned int)v7;
    v12 = 3849LL;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v12, v11, 0xFFFFFFFFLL);
    goto LABEL_11;
  }
  LOBYTE(v8) = a3;
  TtmpUpdateDisplayRequiredPowerRequest(v20, a2, v8);
  v13 = *(_DWORD *)(v9 + 20);
  if ( !a3 )
  {
    if ( !v13 )
    {
      v10 = -1073741811;
      v12 = 3881LL;
      v11 = 3221225485LL;
      goto LABEL_3;
    }
    v14 = v13 - 1;
    *(_DWORD *)(v9 + 20) = v14;
    v6 = v14 == 0;
LABEL_8:
    v10 = 0;
    if ( !v6 )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( v13 == -1 )
  {
    v10 = -1073741675;
    v12 = 3901LL;
    v11 = 3221225621LL;
    goto LABEL_3;
  }
  v17 = v13 + 1;
  *(_DWORD *)(v9 + 20) = v17;
  if ( v17 != 1 )
    goto LABEL_8;
  v6 = 1;
LABEL_9:
  v10 = 0;
  if ( *(_DWORD *)(v9 + 20) )
    v19 = 1;
LABEL_11:
  if ( v9 )
  {
    v4 = *(_DWORD *)(v9 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISPLAY_REQUEST_ACTIVE, (__int64)&v19);
    LOBYTE(v15) = v19;
    PoSessionEngagementUpdate(v15);
  }
  if ( a3 )
    return TtmiLogSessionDisplayRequiredReference(a1, v4, v10);
  else
    return TtmiLogSessionDisplayRequiredDereference(a1, v4, v10);
}
