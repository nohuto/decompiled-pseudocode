/*
 * XREFs of InitOnceScanIndexes @ 0x180098730
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     SdbGetFirstChild @ 0x180095334 (SdbGetFirstChild.c)
 *     SdbGetTagFromTagID @ 0x180095420 (SdbGetTagFromTagID.c)
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x180098F5C (SdbFindNextTag.c)
 *     SdbReadDWORDTag @ 0x180099428 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x180099564 (SdbReadWORDTag.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall InitOnceScanIndexes(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // esi
  const char *v6; // r9
  int v7; // r8d
  __int64 v9; // r12
  unsigned int FirstChild; // eax
  unsigned int v11; // r14d
  const char *v12; // r9
  int v13; // r8d
  unsigned int i; // eax
  unsigned int FirstTag; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // ebp

  v3 = 0;
  if ( !a2 )
  {
    v6 = "PDB was not supplied for InitOnceScanIndexes";
    v7 = 940;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", v7, (_DWORD)v6);
    return 0LL;
  }
  if ( !a3 )
  {
    v6 = "No return context was supplied for InitOnceScanIndexes";
    v7 = 946;
    goto LABEL_3;
  }
  v9 = a2 + 48;
  memset_0((void *)(a2 + 48), 0, 0x500uLL);
  FirstChild = SdbGetFirstChild(a2, 0);
  v11 = FirstChild;
  if ( FirstChild )
  {
    if ( (unsigned __int16)SdbGetTagFromTagID(a2, FirstChild) != 30722 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"InitOnceScanIndexes",
        966,
        (unsigned int)"Root child tag is not index tagid 0x%lx");
      return v3;
    }
    *(_DWORD *)(a2 + 1356) = 0;
    for ( i = SdbFindFirstTag(a2, v11, 30723LL); ; i = SdbFindNextTag(a2, v11, v20) )
    {
      v20 = i;
      if ( !i )
      {
        *a3 = v9;
        return 1;
      }
      if ( *(_DWORD *)(a2 + 1356) == 32 )
        break;
      FirstTag = SdbFindFirstTag(a2, i, 14338LL);
      if ( !FirstTag )
      {
        v12 = "Index missing TAG_INDEX_TAG";
        v13 = 988;
        goto LABEL_8;
      }
      *(_WORD *)(a2 + 40LL * *(unsigned int *)(a2 + 1356) + 52) = SdbReadWORDTag(a2, FirstTag);
      v16 = SdbFindFirstTag(a2, v20, 14339LL);
      if ( !v16 )
      {
        v12 = "Index missing TAG_INDEX_KEY";
        v13 = 997;
        goto LABEL_8;
      }
      *(_WORD *)(a2 + 40LL * *(unsigned int *)(a2 + 1356) + 54) = SdbReadWORDTag(a2, v16);
      v17 = SdbFindFirstTag(a2, v20, 16406LL);
      if ( v17 )
        *(_DWORD *)(a2 + 40 * (*(unsigned int *)(a2 + 1356) + 2LL)) = SdbReadDWORDTag(a2, v17, 0LL);
      else
        *(_DWORD *)(a2 + 40 * (*(unsigned int *)(a2 + 1356) + 2LL)) = 0;
      v18 = SdbFindFirstTag(a2, v20, 38913LL);
      v19 = *(unsigned int *)(a2 + 1356);
      if ( !v18 )
      {
        *(_WORD *)(a2 + 40 * v19 + 52) = 0;
        v12 = "Index missing TAG_INDEX_BITS";
        v13 = 1014;
        goto LABEL_8;
      }
      *(_DWORD *)(a2 + 40 * v19 + 48) = v18;
      ++*(_DWORD *)(a2 + 1356);
    }
    v12 = "Too many indexes in file: recompile and increase SDB_MAX_INDEXES";
    v13 = 981;
  }
  else
  {
    v12 = "Failed to get the child index from root";
    v13 = 961;
  }
LABEL_8:
  AslLogCallPrintf(1, (unsigned int)"InitOnceScanIndexes", v13, (_DWORD)v12);
  return v3;
}
