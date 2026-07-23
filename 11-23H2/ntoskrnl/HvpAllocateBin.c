/*
 * XREFs of HvpAllocateBin @ 0x1407503BC
 * Callers:
 *     HvpAddBin @ 0x14074F364 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F984 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140827334 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140A1DEE0 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x140A1DFA4 (HvpMapHiveImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HvpAllocateNonPagedBin @ 0x140A2A42C (HvpAllocateNonPagedBin.c)
 */

__int64 __fastcall HvpAllocateBin(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 *a5)
{
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD); // rax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    return (unsigned int)HvpAllocateNonPagedBin(a1, a2, a5);
  }
  else
  {
    v5 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 24);
    v6 = 0;
    v7 = (unsigned int)a2;
    LOBYTE(a2) = a3 == 0;
    v8 = v5(v7, a2, a4);
    if ( v8 )
      *a5 = v8;
    else
      return (unsigned int)-1073741670;
  }
  return v6;
}
