/*
 * XREFs of RaidCoalescingCallback @ 0x1C003A560
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0024800 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0024824 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidAdapterSystemPowerHintsEnabled @ 0x1C002484A (RaidAdapterSystemPowerHintsEnabled.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0033820 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

char __fastcall RaidCoalescingCallback(int a1, __int64 a2, __int64 a3)
{
  int IsAdapterControlSupported; // eax
  __int64 v6; // rcx
  int SystemPowerHint; // eax
  int v8; // eax
  char SystemPowerResumeLatency; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // r9
  unsigned __int64 v19; // rcx

  IsAdapterControlSupported = RaidIsAdapterControlSupported(a3, 12);
  if ( IsAdapterControlSupported )
  {
    LOBYTE(IsAdapterControlSupported) = RaidAdapterSystemPowerHintsEnabled((_QWORD *)a3);
    if ( (_BYTE)IsAdapterControlSupported )
    {
      SystemPowerHint = RaidAdapterGetSystemPowerHint(v6);
      LOBYTE(IsAdapterControlSupported) = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
      if ( a1 == 1 )
      {
        *(_BYTE *)(a3 + 108) |= 2u;
        v8 = RaidAdapterGetSystemPowerHint(a3);
        SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v8);
        if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(
            v11,
            v10,
            v12,
            *(_DWORD *)(a3 + 56),
            v10,
            v12,
            v13,
            SystemPowerResumeLatency);
        LOBYTE(IsAdapterControlSupported) = MEMORY[0xFFFFF78000000008];
        *(_QWORD *)(a3 + 5160) = MEMORY[0xFFFFF78000000008];
      }
      else if ( a1 == 2 )
      {
        *(_BYTE *)(a3 + 108) &= ~2u;
        v14 = RaidAdapterGetSystemPowerHint(a3);
        LOBYTE(IsAdapterControlSupported) = RaidAdapterGetSystemPowerResumeLatency(v14);
        if ( StorEtwLoggingEnabled && (byte_1C0092A02 & 0x10) != 0 )
          LOBYTE(IsAdapterControlSupported) = McTemplateK0qqqqq_EtwWriteTransfer(
                                                v16,
                                                v15,
                                                v17,
                                                *(_DWORD *)(a3 + 56),
                                                v15,
                                                v17,
                                                v18,
                                                IsAdapterControlSupported);
        if ( *(_QWORD *)(a3 + 5160) )
        {
          v19 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a3 + 5160);
          LOBYTE(IsAdapterControlSupported) = 75 * v19;
          *(_QWORD *)(a3 + 5168) += v19 / 0x2710;
          *(_QWORD *)(a3 + 5160) = 0LL;
        }
      }
    }
  }
  return IsAdapterControlSupported;
}
