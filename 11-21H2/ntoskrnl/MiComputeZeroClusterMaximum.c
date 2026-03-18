/*
 * XREFs of MiComputeZeroClusterMaximum @ 0x140284D20
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x1402E7400 (MiExpandSharedZeroCluster.c)
 *     MiResolvePrivateZeroFault @ 0x1403219B0 (MiResolvePrivateZeroFault.c)
 *     MiGetClusterPage @ 0x1405C37D0 (MiGetClusterPage.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140266B40 (MiGetAvailablePagesBelowPriority.c)
 *     MiSufficientAvailablePages @ 0x140285380 (MiSufficientAvailablePages.c)
 */

unsigned __int64 __fastcall MiComputeZeroClusterMaximum(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // r10
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int v16; // edx
  unsigned __int64 AvailablePagesBelowPriority; // rax

  v3 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 8) + 16LL * *(_QWORD *)(a1 + 24);
  v7 = (((unsigned __int64)(*(_DWORD *)v6 & 0xFFF) + *(_QWORD *)(v6 + 8) + 4095LL) >> 12) - v3;
  v8 = *(_QWORD *)v6 + (v3 << 12);
  if ( a3
    && v7 > (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v8 >> 12) + 1 )
  {
    v7 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v8 >> 12) + 1;
  }
  v9 = *(unsigned __int16 *)(a2 + 174);
  v10 = *(_QWORD **)(qword_140C51F48 + 8 * v9);
  v11 = *(_QWORD *)(v10[2075] + 2384LL);
  if ( v11 <= 0x4E20 || (v11 & 0xFFFFFFFFFFFFFFFEuLL) <= 0x4E20 )
    v12 = 10000LL;
  else
    v12 = v11 >> 1;
  if ( !(unsigned int)MiSufficientAvailablePages(*(_QWORD *)(qword_140C51F48 + 8 * v9), v12 >> 1) )
    v7 = 1LL;
  if ( (*(_BYTE *)(a2 + 184) & 0x40) != 0 && (*(_BYTE *)a1 != 1 || (*(_DWORD *)(a1 + 80) & 0x4000) == 0) )
  {
    v14 = *(_QWORD *)(a2 + 128);
    v15 = *(_QWORD *)(a2 + 120);
    if ( v14 >= v15 )
      return 1LL;
    if ( v14 + v7 > v15 )
      v7 = v15 - v14;
  }
  if ( *(_BYTE *)a1 == 1 )
  {
    v16 = *(_DWORD *)(a1 + 80);
    if ( (v16 & 0x4000) != 0 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v10, ((v16 >> 3) & 7) + 1);
      if ( v7 > AvailablePagesBelowPriority )
        v7 = AvailablePagesBelowPriority;
    }
  }
  if ( !v7 )
    v7 = 1LL;
  result = 512 - ((((v8 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF);
  if ( v7 <= result )
    return v7;
  return result;
}
