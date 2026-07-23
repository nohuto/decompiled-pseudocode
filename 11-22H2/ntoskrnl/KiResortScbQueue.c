/*
 * XREFs of KiResortScbQueue @ 0x1403055D0
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402067BC (KiRemoveThreadFromScbQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x140305708 (KiComputeGroupSchedulingRank.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x1403089BC (KiInsertNonMaxOverQuotaScb.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140364F20 (KiRecomputeGroupSchedulingRank.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x140206878 (KiRemoveSchedulingGroupQueue.c)
 *     KiInsertSchedulingGroupQueue @ 0x140308A1C (KiInsertSchedulingGroupQueue.c)
 */

void __fastcall KiResortScbQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v6; // rcx
  __int64 i; // rcx
  unsigned __int64 v8; // r8
  __int64 j; // r8
  _QWORD *v10; // rdx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // r8d
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  int v20; // edx
  int v21; // eax

  v3 = (unsigned __int64 *)(a2 + 88);
  if ( !a3 )
  {
    v6 = *v3;
    if ( *v3 )
    {
      for ( ; *(_QWORD *)(v6 + 8); v6 = *(_QWORD *)(v6 + 8) )
        ;
    }
    else
    {
      for ( i = *(_QWORD *)(a2 + 104); ; i = *(_QWORD *)(v6 + 16) )
      {
        v6 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(unsigned __int64 **)(v6 + 8) == v3 )
          break;
        v3 = (unsigned __int64 *)v6;
      }
    }
    if ( !v6 )
      return;
    v12 = *(_DWORD *)(a2 + 116);
    v13 = v12 - *(_DWORD *)(v6 + 28);
    if ( v12 != *(_DWORD *)(v6 + 28) )
      goto LABEL_27;
    v14 = *(unsigned __int16 *)(a2 + 114);
    if ( (_WORD)v14 )
    {
      v15 = *(unsigned __int16 *)(v6 + 26);
      _BitScanReverse((unsigned int *)&v16, v14);
      v17 = 0;
      if ( (_WORD)v15 )
        _BitScanReverse((unsigned int *)&v17, v15);
      v13 = v17 - v16;
LABEL_27:
      if ( v13 >= 0 )
        return;
      goto LABEL_17;
    }
    if ( v12 || *(_QWORD *)a2 > *(_QWORD *)(v6 - 88) )
      return;
LABEL_17:
    KiRemoveSchedulingGroupQueue(a1, a2, 0);
    KiInsertSchedulingGroupQueue(a1, a2, 0LL);
    return;
  }
  v8 = *(_QWORD *)(a2 + 96);
  if ( v8 )
  {
    v10 = *(_QWORD **)v8;
    if ( *(_QWORD *)v8 )
    {
      do
      {
        v8 = (unsigned __int64)v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
  }
  else
  {
    for ( j = *(_QWORD *)(a2 + 104); ; j = *(_QWORD *)(v8 + 16) )
    {
      v8 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v8 || *(unsigned __int64 **)v8 == v3 )
        break;
      v3 = (unsigned __int64 *)v8;
    }
  }
  if ( v8 )
  {
    v11 = *(_DWORD *)(a2 + 116) - *(_DWORD *)(v8 + 28);
    if ( !v11 )
    {
      v18 = *(unsigned __int16 *)(a2 + 114);
      if ( !(_WORD)v18 )
      {
        if ( !*(_DWORD *)(a2 + 116) && *(_QWORD *)a2 <= *(_QWORD *)(v8 - 88) )
          return;
        goto LABEL_17;
      }
      v19 = *(unsigned __int16 *)(v8 + 26);
      _BitScanReverse((unsigned int *)&v20, v18);
      v21 = 0;
      if ( (_WORD)v19 )
        _BitScanReverse((unsigned int *)&v21, v19);
      v11 = v21 - v20;
    }
    if ( v11 <= 0 )
      return;
    goto LABEL_17;
  }
}
