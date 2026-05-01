/*
 * XREFs of SdbOpenDatabaseEx @ 0x180090084
 * Callers:
 *     SdbOpenDatabase @ 0x180090078 (SdbOpenDatabase.c)
 *     SdbpOpenLocalDatabaseEx @ 0x180090F50 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     SdbGetMergeRedirectPath @ 0x180051604 (SdbGetMergeRedirectPath.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 *     SdbpReadMappedData @ 0x180090738 (SdbpReadMappedData.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1800907C4 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpOpenCompressedDatabase @ 0x180096FBC (SdbpOpenCompressedDatabase.c)
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098570 (AslFree.c)
 *     AslFileMappingCreate @ 0x180099698 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x180099900 (AslFileMappingDelete.c)
 *     AslFileMappingEnsureMappedAs @ 0x180099A68 (AslFileMappingEnsureMappedAs.c)
 */

PVOID *SdbOpenDatabaseEx(unsigned __int64 a1, __int64 a2, __int64 a3, ...)
{
  const unsigned __int16 *v4; // rax
  PVOID *Heap; // rax
  PVOID *v6; // rbx
  int MergeRedirectPath; // eax
  int v8; // edi
  const char *v9; // r9
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  const char *v13; // r9
  int v14; // r8d
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v18; // [rsp+20h] [rbp-20h]
  _BYTE v19[8]; // [rsp+30h] [rbp-10h] BYREF
  int v20; // [rsp+38h] [rbp-8h]
  PVOID *v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF
  va_list va; // [rsp+88h] [rbp+48h]
  va_list va1; // [rsp+90h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v4 = (const unsigned __int16 *)a1;
  if ( !a1 )
    v4 = &word_1800B66B4;
  AslLogCallPrintf(3, (unsigned int)"SdbOpenDatabaseEx", 1708, (unsigned int)"Flags:%d; DatabasePath:%ws", 0, v4);
  Heap = (PVOID *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA80uLL);
  v21 = Heap;
  v6 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0xA80uLL);
    v22 = 0LL;
    MergeRedirectPath = SdbGetMergeRedirectPath((__int64 *)va, a1);
    v8 = MergeRedirectPath;
    if ( MergeRedirectPath < 0 )
    {
      if ( MergeRedirectPath == -1073741772 )
        goto LABEL_13;
      v9 = "SdbGetMergeRedirectPath failed to check for sdb merge redirect [%x]";
      v10 = 1732;
      v11 = 3;
    }
    else
    {
      if ( !v22 )
      {
        v8 = -1073741772;
        goto LABEL_13;
      }
      MergeRedirectPath = AslFileMappingCreate(v6, v22);
      v8 = MergeRedirectPath;
      if ( MergeRedirectPath >= 0 )
      {
LABEL_13:
        if ( v22 )
        {
          AslFree(NtCurrentPeb()->ProcessHeap, v22);
          v6 = v21;
        }
        if ( v8 < 0 || !*v6 )
        {
          v12 = AslFileMappingCreate(v6, a1);
          if ( v12 < 0 )
          {
            v13 = "Failed to create file mapping [%x]";
            v14 = 1765;
LABEL_19:
            LODWORD(v18) = v12;
            AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", v14, (_DWORD)v13, v18);
            goto LABEL_37;
          }
        }
        v15 = *((_QWORD *)*v6 + 3);
        if ( (unsigned __int64)(v15 - 42) > 0x7FFFFFD5 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbOpenDatabaseEx",
            1774,
            (unsigned int)"Failed to open SDB - File size too large or small.");
        }
        else
        {
          v12 = AslFileMappingEnsureMappedAs();
          if ( v12 < 0 )
          {
            v13 = "Failed to map SDB [%x]";
            v14 = 1780;
            goto LABEL_19;
          }
          *((_DWORD *)v6 + 4) = 0;
          *((_DWORD *)v6 + 5) = v15;
          v16 = *v6;
          if ( *v6 )
            v16 = (_QWORD *)v16[4];
          v6[1] = v16;
          if ( !(unsigned int)SdbpReadMappedData(v6, 0LL, v19, 12LL) )
          {
            AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 1793, (unsigned int)"Failed to read database header");
            goto LABEL_37;
          }
          v12 = v20;
          if ( v20 != 1717724275 )
          {
            if ( v20 != 1717724282 )
            {
              v13 = "Magic does not match a valid value: 0x%lx";
              v14 = 1806;
              goto LABEL_19;
            }
            if ( !(unsigned int)SdbpOpenCompressedDatabase(&v21) )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbOpenDatabaseEx",
                1812,
                (unsigned int)"SdbpOpenCompressedDatabase failed to open compressed database.");
              v6 = v21;
              goto LABEL_37;
            }
            return v6;
          }
          if ( (unsigned int)SdbpValidateAndApplyCompatFlags(v6, v19) )
            return v6;
        }
LABEL_37:
        if ( v6 )
        {
          AslFileMappingDelete(*v6);
          AslFree(NtCurrentPeb()->ProcessHeap, v21);
        }
        return 0LL;
      }
      v9 = "Failed to create file mapping for redirected SDB file [%x]";
      v10 = 1743;
      v11 = 1;
    }
    LODWORD(v18) = MergeRedirectPath;
    AslLogCallPrintf(v11, (unsigned int)"SdbOpenDatabaseEx", v10, (_DWORD)v9, v18);
    goto LABEL_13;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 1716, (unsigned int)"Failed to allocate DB structure");
  return 0LL;
}
