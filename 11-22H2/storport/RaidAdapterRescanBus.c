/*
 * XREFs of RaidAdapterRescanBus @ 0x1C0015C98
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938 (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C0015DC4 (RaidBusEnumeratorProcessModifiedNodes.c)
 *     RaidAdapterEnumerateBus @ 0x1C0015F44 (RaidAdapterEnumerateBus.c)
 *     RaidDeleteBusEnumerator @ 0x1C0018608 (RaidDeleteBusEnumerator.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidAdapterTargetedRescan @ 0x1C003A2BC (RaidAdapterTargetedRescan.c)
 */

__int64 __fastcall RaidAdapterRescanBus(__int64 a1, int *a2, _BYTE *a3)
{
  char v3; // r13
  char v4; // bl
  bool v5; // bp
  __int64 v9; // r9
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // ebx
  int v14; // eax
  bool v15; // zf
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-B8h] BYREF
  char v19[112]; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v20[3]; // [rsp+98h] [rbp-40h] BYREF

  v3 = *(_BYTE *)(a1 + 106);
  v4 = 0;
  v5 = 0;
  if ( !v3 && (*(_BYTE *)(a1 + 104) & 0x40) == 0 )
    return 0LL;
  memset_0(v19, 0, sizeof(v19));
  v18 = a1;
  v10 = 0;
  v20[1] = v20;
  v20[0] = v20;
  v11 = 1LL;
  if ( v3 )
  {
    *(_BYTE *)(a1 + 106) = 0;
    *(_QWORD *)(a1 + 4200) = MEMORY[0xFFFFF78000000014];
    if ( (unsigned int)RaidIsAdapterControlSupported(a1, 11) )
      RaCallMiniportAdapterControl(a1 + 336, 11LL, 0LL);
    v13 = *(_DWORD *)(a1 + 4760);
    v14 = RaidAdapterEnumerateBus(a1, v12, &v18);
    v11 = 1LL;
    v15 = v13 == *(_DWORD *)(a1 + 4760);
    v10 = v14;
    v4 = 1;
    v5 = !v15;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) != 0 )
  {
    if ( v5 )
    {
      if ( (*(_DWORD *)(a1 + 4764) & 4) != 0 && (*(_DWORD *)(a1 + 4768) & 1) != 0 && *(_QWORD *)(a1 + 4816) )
        RtlSetBit((PRTL_BITMAP)(a1 + 4800), *(unsigned __int8 *)(*(_QWORD *)(a1 + 4776) + 8LL));
    }
    else
    {
      LOBYTE(v9) = v4;
      v17 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))RaidAdapterTargetedRescan)(a1, 1LL, &v18, v9);
      if ( !v4 )
        v10 = v17;
      if ( a2 )
        *a2 = v17;
      if ( a3 )
        *a3 = 1;
    }
  }
  if ( v10 >= 0 )
    RaidBusEnumeratorProcessModifiedNodes(&v18, v11);
  RaidDeleteBusEnumerator(&v18, v11);
  return (unsigned int)v10;
}
