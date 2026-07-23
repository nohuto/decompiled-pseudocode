/*
 * XREFs of CmpGetValueData @ 0x1406DC850
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueKey @ 0x1406CFB68 (CmQueryMultipleValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1406D286C (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpQueryKeyValueData @ 0x1406DCE00 (CmpQueryKeyValueData.c)
 *     CmAddLogForAction @ 0x140707B58 (CmAddLogForAction.c)
 *     CmpValueToData @ 0x140826528 (CmpValueToData.c)
 *     CmpCopyValue @ 0x1408ABBD4 (CmpCopyValue.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A14150 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpPreserveSystemHiveData @ 0x140A227AC (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x140A250D8 (CmpGetValueForAudit.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A29D60 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpFindTagIndex @ 0x140B5A060 (CmpFindTagIndex.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

bool __fastcall CmpGetValueData(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6)
{
  _BYTE *v6; // r14
  unsigned __int16 v7; // bp
  __int64 *v8; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rax
  bool result; // al
  __int64 CellFlat; // rax
  ULONG_PTR v16; // rdx
  bool v17; // zf
  __int64 CellPaged; // rax
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned int v22; // r15d
  void *v23; // rdi
  const void *v24; // rax
  size_t v25; // r8
  int v26; // [rsp+70h] [rbp+18h] BYREF
  int v27; // [rsp+74h] [rbp+1Ch]
  __int64 Pool2; // [rsp+78h] [rbp+20h]

  v6 = (_BYTE *)a6;
  v7 = 0;
  v8 = (__int64 *)a5;
  *(_BYTE *)a6 = 0;
  *v8 = 0LL;
  v11 = *(_DWORD *)(a3 + 4);
  v12 = v11 + 0x80000000;
  if ( v11 < 0x80000000 )
    v12 = *(_DWORD *)(a3 + 4);
  *a4 = v12;
  if ( *(_DWORD *)(a3 + 4) >= 0x80000000 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, a2);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    if ( CellFlat )
    {
      *v8 = a3 + 8;
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v12 - 16345 <= 0x7FFFC026 )
  {
    v16 = *(unsigned int *)(a3 + 8);
    v17 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v26 = -1;
    v27 = 0;
    Pool2 = 0LL;
    a6 = 0xFFFFFFFFLL;
    a5 = 0xFFFFFFFFLL;
    if ( v17 )
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    else
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v16);
    v19 = CellPaged;
    if ( CellPaged )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v20 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(CellPaged + 4));
      else
        v20 = HvpGetCellPaged(BugCheckParameter3);
      v21 = v20;
      if ( v20 )
      {
        v22 = *(_DWORD *)(a3 + 4);
        Pool2 = ExAllocatePool2(256LL, v22, 1685474627LL);
        v23 = (void *)Pool2;
        if ( Pool2 )
        {
          if ( *(_WORD *)(v19 + 2) )
          {
            while ( 1 )
            {
              v24 = (const void *)((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
                                 ? HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v21 + 4LL * v7))
                                 : HvpGetCellPaged(BugCheckParameter3));
              if ( !v24 )
                break;
              v25 = v22;
              if ( v22 > 0x3FD8 )
                v25 = 16344LL;
              v23 = (void *)Pool2;
              memmove((void *)(Pool2 + 16344LL * v7), v24, v25);
              v22 -= 16344;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &a6);
              else
                HvpReleaseCellPaged(BugCheckParameter3, &a6);
              if ( ++v7 >= *(_WORD *)(v19 + 2) )
                goto LABEL_29;
            }
            v23 = (void *)Pool2;
            LOBYTE(v7) = 0;
          }
          else
          {
LABEL_29:
            LOBYTE(v7) = 1;
          }
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &a5);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &a5);
      }
      else
      {
        v23 = (void *)Pool2;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v26);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v26);
      if ( (_BYTE)v7 )
      {
        *v8 = (__int64)v23;
        result = 1;
        *v6 = 1;
        return result;
      }
      if ( v23 )
        ExFreePoolWithTag(v23, 0);
    }
    return 0;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v13 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(a3 + 8));
  else
    v13 = HvpGetCellPaged(BugCheckParameter3);
  *v8 = v13;
  return v13 != 0;
}
