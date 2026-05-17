/*
 * XREFs of RtlxRemoveInvertedFunctionTable @ 0x180073D54
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x180073D20 (RtlRemoveInvertedFunctionTable.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

void __fastcall RtlxRemoveInvertedFunctionTable(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int *v3; // rax
  bool v4; // zf
  int v5; // eax

  v2 = (unsigned int)(LdrpInvertedFunctionTables[0] - 1);
  if ( LdrpInvertedFunctionTables[0] != 1 )
  {
    v3 = &LdrpInvertedFunctionTables[6 * v2 + 6];
    while ( a2 != *(_QWORD *)v3 )
    {
      v3 -= 6;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
      if ( v4 )
        return;
    }
    LdrProtectMrdata(0);
    _InterlockedIncrement(&dword_18019C528);
    v5 = LdrpInvertedFunctionTables[0];
    if ( LdrpInvertedFunctionTables[0] != 2 )
    {
      memmove(
        &LdrpInvertedFunctionTables[4 * v2 + 4 + 2 * v2],
        &LdrpInvertedFunctionTables[4 * (unsigned int)(v2 + 1) + 4 + 2 * (unsigned int)(v2 + 1)],
        24LL * (unsigned int)(LdrpInvertedFunctionTables[0] - v2 - 1));
      v5 = LdrpInvertedFunctionTables[0];
    }
    LdrpInvertedFunctionTables[0] = v5 - 1;
    _InterlockedIncrement(&dword_18019C528);
    LdrProtectMrdata(1);
  }
}
