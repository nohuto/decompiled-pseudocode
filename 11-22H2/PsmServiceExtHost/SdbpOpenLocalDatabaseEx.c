/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x1800912B0
 * Callers:
 *     SdbTagRefToTagID @ 0x180091478 (SdbTagRefToTagID.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     SdbOpenDatabaseEx @ 0x1800903E4 (SdbOpenDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x180091110 (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x1800923F4 (SdbResolveDatabaseEx.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, PVOID **a4, _DWORD *a5)
{
  unsigned int v5; // esi
  __int64 v9; // rdi
  const char *v10; // r9
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // r8
  PVOID *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v18; // xmm0
  __int64 v20; // [rsp+20h] [rbp-278h]
  int v21; // [rsp+30h] [rbp-268h] BYREF
  int v22; // [rsp+34h] [rbp-264h] BYREF
  _BYTE v23[528]; // [rsp+40h] [rbp-258h] BYREF

  v22 = 0;
  v5 = 0;
  v21 = 0;
  v9 = *a5 >> 28;
  if ( (*a5 & 0xF0000000) == 0 )
    v9 = (unsigned int)*a5;
  if ( (_DWORD)v9 != 1 && (unsigned int)(v9 - 3) > 0xC )
  {
    LODWORD(v20) = v9;
    v10 = "Bad index 0x%lx";
    v11 = 1094;
LABEL_20:
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenLocalDatabaseEx", v11, (_DWORD)v10, v20);
    return v5;
  }
  SdbpCloseLocalDatabaseEx(a1, (__int64)a2, v9);
  v13 = SdbResolveDatabaseEx(a1, (_DWORD)a2, (unsigned int)&v22, (unsigned int)&v21, (__int64)v23);
  if ( (unsigned int)(v13 - 1) > 0x102 )
  {
    LODWORD(v20) = v13;
    v10 = "Cannot resolve database, the path length is 0x%lx";
    v11 = 1128;
    goto LABEL_20;
  }
  if ( *(_WORD *)(a1 + 584) == 0x7FFF || (*(_DWORD *)(a1 + 552) & v21) != 0 )
  {
    v15 = SdbOpenDatabaseEx((unsigned __int64)v23, v12, v14);
    if ( v15 )
    {
      v16 = 32LL * (unsigned int)v9;
      v17 = 32 * (v9 + 2);
      *(_QWORD *)(v16 + a1 + 56) = v15;
      *(_DWORD *)(v17 + a1) = 2;
      *(_DWORD *)(a1 + 36) |= 1 << v9;
      if ( a2 )
      {
        v18 = *a2;
        *(_DWORD *)(v17 + a1) |= 1u;
        *(_OWORD *)(v16 + a1 + 40) = v18;
      }
      else
      {
        *(_OWORD *)(v16 + a1 + 40) = 0LL;
      }
      v5 = 1;
      if ( (_DWORD)v9 == 1 )
        *(_QWORD *)(a1 + 24) = v15;
      *a5 = (_DWORD)v9 << 28;
      if ( a4 )
        *a4 = v15;
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpOpenLocalDatabaseEx", 1165, (unsigned int)"Failed to open database");
    }
  }
  else
  {
    AslLogCallPrintf(
      3,
      (unsigned int)"SdbpOpenLocalDatabaseEx",
      1149,
      (unsigned int)"Database \"%ws\" is not of the same type as the main EXE",
      v23);
  }
  return v5;
}
