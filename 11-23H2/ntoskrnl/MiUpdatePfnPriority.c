/*
 * XREFs of MiUpdatePfnPriority @ 0x1402E2640
 * Callers:
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiResolveTransitionFault @ 0x140262760 (MiResolveTransitionFault.c)
 *     MiActOnPte @ 0x140294364 (MiActOnPte.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiUpdatePrefetchPriority @ 0x140333C6C (MiUpdatePrefetchPriority.c)
 *     MiCombineWithStandbyExisting @ 0x14035A31C (MiCombineWithStandbyExisting.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062DC1C (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x14025A9F0 (MiRelinkStandbyPage.c)
 *     MiGetPfnPriority @ 0x1402DF4E8 (MiGetPfnPriority.c)
 */

char __fastcall MiUpdatePfnPriority(__int64 a1)
{
  char v1; // bl
  unsigned int PfnPriority; // ecx
  int v3; // r8d
  ULONG_PTR v4; // r9
  unsigned int v5; // r10d
  int v6; // edx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // r8

  v1 = -1;
  PfnPriority = MiGetPfnPriority(a1);
  if ( v6 != PfnPriority && (v5 >= PfnPriority || v3 && (PfnPriority <= 5 || *(__int64 *)(v4 + 40) >= 0)) )
  {
    v8 = *(_BYTE *)(v4 + 34) & 7;
    if ( v8 == 2 )
    {
      if ( PfnPriority
        || (v9 = *(_QWORD *)(v4 + 16), (v9 & 0x400) != 0)
        || (v10 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)),
            (*(_DWORD *)(v10 + 4) & 0x80u) != 0)
        || (v9 & 4) == 0
        || (unsigned __int16)v9 >> 12 != *(_DWORD *)(v10 + 1188) )
      {
        MiRelinkStandbyPage(v4, v5);
      }
    }
    else if ( v8 != 6 || (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || v5 >= PfnPriority )
    {
      *(_BYTE *)(v4 + 35) ^= (*(_BYTE *)(v4 + 35) ^ v5) & 7;
      if ( PfnPriority < 5 )
      {
        v1 = -1;
        if ( v5 == 5 )
          return 0;
      }
      else if ( v5 < 5 )
      {
        return 7;
      }
    }
  }
  return v1;
}
