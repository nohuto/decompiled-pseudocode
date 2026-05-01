/*
 * XREFs of SdbOpenDatabaseEx @ 0x180095474
 * Callers:
 *     SdbInitDatabaseEx @ 0x180095D78 (SdbInitDatabaseEx.c)
 *     SdbpOpenLocalDatabaseEx @ 0x180096158 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     SdbpReadMappedData @ 0x180095AA0 (SdbpReadMappedData.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x180095B2C (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpOpenCompressedDatabase @ 0x18009C438 (SdbpOpenCompressedDatabase.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslFileMappingCreate @ 0x18009F03C (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009F2A4 (AslFileMappingDelete.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009F40C (AslFileMappingEnsureMappedAs.c)
 */

PVOID *SdbOpenDatabaseEx(__int64 a1, __int64 a2, __int64 a3, ...)
{
  PVOID Heap; // rax
  PVOID *v5; // rbx
  __int64 v6; // rdx
  const char *v7; // r9
  int v8; // r8d
  __int64 v9; // rdi
  _QWORD *v10; // rax
  _BYTE v12[8]; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]
  PVOID P; // [rsp+68h] [rbp+20h] BYREF
  va_list Pa; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Pa, a3);
  P = va_arg(va1, PVOID);
  AslLogCallPrintf(3, (unsigned int)"SdbOpenDatabaseEx", 898, (unsigned int)"Flags:%d; DatabasePath:%ws");
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x580uLL);
  P = Heap;
  v5 = (PVOID *)Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x580uLL);
    if ( (int)AslFileMappingCreate(v5, a1) >= 0 )
    {
      v9 = *((_QWORD *)*v5 + 3);
      if ( (unsigned __int64)(v9 - 42) > 0x7FFFFFD5 )
      {
        v7 = "Failed to open SDB - File size too large or small.";
        v8 = 926;
        goto LABEL_21;
      }
      if ( (int)AslFileMappingEnsureMappedAs(*v5, v6) >= 0 )
      {
        *((_DWORD *)v5 + 4) = 0;
        *((_DWORD *)v5 + 5) = v9;
        v10 = *v5;
        if ( *v5 )
          v10 = (_QWORD *)v10[4];
        v5[1] = v10;
        if ( (unsigned int)SdbpReadMappedData(v5, 0LL, v12, 12LL) )
        {
          if ( v13 == 1717724275 )
          {
            if ( !(unsigned int)SdbpValidateAndApplyCompatFlags(v5, v12) )
              goto LABEL_22;
          }
          else
          {
            if ( v13 != 1717724282 )
            {
              v7 = "Magic does not match a valid value: 0x%lx";
              v8 = 958;
              goto LABEL_21;
            }
            if ( !(unsigned int)SdbpOpenCompressedDatabase((PVOID *)Pa) )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbOpenDatabaseEx",
                964,
                (unsigned int)"SdbpOpenCompressedDatabase failed to open compressed database.");
              v5 = (PVOID *)P;
              goto LABEL_22;
            }
            return (PVOID *)P;
          }
          return v5;
        }
        v7 = "Failed to read database header";
        v8 = 945;
      }
      else
      {
        v7 = "Failed to map SDB [%x]";
        v8 = 932;
      }
    }
    else
    {
      v7 = "Failed to create file mapping [%x]";
      v8 = 917;
    }
LABEL_21:
    AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", v8, (_DWORD)v7);
LABEL_22:
    if ( v5 )
    {
      AslFileMappingDelete(*v5);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
    return 0LL;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 906, (unsigned int)"Failed to allocate DB structure");
  return 0LL;
}
