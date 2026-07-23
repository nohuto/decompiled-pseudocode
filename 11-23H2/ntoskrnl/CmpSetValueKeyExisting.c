/*
 * XREFs of CmpSetValueKeyExisting @ 0x14070B914
 * Callers:
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmpPreserveSystemHiveData @ 0x140A227AC (CmpPreserveSystemHiveData.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmpSetValueDataNew @ 0x14070967C (CmpSetValueDataNew.c)
 *     HvReallocateCell @ 0x140709FC0 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x14070A5D8 (HvAllocateCell.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x14070B16C (CmpFreeValueData.c)
 *     CmpMarkValueDataDirty @ 0x14070BC58 (CmpMarkValueDataDirty.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     CmpSetValueDataExisting @ 0x1407E5CE4 (CmpSetValueDataExisting.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpSetValueKeyExisting(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        __int64 a3,
        int a4,
        void *Src,
        size_t Size,
        unsigned int a7)
{
  __int64 result; // rax
  unsigned int v10; // eax
  unsigned int v11; // r13d
  __int16 v12; // r12
  __int16 v13; // r15
  unsigned int v14; // esi
  __int64 CellFlat; // rax
  void *v16; // rcx
  int v17; // r15d
  _DWORD *v18; // rsi
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22[2]; // [rsp+50h] [rbp-10h] BYREF

  v21 = 0xFFFFFFFFLL;
  v22[0] = 0LL;
  LODWORD(v20) = 0;
  result = HvpMarkCellDirty(BugCheckParameter2, a2);
  if ( (int)result >= 0 )
  {
    v10 = *(_DWORD *)(a3 + 4);
    v11 = v10 + 0x80000000;
    if ( v10 >= 0x80000000 )
    {
      v12 = 0;
    }
    else
    {
      v11 = *(_DWORD *)(a3 + 4);
      if ( *(_DWORD *)(BugCheckParameter2 + 220) >= 4u && v10 - 16345 <= 0x7FFFC026 )
        v12 = 2;
      else
        v12 = 1;
    }
    if ( (unsigned int)Size <= 4 )
      v13 = 0;
    else
      v13 = *(_DWORD *)(BugCheckParameter2 + 220) >= 4u && (unsigned int)(Size - 16345) <= 0x7FFFC026 ? 2 : 1;
    result = CmpMarkValueDataDirty(BugCheckParameter2);
    if ( (int)result >= 0 )
    {
      if ( v13 )
      {
        v14 = *(_DWORD *)(a3 + 8);
        if ( v13 != 1 )
        {
          if ( v12 == 2 )
          {
            LODWORD(BugCheckParameter4) = *(_DWORD *)(a3 + 8);
            result = CmpSetValueDataExisting(BugCheckParameter2, Src, BugCheckParameter4);
            if ( (int)result < 0 )
              return result;
          }
          else
          {
            result = CmpSetValueDataNew(BugCheckParameter2, (char *)Src, (unsigned int)Size, a7, &v20);
            if ( (int)result < 0 )
              return result;
            if ( v12 && v11 )
              HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 8));
            v14 = v20;
          }
          *(_DWORD *)(a3 + 12) = a4;
          *(_WORD *)(a3 + 16) &= ~2u;
          *(_DWORD *)(a3 + 4) = Size;
          *(_DWORD *)(a3 + 8) = v14;
          return 0LL;
        }
        if ( v12 == 1 && v11 )
        {
          if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
            CellFlat = HvpGetCellFlat(BugCheckParameter2, v14);
          else
            CellFlat = HvpGetCellPaged(BugCheckParameter2, v14, (unsigned int *)&v21);
          v16 = (void *)CellFlat;
          if ( !CellFlat )
            return 3221225626LL;
          if ( (unsigned int)Size <= -4 - *(_DWORD *)(CellFlat - 4) )
          {
            v17 = v14;
LABEL_20:
            memmove(v16, Src, (unsigned int)Size);
            if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter2, &v21);
            else
              HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v21);
            *(_DWORD *)(a3 + 12) = a4;
            *(_WORD *)(a3 + 16) &= ~2u;
            *(_DWORD *)(a3 + 8) = v17;
            *(_DWORD *)(a3 + 4) = Size;
            if ( v12 == 2 )
              CmpFreeValueData(BugCheckParameter2, v14, v11);
            return 0LL;
          }
          if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter2, &v21);
          else
            HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v21);
          v22[0] = 0LL;
          result = HvReallocateCell(BugCheckParameter2, v14, Size, 1, &v20, v22, (__int64)&v21);
          if ( (int)result >= 0 )
          {
            v17 = v20;
            *(_DWORD *)(a3 + 8) = v20;
LABEL_36:
            v16 = (void *)v22[0];
            goto LABEL_20;
          }
        }
        else
        {
          result = HvAllocateCell(BugCheckParameter2, Size, a7, &v20, (__int64)v22, (__int64)&v21);
          if ( (int)result >= 0 )
          {
            v17 = v20;
            goto LABEL_36;
          }
        }
      }
      else
      {
        if ( v12 == 1 && v11 || v12 == 2 )
        {
          v18 = (_DWORD *)(a3 + 8);
          CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(a3 + 8), v11);
        }
        else
        {
          v18 = (_DWORD *)(a3 + 8);
        }
        *(_DWORD *)(a3 + 4) = Size + 0x80000000;
        *v18 = 0;
        memmove(v18, Src, (unsigned int)Size);
        *(_DWORD *)(a3 + 12) = a4;
        *(_WORD *)(a3 + 16) &= ~2u;
        return 0LL;
      }
    }
  }
  return result;
}
