/*
 * XREFs of ?ndisPeriodicReceivesLearning@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C00373CC
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0013730 (NdisMIndicateReceiveNetBufferLists.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     McTemplateK0qqqqqqqq_EtwWriteTransfer @ 0x1C00ABD50 (McTemplateK0qqqqqqqq_EtwWriteTransfer.c)
 */

void __fastcall ndisPeriodicReceivesLearning(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        union _LARGE_INTEGER *a3)
{
  ULONG v4; // edi
  unsigned int v5; // r12d
  PNDIS_PER_PROCESSOR_SLOT__ *v7; // rsi
  __int64 v8; // rbx
  int v9; // r15d
  ULONG v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int Number; // ecx
  int v14; // r9d
  struct _KDPC_WATCHDOG_INFORMATION v16; // [rsp+68h] [rbp-50h] BYREF

  v4 = 512;
  LOBYTE(v5) = 0;
  memset(&v16, 0, sizeof(v16));
  v7 = (PNDIS_PER_PROCESSOR_SLOT__ *)((char *)a1->PeriodicReceivesNblCountIndex + (KeGetPcr()->Prcb.Number << 12));
  v8 = *(_DWORD *)v7;
  v9 = ndisPeriodicReceivesNblCounts[v8];
  if ( KeQueryDpcWatchdogInformation(&v16) >= 0 )
  {
    if ( v16.DpcTimeLimit )
      v4 = v9 * (1024 - (v16.DpcTimeCount << 10) / v16.DpcTimeLimit) / a2;
    if ( v16.DpcWatchdogLimit )
    {
      v10 = (v16.DpcWatchdogCount << 10) / v16.DpcWatchdogLimit;
      if ( v10 > 0x200 )
        v10 = 1024;
      v5 = v9 * (1024 - v10) / a2;
    }
  }
  v11 = v8 + 1;
  if ( (unsigned int)(v8 + 1) < 0xB && v4 < 0x200 || (_DWORD)v8 && v4 > 0x300 && (v11 = v8 - 1, (_DWORD)v8 != 12) )
  {
    *(_DWORD *)v7 = v11;
    if ( (byte_1C00F7645 & 2) != 0 )
    {
      v12 = v11;
      Number = KeGetPcr()->Prcb.Number;
      v14 = (a1->NetLuid.Value >> 24) & 0xFFFFFF;
      McTemplateK0qqqqqqqq_EtwWriteTransfer(
        Number,
        v14,
        (_DWORD)a1 + 4008,
        v14,
        Number,
        a2,
        a3->LowPart,
        ndisPeriodicReceivesNblCounts[v8],
        ndisPeriodicReceivesNblCounts[v12],
        v4,
        v5);
    }
  }
}
