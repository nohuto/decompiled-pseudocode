/*
 * XREFs of CmpLightWeightCommitDeleteValueKeyUoW @ 0x14065D320
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x14065D5C8 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14065DDC4 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14071EE7C (CmpCleanUpKcbCachedSymlink.c)
 *     CmpFreeValue @ 0x14079B22C (CmpFreeValue.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpLightWeightCommitDeleteValueKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  ULONG_PTR v8; // rbx
  __int64 CellFlat; // rax
  __int64 v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+54h] [rbp+Ch]

  v15 = -1;
  v3 = *(_QWORD *)(a1 + 104);
  v16 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(v5 + 32);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v8, *(unsigned int *)(v5 + 40));
  else
    CellFlat = HvpGetCellPaged(v8);
  v10 = CellFlat;
  CmpFreeValue(v8, *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL));
  CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(v10 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( *(_DWORD *)v3 == 1 )
  {
    v12 = *(_QWORD *)(v10 + 36);
    *(_QWORD *)(v10 + 36) = *(_QWORD *)(v3 + 4);
    *(_QWORD *)(v3 + 4) = v12;
    CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48), a3);
    v13 = *(_QWORD *)(a1 + 48);
    v14 = *(_DWORD *)(v10 + 40);
    *(_DWORD *)(v13 + 96) = *(_DWORD *)(v10 + 36);
    *(_DWORD *)(v13 + 100) = v14;
    if ( !*(_DWORD *)(v10 + 36) )
    {
      *(_QWORD *)(v10 + 60) = 0LL;
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = 0;
    }
  }
  CmpLightWeightCleanupSetValueKeyUoW(v8, v3);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v8, &v15);
  else
    return HvpReleaseCellPaged(v8, &v15);
}
