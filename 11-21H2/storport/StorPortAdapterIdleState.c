/*
 * XREFs of StorPortAdapterIdleState @ 0x1C000C580
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C000C6A0 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000C7B4 (StorUpdateCrashDumpPowerReady.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00411FC (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorPortAdapterIdleState(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  int v7; // ecx
  int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx

  if ( StorEtwLoggingEnabled && (byte_1C00799E2 & 0x10) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(
      a1,
      (unsigned int)&EventAdapterIdleStateStart,
      a3,
      **(_QWORD **)(a1 + 4832),
      *(_DWORD *)(a1 + 56),
      a2,
      a3);
  if ( a3 )
  {
    v9 = (*(_BYTE *)(a1 + 108) & 1) == 0;
    v10 = *(_QWORD *)(a1 + 4832);
    *(_QWORD *)(a1 + 5136) = MEMORY[0xFFFFF78000000008];
    if ( v9 )
      *(_DWORD *)(v10 + 20) &= ~0x10u;
    else
      *(_DWORD *)(v10 + 20) |= 0x10u;
  }
  else
  {
    ++*(_DWORD *)(a1 + 5172);
    if ( *(_QWORD *)(a1 + 5136) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 4832) + 20LL) & 0x10) != 0 || (*(_BYTE *)(a1 + 108) & 1) != 0 )
      {
        v11 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 5136);
        *(_QWORD *)(a1 + 5144) += v11 / 0x2710;
        if ( v11 / 0x2710 >= 0x2710 )
          ++*(_DWORD *)(a1 + 5180);
      }
      *(_QWORD *)(a1 + 5136) = 0LL;
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 4832) + 16LL) = a3;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9LL) )
  {
    if ( *(_DWORD *)(a1 + 96) && *(_QWORD *)(a1 + 4888) )
      StorUpdateCrashDumpPowerReady(a1);
    RaidAdapterSendPoFxIdleStateToMiniport(a1, a2, a3);
  }
  result = PoFxCompleteIdleState(**(_QWORD **)(a1 + 4832), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00799E2 & 0x10) != 0 )
      return McTemplateK0pqqq_EtwWriteTransfer(
               v7,
               (unsigned int)&EventAdapterIdleStateStop,
               v8,
               **(_QWORD **)(a1 + 4832),
               *(_DWORD *)(a1 + 56),
               a2,
               a3);
  }
  return result;
}
