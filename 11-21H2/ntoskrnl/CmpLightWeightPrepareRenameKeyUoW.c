/*
 * XREFs of CmpLightWeightPrepareRenameKeyUoW @ 0x140923ED0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14065E380 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14065E480 (CmpLightWeightCreateModificationData.c)
 *     CmpCleanupRollbackPacket @ 0x140681834 (CmpCleanupRollbackPacket.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406E93C0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406FEA54 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpRemoveSubKeyFromList @ 0x140716F80 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyToList @ 0x1407185B4 (CmpAddSubKeyToList.c)
 *     CmpReferenceKeyControlBlock @ 0x14071B250 (CmpReferenceKeyControlBlock.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     CmpCopyCell @ 0x14079BC7C (CmpCopyCell.c)
 *     HvAllocateCell @ 0x14079C8A4 (HvAllocateCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x14091D070 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpMarkAllChildrenDirty @ 0x140921078 (CmpMarkAllChildrenDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareRenameKeyUoW(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r15
  ULONG_PTR v4; // rdi
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  unsigned int *v7; // rsi
  int v8; // eax
  int Cell; // ebx
  ULONG_PTR v10; // r12
  ULONG_PTR v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  ULONG_PTR v14; // r13
  ULONG_PTR v15; // rdx
  __int64 CellPaged; // rax
  unsigned int *v17; // r13
  __int64 v18; // r12
  _WORD *v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v26; // [rsp+40h] [rbp-29h] BYREF
  __int64 v27; // [rsp+48h] [rbp-21h] BYREF
  _WORD *v28; // [rsp+50h] [rbp-19h] BYREF
  __int128 v29; // [rsp+58h] [rbp-11h] BYREF
  _OWORD v30[5]; // [rsp+68h] [rbp-1h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int *v32; // [rsp+D8h] [rbp+6Fh] BYREF
  ULONG_PTR v33; // [rsp+E0h] [rbp+77h]
  ULONG_PTR v34; // [rsp+E8h] [rbp+7Fh]

  v26 = 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(int *)(a1 + 72);
  v27 = 0xFFFFFFFFLL;
  v29 = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  LODWORD(BugCheckParameter4) = -1;
  v30[0] = 0LL;
  v28 = 0LL;
  CmpInitializeDelayDerefContext(&v29);
  v7 = *(unsigned int **)(*(_QWORD *)(a1 + 80) + 104LL);
  v32 = v7;
  if ( v7 )
  {
    ++*v7;
  }
  else
  {
    v8 = CmpLightWeightCreateModificationData(a1, &v32, v5, v6);
    v7 = v32;
    Cell = v8;
    if ( v8 < 0 )
      goto LABEL_39;
  }
  CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 48));
  v10 = *(_QWORD *)(a1 + 48);
  v11 = *(_QWORD *)(a1 + 88);
  v34 = v10;
  CmpReferenceKeyControlBlock(v11);
  v12 = (*(_BYTE *)(v4 + 140) & 1) == 0;
  v13 = *(_QWORD *)(a1 + 48);
  v14 = *(_QWORD *)(a1 + 88);
  v33 = v14;
  v15 = *(unsigned int *)(*(_QWORD *)(v13 + 72) + 40LL);
  if ( v12 )
    CellPaged = HvpGetCellPaged(v4, v15, (unsigned int *)&v26);
  else
    CellPaged = HvpGetCellFlat(v4, v15, &v26);
  if ( CellPaged )
  {
    Cell = HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), 1);
    if ( Cell < 0
      || (Cell = HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 1), Cell < 0)
      || (Cell = HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL), 1), Cell < 0) )
    {
LABEL_26:
      if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v4, &v26);
      else
        HvpReleaseCellPaged(v4, (unsigned int *)&v26);
      goto LABEL_35;
    }
    Cell = CmpCopyCell(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), v4, v3, (int *)&BugCheckParameter4);
    if ( Cell >= 0 )
    {
      v17 = &v7[v3];
      v18 = v3;
      if ( v17[3] != -1 )
        goto LABEL_19;
      LODWORD(v32) = *(_DWORD *)(v4 + 220);
      Cell = HvAllocateCell(v4, 12, (unsigned int)v3, v17 + 3, (__int64)&v28, (__int64)&v27);
      if ( Cell >= 0 )
      {
        v19 = v28;
        *v28 = (unsigned int)v32 < 5 ? 26220 : 26732;
        v19[1] = 0;
        v7[v3 + 1] = 0;
        if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v4, &v27);
        else
          HvpReleaseCellPaged(v4, (unsigned int *)&v27);
LABEL_19:
        v20 = BugCheckParameter4;
        Cell = CmpAddSubKeyToList(v4, v17 + 3, BugCheckParameter4);
        if ( Cell >= 0 )
        {
          ++v7[v18 + 1];
          v21 = *(_QWORD *)(a1 + 88);
          v22 = (unsigned __int64)*(unsigned int *)(v21 + 40) >> 31;
          if ( CmpRemoveSubKeyFromList(v4, &v7[v22 + 3], *(_DWORD *)(v21 + 40)) )
          {
            --v7[v22 + 1];
            v23 = CmpMarkAllChildrenDirty(v4, v20);
            v10 = v34;
            Cell = v23;
            if ( v23 >= 0 )
            {
              Cell = CmpPrepareToInvalidateAllHigherLayerKcbs(v34, 1, (__int64)v30);
              if ( Cell >= 0 )
              {
                v14 = v33;
                Cell = CmpPrepareToInvalidateAllHigherLayerKcbs(v33, 1, (__int64)v30);
                if ( Cell >= 0 )
                {
                  BugCheckParameter4 = 0x800000001LL;
                  CmpEnumerateAllHigherLayerKcbs(
                    v10,
                    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
                    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpInvalidateAllHigherLayerKcbsPostCallback,
                    (__int64)&v29,
                    (__int64)&BugCheckParameter4,
                    1,
                    1);
                  BugCheckParameter4 = 0x800000001LL;
                  CmpEnumerateAllHigherLayerKcbs(
                    v14,
                    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
                    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpInvalidateAllHigherLayerKcbsPostCallback,
                    (__int64)&v29,
                    (__int64)&BugCheckParameter4,
                    1,
                    1);
                  v24 = *(_QWORD *)(a1 + 48);
                  *(_QWORD *)(a1 + 104) = v7;
                  Cell = 0;
                  v7 = 0LL;
                  v14 = 0LL;
                  v10 = 0LL;
                  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v24 + 40);
                  *(_DWORD *)(v24 + 40) = v20;
                  v20 = -1;
                }
                goto LABEL_24;
              }
            }
            goto LABEL_23;
          }
          Cell = -1073741670;
        }
        v10 = v34;
LABEL_23:
        v14 = v33;
        goto LABEL_24;
      }
      v10 = v34;
      v14 = v33;
    }
    v20 = BugCheckParameter4;
LABEL_24:
    if ( v20 != -1 )
      CmpFreeKeyByCell(v4, v20, 0);
    goto LABEL_26;
  }
  Cell = -1073741670;
LABEL_35:
  if ( v14 )
    CmpDereferenceKeyControlBlockWithLock(v14, (__int64)&v29, 0);
  if ( v10 )
    CmpDereferenceKeyControlBlockWithLock(v10, (__int64)&v29, 0);
LABEL_39:
  if ( v7 )
    CmpLightWeightCleanupModifyKeyDataUoW(v4, v7);
  CmpCleanupRollbackPacket((__int64)v30);
  CmpDrainDelayDerefContext((_QWORD **)&v29);
  return (unsigned int)Cell;
}
