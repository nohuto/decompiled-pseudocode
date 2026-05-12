/*
 * XREFs of RaidUnitHierarchicalReset @ 0x1C0061604
 * Callers:
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C0039DCC (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0060770 (RaidHierarchicalResetWorkRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memmove @ 0x1C0023680 (memmove.c)
 *     RaidAdapterResetBus @ 0x1C00379D0 (RaidAdapterResetBus.c)
 *     McTemplateK0zqjuuujsssudxx_EtwWriteTransfer @ 0x1C005CAF8 (McTemplateK0zqjuuujsssudxx_EtwWriteTransfer.c)
 *     RaUnitSetHierarchicalResetSrbTimeoutCountdown @ 0x1C005E6D0 (RaUnitSetHierarchicalResetSrbTimeoutCountdown.c)
 *     RaidUnitResetTarget @ 0x1C0062324 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C00625DC (RaidUnitResetUnit.c)
 *     StorIsEventQueueEmpty @ 0x1C0063550 (StorIsEventQueueEmpty.c)
 */

__int64 __fastcall RaidUnitHierarchicalReset(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r15
  unsigned int v4; // eax
  int v5; // edi
  char v6; // r13
  int v7; // esi
  __int64 v8; // rdi
  char *Pool; // rax
  char *v10; // r12
  unsigned int i; // edx
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax

  LOBYTE(v1) = -1;
  LOBYTE(v3) = -1;
  if ( *(_BYTE *)(a1 + 3280) )
  {
    v4 = *(_DWORD *)(a1 + 3300);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1320);
    if ( v4 < 0x1E )
      v4 = 30;
  }
  v5 = 2 * v4;
  RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 2 * v4);
  v6 = 1;
  v7 = RaidUnitResetUnit(a1);
  if ( v7 < 0 )
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, v5);
    v6 = 2;
    v7 = RaidUnitResetTarget(a1);
    if ( v7 < 0 )
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      v6 = 3;
      if ( *(_BYTE *)(a1 + 3280) && (unsigned __int8)StorIsEventQueueEmpty(*(_QWORD *)(a1 + 504)) )
      {
        v7 = 0;
        v8 = a1 + 24;
      }
      else
      {
        v8 = a1 + 24;
        v7 = RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
        if ( v7 < 0 )
          goto LABEL_26;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 1328));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v8 + 4624LL));
      }
    }
    else
    {
      RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 1328));
      v8 = a1 + 24;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4628LL));
    }
  }
  else
  {
    RaUnitSetHierarchicalResetSrbTimeoutCountdown(a1, 0);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1328));
    v8 = a1 + 24;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 4632LL));
  }
  if ( *(_QWORD *)(a1 + 2296) )
  {
    if ( *(_QWORD *)(a1 + 2320) )
    {
      Pool = (char *)RaidAllocatePool(64LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
      v10 = Pool;
      if ( Pool )
      {
        v1 = 0LL;
        v3 = 0LL;
        memmove(Pool, *(const void **)(a1 + 2296), (unsigned int)Size);
        for ( i = 0; i < g_RaidNumberProcessors; ++i )
        {
          v12 = (unsigned int)qword_1C0092570;
          if ( (_DWORD)qword_1C0092570 )
          {
            v13 = &v10[(unsigned int)dword_1C0092578 * i + 8];
            do
            {
              v1 += *((_QWORD *)v13 + 1);
              v3 += *(_QWORD *)v13;
              v13 += 24;
              --v12;
            }
            while ( v12 );
          }
        }
        v14 = (unsigned int)qword_1C0092570;
        v15 = *(_QWORD **)(a1 + 2320);
        if ( (_DWORD)qword_1C0092570 )
        {
          do
          {
            v1 -= *v15;
            v3 -= v15[1];
            v15 += 3;
            --v14;
          }
          while ( v14 );
        }
        ExFreePoolWithTag(v10, 0x65546152u);
      }
    }
  }
LABEL_26:
  if ( (byte_1C0092A06 & 1) != 0 )
    McTemplateK0zqjuuujsssudxx_EtwWriteTransfer(
      a1 + 169,
      a1 + 160,
      a1 + 2024,
      *(const wchar_t **)(*(_QWORD *)v8 + 4656LL),
      *(_DWORD *)(*(_QWORD *)v8 + 56LL),
      *(_QWORD *)v8 + 5000LL,
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 2024,
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      v6,
      v7,
      v1,
      v3);
  *(_QWORD *)(a1 + 1336) = KeQueryUnbiasedInterruptTime();
  return (unsigned int)v7;
}
