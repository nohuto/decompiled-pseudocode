/*
 * XREFs of SdbGetIndex @ 0x180093B34
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x180093A84 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetIndex(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // edi
  int v6; // eax
  int v7; // r8d
  __int64 v8; // rdx
  _WORD *i; // rax
  int v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v5 = 0;
  if ( a4 )
    *a4 = 0;
  v6 = RtlRunOnceExecuteOnce(a1 + 2616, InitOnceScanIndexes, a1, &v12);
  if ( v6 >= 0 )
  {
    v7 = 0;
    v8 = 0LL;
    for ( i = (_WORD *)(v12 + 6); *(i - 1); i += 20 )
    {
      if ( *(i - 1) == 28685 && *i == 16405 )
      {
        v5 = *(_DWORD *)(v12 + 40LL * v7);
        if ( a4 )
          *a4 = *(_DWORD *)(v12 + 40LL * v7 + 32);
        return v5;
      }
      ++v7;
      if ( ++v8 >= 64 )
        return v5;
    }
  }
  else
  {
    v11 = v6;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetIndex",
      1063,
      (unsigned int)"RtlRunOnceExecuteOnce failed for InitOnceScanIndexes [%x]",
      v11);
  }
  return v5;
}
