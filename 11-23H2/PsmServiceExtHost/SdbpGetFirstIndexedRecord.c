/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x1800939D4
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x180093724 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x180090024 (SdbGetTagFromTagID.c)
 *     SdbpBinarySearchFirst @ 0x1800938B0 (SdbpBinarySearchFirst.c)
 *     SdbpBinarySearchUnique @ 0x180093954 (SdbpBinarySearchUnique.c)
 *     SdbGetTagDataSize @ 0x180093FE4 (SdbGetTagDataSize.c)
 *     SdbpGetMappedTagData @ 0x1800943CC (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetFirstIndexedRecord(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  const char *v8; // r9
  int v9; // r8d
  unsigned int v11; // r14d
  __int64 MappedTagData; // rax
  unsigned int v13; // ebx
  __int64 v14; // rbp
  int *v15; // r9
  int v16; // eax
  _DWORD *v17; // r9
  int v18; // edx

  v6 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801 )
  {
    v8 = "The tag 0x%lx is not an index tag";
    v9 = 430;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetFirstIndexedRecord", v9, (_DWORD)v8, v6);
    return 0LL;
  }
  v11 = (unsigned int)SdbGetTagDataSize(a1, v6) / 0xC;
  MappedTagData = SdbpGetMappedTagData(a1, v6);
  v13 = 0;
  v14 = MappedTagData;
  if ( !MappedTagData )
  {
    v8 = "Failed to get the pointer to index data, index tagid 0x%lx";
    v9 = 439;
    goto LABEL_3;
  }
  v15 = (int *)(a4 + 16);
  if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
  {
    v16 = SdbpBinarySearchUnique(MappedTagData, v11, a3, v15);
    if ( v16 && *v17 < v11 - 1 )
      v18 = *(_DWORD *)(v14 + 12LL * (unsigned int)(*v17 + 1) + 8);
    else
      v18 = 0;
    *(_DWORD *)(a4 + 8) = v18;
    *(_DWORD *)(a4 + 4) = 0;
  }
  else
  {
    v16 = SdbpBinarySearchFirst(MappedTagData, v11, a3, v15);
  }
  if ( v16 )
    return *(unsigned int *)(v14 + 12LL * (unsigned int)*v17 + 8);
  return v13;
}
