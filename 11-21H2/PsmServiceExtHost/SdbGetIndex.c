/*
 * XREFs of SdbGetIndex @ 0x180098A58
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x1800989A8 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetIndex(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // edi
  unsigned int v6; // edx
  __int64 v7; // r8
  _WORD *i; // rax
  __int64 v9; // rdx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v5 = 0;
  if ( a4 )
    *a4 = 0;
  if ( (int)RtlRunOnceExecuteOnce(a1 + 1336, InitOnceScanIndexes, a1, &v11) >= 0 )
  {
    v6 = 0;
    v7 = 0LL;
    for ( i = (_WORD *)(v11 + 4); *i; i += 20 )
    {
      if ( *i == 28685 && i[1] == 16405 )
      {
        v9 = 5LL * v6;
        v5 = *(_DWORD *)(v11 + 8 * v9);
        if ( a4 )
          *a4 = *(_DWORD *)(v11 + 8 * v9 + 32);
        return v5;
      }
      ++v6;
      if ( ++v7 >= 32 )
        return v5;
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetIndex",
      1063,
      (unsigned int)"RtlRunOnceExecuteOnce failed for InitOnceScanIndexes [%x]");
  }
  return v5;
}
