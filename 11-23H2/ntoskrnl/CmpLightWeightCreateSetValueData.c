/*
 * XREFs of CmpLightWeightCreateSetValueData @ 0x140A28D74
 * Callers:
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A2942C (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A29D60 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14022CFE4 (CmpFreeTransientPoolWithTag.c)
 *     CmpAllocatePool @ 0x14022CFFC (CmpAllocatePool.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     CmpCopyCell @ 0x1407DDF80 (CmpCopyCell.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpLightWeightCreateSetValueData(__int64 a1, int **a2)
{
  ULONG_PTR v4; // rsi
  int *Pool; // rax
  int *v6; // rdi
  int v7; // ebx
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // rbp
  int v11; // ecx
  ULONG_PTR v12; // rdx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  Pool = (int *)CmpAllocatePool(256LL, 12LL, 2002079043LL);
  v6 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  *Pool = 1;
  v8 = *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v4, v8, &v14);
  else
    CellFlat = HvpGetCellPaged(v4, v8, (unsigned int *)&v14);
  v10 = CellFlat;
  if ( !CellFlat )
  {
    v7 = -1073741670;
LABEL_16:
    v12 = (unsigned int)v6[2];
    if ( (_DWORD)v12 != -1 )
      HvFreeCell(v4, v12);
    CmpFreeTransientPoolWithTag(v6, 0x77554D43u);
    return (unsigned int)v7;
  }
  v6[1] = 0;
  v6[2] = -1;
  v11 = *(_DWORD *)(CellFlat + 36);
  if ( !v11
    || (v6[1] = v11,
        v7 = CmpCopyCell(v4, *(unsigned int *)(CellFlat + 40), v4, *(_DWORD *)(CellFlat + 40) >> 31, v6 + 2),
        v7 >= 0)
    && (v7 = HvpMarkCellDirty(v4, *(unsigned int *)(v10 + 40), 0), v7 >= 0) )
  {
    v7 = 0;
    *a2 = v6;
    v6 = 0LL;
  }
  if ( (*(_BYTE *)(v4 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v4, &v14);
  else
    HvpReleaseCellPaged(v4, (unsigned int *)&v14);
  if ( v6 )
    goto LABEL_16;
  return (unsigned int)v7;
}
