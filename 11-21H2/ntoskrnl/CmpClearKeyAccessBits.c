/*
 * XREFs of CmpClearKeyAccessBits @ 0x1406BF110
 * Callers:
 *     CmpReorganizeHive @ 0x14068B1C8 (CmpReorganizeHive.c)
 * Callees:
 *     CmpFindSubKeyByNumber @ 0x1406BF278 (CmpFindSubKeyByNumber.c)
 *     CmpLogClearAccessBitsEvent @ 0x1406BF344 (CmpLogClearAccessBitsEvent.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpClearKeyAccessBits(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  _QWORD *PoolWithTag; // rsi
  __int64 v4; // r14
  unsigned int v5; // ecx
  unsigned int v6; // r13d
  __int64 CellFlat; // rax
  __int64 v8; // r15
  int SubKeyByNumber; // edi
  _DWORD v11[4]; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+88h] [rbp+58h]

  v11[0] = -1;
  v11[1] = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x317A6D43u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v4 = 0LL;
  v5 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL);
  *PoolWithTag = v5;
  if ( v5 == -1 )
  {
    SubKeyByNumber = 0;
    goto LABEL_19;
  }
  v6 = 0;
  v13 = *(_DWORD *)(BugCheckParameter3 + 104);
  while ( 1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, LODWORD(PoolWithTag[v4]));
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v8 = CellFlat;
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      goto LABEL_19;
    }
    if ( *(_BYTE *)(CellFlat + 12) )
    {
      SubKeyByNumber = HvpMarkCellDirty(BugCheckParameter3, LODWORD(PoolWithTag[v4]));
      if ( SubKeyByNumber < 0 )
        goto LABEL_17;
      *(_BYTE *)(v8 + 12) = 0;
      ++v6;
    }
    if ( HIDWORD(PoolWithTag[v4]) >= *(_DWORD *)(v8 + 20) )
      break;
    if ( (_DWORD)v4 == 511 )
      goto LABEL_10;
    SubKeyByNumber = CmpFindSubKeyByNumber(BugCheckParameter3);
    if ( SubKeyByNumber < 0 )
      goto LABEL_17;
    ++HIDWORD(PoolWithTag[v4]);
    v4 = (unsigned int)(v4 + 1);
    PoolWithTag[v4] = 0LL;
LABEL_11:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v11);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v11);
  }
  if ( (_DWORD)v4 )
  {
LABEL_10:
    v4 = (unsigned int)(v4 - 1);
    goto LABEL_11;
  }
  CmpLogClearAccessBitsEvent(a2, v6, (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 104) - v13) >> 3);
  SubKeyByNumber = 0;
LABEL_17:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v11);
LABEL_19:
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)SubKeyByNumber;
}
