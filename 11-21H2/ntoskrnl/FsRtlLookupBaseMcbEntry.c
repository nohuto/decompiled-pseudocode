/*
 * XREFs of FsRtlLookupBaseMcbEntry @ 0x140221E70
 * Callers:
 *     FsRtlLookupLargeMcbEntry @ 0x1405411A0 (FsRtlLookupLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlLookupBaseMcbEntry(
        PBASE_MCB Mcb,
        LONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCountFromLbn,
        PLONGLONG StartingLbn,
        PLONGLONG SectorCountFromStartingLbn,
        PULONG Index)
{
  int v7; // edi
  signed int v8; // r10d
  unsigned int v11; // ebp
  signed int v12; // ebx
  unsigned int v13; // r9d
  _DWORD *Mapping; // rsi
  int v15; // eax
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // eax
  LONGLONG v20; // r8
  _DWORD *v21; // r9

  v7 = 0;
  v8 = Mcb->PairCount - 1;
  v11 = Vbn;
  v12 = 0;
  if ( v8 < 0 )
    return 0;
  v13 = Vbn;
  while ( 1 )
  {
    Mapping = Mcb->Mapping;
    v15 = (v8 + v12) / 2;
    v16 = (unsigned int)v15;
    if ( !v15 )
      break;
    v13 = v11;
    if ( v11 >= Mapping[2 * v15 - 2] )
      break;
    v8 = v15 - 1;
LABEL_20:
    if ( v12 > v8 )
      return 0;
  }
  if ( v13 > Mapping[2 * v15] - 1 )
  {
    v12 = v15 + 1;
    goto LABEL_20;
  }
  if ( Lbn )
  {
    v17 = Mapping[2 * v15 + 1];
    if ( v17 == -1 )
    {
      *Lbn = -1LL;
    }
    else
    {
      if ( v15 )
        v18 = Mapping[2 * (v15 - 1)];
      else
        v18 = 0;
      *Lbn = v13 + v17 - v18;
    }
  }
  if ( SectorCountFromLbn )
    *SectorCountFromLbn = *((_DWORD *)Mcb->Mapping + 2 * v16) - v13;
  if ( StartingLbn )
  {
    v20 = *((unsigned int *)Mcb->Mapping + 2 * v16 + 1);
    if ( (_DWORD)v20 == -1 )
      *StartingLbn = -1LL;
    else
      *StartingLbn = v20;
  }
  if ( SectorCountFromStartingLbn )
  {
    v21 = Mcb->Mapping;
    if ( (_DWORD)v16 )
      v7 = v21[2 * (unsigned int)(v16 - 1)];
    *SectorCountFromStartingLbn = (unsigned int)(v21[2 * v16] - v7);
  }
  if ( Index )
    *Index = v16;
  return 1;
}
