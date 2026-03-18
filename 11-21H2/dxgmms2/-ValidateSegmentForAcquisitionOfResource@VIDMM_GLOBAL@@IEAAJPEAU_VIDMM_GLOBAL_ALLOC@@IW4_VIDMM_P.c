/*
 * XREFs of ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C008699C
 * Callers:
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@EI_K@Z @ 0x1C008369C (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 *     ?AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@KK@Z @ 0x1C00867C4 (-AcquireGPUResourcesFromPreferredSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateSegmentForAcquisitionOfResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v6; // rbp
  _QWORD *v7; // rsi
  __int64 v8; // r10
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax

  v6 = (unsigned int)a3;
  v7 = (_QWORD *)a1;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 3712) + 8LL * (unsigned int)a3);
  v9 = *(unsigned int *)(v8 + 80);
  v10 = *(_DWORD *)(v8 + 80) & 0x1001;
  if ( v10 )
  {
    if ( (_DWORD)a4 == 1 )
      goto LABEL_12;
  }
  else
  {
    a1 = *(unsigned int *)(a2 + 72);
    if ( (a1 & 0x10000) != 0 && *(_DWORD *)(a2 + 360) || (a1 & 0x8000) != 0 )
      goto LABEL_12;
  }
  if ( (_DWORD)a4 != 2 || v10 )
  {
    if ( !*(_DWORD *)(a2 + 360) || v10 )
      goto LABEL_6;
    if ( *(_BYTE *)(a2 + 80) )
    {
      v12 = **(unsigned int **)(a2 + 528);
      if ( (v12 & 4) != 0 && (v12 = *(unsigned int *)(v7[3] + 436LL), (v12 & 8) == 0) || (v9 & 0x2004) == 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v12, v9, a3, a4);
          v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
          v17[3] = (**(_DWORD **)(a2 + 528) >> 2) & 1;
          v17[4] = (*(_DWORD *)(v7[3] + 436LL) >> 3) & 1;
          v17[5] = (*(_DWORD *)(*(_QWORD *)(v7[464] + 8 * v6) + 80LL) >> 2) & 1;
          v17[6] = (*(_DWORD *)(*(_QWORD *)(v7[464] + 8 * v6) + 80LL) >> 13) & 1;
        }
        return 3221225473LL;
      }
      goto LABEL_6;
    }
    if ( (_DWORD)a4 == 1 )
    {
LABEL_6:
      if ( a5 )
        v9 = *(unsigned int *)(a2 + 56);
      else
        v9 = *(unsigned int *)(a2 + 60);
      a1 = 1584LL * (*(_DWORD *)(a2 + 68) & 0x3F);
      a3 = (unsigned int)(a3 - *(_DWORD *)(a1 + v7[5028] + 20));
      if ( _bittest((const int *)&v9, (unsigned __int8)a3) )
        return 0LL;
    }
  }
LABEL_12:
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(a1, v9, a3, a4);
  return 3221225473LL;
}
