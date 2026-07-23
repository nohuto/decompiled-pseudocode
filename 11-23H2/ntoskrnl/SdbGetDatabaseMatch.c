/*
 * XREFs of SdbGetDatabaseMatch @ 0x140693044
 * Callers:
 *     PiIsDriverBlocked @ 0x140692F18 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpSearchDB @ 0x1407523F4 (SdbpSearchDB.c)
 *     AslFileMappingDelete @ 0x1407571A8 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x140757208 (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x14075812C (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x140758434 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreateFromImageView @ 0x140848D80 (AslFileMappingCreateFromImageView.c)
 *     SdbTagIDToTagRef @ 0x140855BA0 (SdbTagIDToTagRef.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  int v9; // r8d
  __int64 v10; // rdi
  unsigned int v11; // eax
  const char *v13; // r9
  int v14; // r8d
  const char *v15; // r9
  int v16; // r8d
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rbx
  int v20; // [rsp+28h] [rbp-D8h]
  unsigned int v21; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  int v23[28]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v24[32]; // [rsp+B0h] [rbp-50h] BYREF

  memset(&v23[1], 0, 0x64uLL);
  memset(v24, 0, sizeof(v24));
  P = 0LL;
  v8 = 10;
  v21 = 0;
  if ( a4 )
    v8 = 26;
  v23[0] = v8;
  if ( (int)AslFileMappingCreate((unsigned int)&P, a2, -1, 0, 0LL) < 0 )
  {
    if ( a4 )
    {
      if ( (int)AslFileMappingCreateFromImageView(&P, a2, a4, a5) >= 0 )
        goto LABEL_4;
      v13 = "Failed to initialize file mapping from image view [%x]";
      v14 = 5602;
    }
    else
    {
      v13 = "Failed to create initialize file mapping [%x]";
      v14 = 5610;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v14, (_DWORD)v13);
    goto LABEL_8;
  }
LABEL_4:
  if ( !(unsigned int)SdbpCreateSearchDBContext(v23, P) )
  {
    v15 = "Failed to create search DB context";
    v16 = 5619;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v16, (_DWORD)v15);
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 )
  {
    v11 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 16), v9, (int)v23, v24, v20);
    if ( v11 > 0x10 )
    {
      v17 = 5638;
LABEL_21:
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGetDatabaseMatch",
        v17,
        (unsigned int)"The database has more matches than SDB_MAX_EXES");
      v11 = 16;
      goto LABEL_22;
    }
    if ( v11 )
      goto LABEL_22;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = SdbpSearchDB(a1, v10, v9, (int)v23, v24, v20);
  if ( v11 > 0x10 )
  {
    v17 = 5657;
    goto LABEL_21;
  }
  if ( v11 )
  {
LABEL_22:
    v18 = v11 - 1;
    v19 = v18;
    if ( v18 < 0 )
      goto LABEL_8;
    while ( (v24[2 * v19 + 1] & 2) != 0 || (unsigned int)SdbTagIDToTagRef(a1, v10, (unsigned int)v24[2 * v19], &v21) )
    {
      if ( --v19 < 0 )
        goto LABEL_8;
    }
    v15 = "Failed to convert tagid to tagref";
    v16 = 5677;
    goto LABEL_15;
  }
LABEL_8:
  SdbpReleaseSearchDBContext(v23);
  AslFileMappingDelete(P);
  return v21;
}
