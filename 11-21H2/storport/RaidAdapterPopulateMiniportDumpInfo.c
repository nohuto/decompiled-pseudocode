/*
 * XREFs of RaidAdapterPopulateMiniportDumpInfo @ 0x1C0085A60
 * Callers:
 *     RaUnitStorageDumpControl @ 0x1C00859D0 (RaUnitStorageDumpControl.c)
 * Callees:
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0085B00 (RaidAdapterGetMiniportDumpInfo.c)
 */

__int64 __fastcall RaidAdapterPopulateMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  int MiniportDumpInfo; // eax
  _QWORD *v6; // rcx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v4 = 0;
  P = 0LL;
  if ( !*(_QWORD *)(v3 + 56) )
  {
    if ( *(_BYTE *)(a1 + 4242) && (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x1000) == 0 )
      return (unsigned int)-1073741637;
    MiniportDumpInfo = RaidAdapterGetMiniportDumpInfo(a1, a3, a2, &P);
    v6 = P;
    v4 = MiniportDumpInfo;
    if ( MiniportDumpInfo >= 0 )
    {
      if ( !P )
        return v4;
      *(_QWORD *)(v3 + 56) = *((_QWORD *)P + 2);
      *(_QWORD *)(v3 + 128) = v6[2];
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x44436152u);
  }
  return v4;
}
