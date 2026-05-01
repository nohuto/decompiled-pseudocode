/*
 * XREFs of InitOnceScanIndexes @ 0x180093810
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     SdbGetFirstChild @ 0x180090298 (SdbGetFirstChild.c)
 *     SdbGetTagFromTagID @ 0x180090384 (SdbGetTagFromTagID.c)
 *     SdbFindFirstTag @ 0x180093FA4 (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x18009401C (SdbFindNextTag.c)
 *     SdbReadDWORDTag @ 0x1800944E8 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x180094624 (SdbReadWORDTag.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall InitOnceScanIndexes(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // esi
  __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int FirstChild; // eax
  unsigned int v11; // ebp
  unsigned int i; // eax
  unsigned int FirstTag; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // r14d

  v3 = 0;
  if ( !a2 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"InitOnceScanIndexes",
      940,
      (unsigned int)"PDB was not supplied for InitOnceScanIndexes");
    return 0LL;
  }
  if ( !a3 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"InitOnceScanIndexes",
      946,
      (unsigned int)"No return context was supplied for InitOnceScanIndexes");
    return 0LL;
  }
  v7 = a2 + 48;
  memset_0((void *)(a2 + 48), 0, 0xA00uLL);
  FirstChild = SdbGetFirstChild(a2, 0LL, v8, v9);
  v11 = FirstChild;
  if ( FirstChild )
  {
    if ( (unsigned __int16)SdbGetTagFromTagID(a2, FirstChild) == 30722 )
    {
      *(_DWORD *)(a2 + 2636) = 0;
      for ( i = SdbFindFirstTag(a2, v11, 30723LL); ; i = SdbFindNextTag(a2, v11, v17) )
      {
        v17 = i;
        if ( !i )
        {
          *a3 = v7;
          return 1;
        }
        if ( *(_DWORD *)(a2 + 2636) == 64 )
          break;
        FirstTag = SdbFindFirstTag(a2, i, 14338LL);
        if ( !FirstTag )
        {
          AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", 988, (unsigned int)"Index missing TAG_INDEX_TAG");
          return v3;
        }
        *(_WORD *)(a2 + 40LL * *(unsigned int *)(a2 + 2636) + 52) = SdbReadWORDTag(a2, FirstTag);
        v14 = SdbFindFirstTag(a2, v17, 14339LL);
        if ( !v14 )
        {
          AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", 997, (unsigned int)"Index missing TAG_INDEX_KEY");
          return v3;
        }
        *(_WORD *)(a2 + 40LL * *(unsigned int *)(a2 + 2636) + 54) = SdbReadWORDTag(a2, v14);
        v15 = SdbFindFirstTag(a2, v17, 16406LL);
        if ( v15 )
          *(_DWORD *)(a2 + 40 * (*(unsigned int *)(a2 + 2636) + 2LL)) = SdbReadDWORDTag(a2, v15, 0LL);
        else
          *(_DWORD *)(a2 + 40 * (*(unsigned int *)(a2 + 2636) + 2LL)) = 0;
        v16 = SdbFindFirstTag(a2, v17, 38913LL);
        if ( !v16 )
        {
          *(_WORD *)(a2 + 40LL * *(unsigned int *)(a2 + 2636) + 52) = 0;
          AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", 1014, (unsigned int)"Index missing TAG_INDEX_BITS");
          return v3;
        }
        *(_DWORD *)(a2 + 40LL * (unsigned int)(*(_DWORD *)(a2 + 2636))++ + 48) = v16;
      }
      AslLogCallPrintf(
        1,
        (unsigned int)"InitOnceScanIndexes",
        981,
        (unsigned int)"Too many indexes in file: recompile and increase SDB_MAX_INDEXES");
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"InitOnceScanIndexes",
        966,
        (unsigned int)"Root child tag is not index tagid 0x%lx",
        v11);
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"InitOnceScanIndexes",
      961,
      (unsigned int)"Failed to get the child index from root");
  }
  return v3;
}
