/*
 * XREFs of RaidRemoveIoQueue @ 0x1C001EE2C
 * Callers:
 *     RaidUnitCancelPendingRequests @ 0x1C001EDF4 (RaidUnitCancelPendingRequests.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0051348 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C00513D4 (RaUnitFlushQueueSrb.c)
 * Callees:
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00225D4 (RaidGetQosEntryForDeviceEntry.c)
 */

__int64 *__fastcall RaidRemoveIoQueue(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  KIRQL v6; // r8
  _QWORD *v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  bool v14; // zf
  __int64 v15; // rcx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v3 = (_QWORD *)(a1 + 112);
  v4 = 0LL;
  v5 = *(__int64 **)(a1 + 112);
  v6 = v2;
  if ( v5 == (__int64 *)(a1 + 112) )
  {
    v7 = (_QWORD *)(a1 + 96);
    v5 = *(__int64 **)(a1 + 96);
    if ( v5 == (__int64 *)(a1 + 96) )
    {
LABEL_3:
      v5 = 0LL;
      goto LABEL_4;
    }
    if ( (_QWORD *)v5[1] != v7 )
      goto LABEL_23;
    v10 = *v5;
    if ( *(__int64 **)(*v5 + 8) != v5 )
      goto LABEL_23;
    *v7 = v10;
    *(_QWORD *)(v10 + 8) = v7;
  }
  else
  {
    if ( (_QWORD *)v5[1] != v3 )
      goto LABEL_23;
    v9 = *v5;
    if ( *(__int64 **)(*v5 + 8) != v5 )
      goto LABEL_23;
    *v3 = v9;
    *(_QWORD *)(v9 + 8) = v3;
  }
  if ( !v5 )
    goto LABEL_3;
  if ( (*((_BYTE *)v5 + 22) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v5);
    v12 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
    {
      v13 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( (_QWORD *)*v13 == QosEntryForDeviceEntry )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        goto LABEL_18;
      }
    }
LABEL_23:
    __fastfail(3u);
  }
LABEL_18:
  v14 = (*((_BYTE *)v5 + 22) & 6) == 0;
  *((_BYTE *)v5 + 20) = 0;
  if ( v14 )
    --*(_DWORD *)(a1 + 32);
  else
    --*(_DWORD *)(a1 + 36);
  if ( (*((_BYTE *)v5 + 22) & 8) != 0 )
    --*(_DWORD *)(a1 + 40);
LABEL_4:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v6);
  if ( v5 )
  {
    v4 = v5 - 15;
    v15 = *(_QWORD *)(v5[8] + 8);
    if ( *(_BYTE *)(v15 + 2) != 40 )
      *(_QWORD *)(v15 + 56) = *(_QWORD *)(v15 + 40);
  }
  return v4;
}
