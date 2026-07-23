/*
 * XREFs of RtlxRemoveInvertedFunctionTable @ 0x18007A58C
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x18007A558 (RtlRemoveInvertedFunctionTable.c)
 * Callees:
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

void __fastcall RtlxRemoveInvertedFunctionTable(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int *v3; // rax
  bool v4; // zf
  int v5; // eax

  v2 = (unsigned int)(LdrpInvertedFunctionTable[0] - 1);
  if ( LdrpInvertedFunctionTable[0] == 1 )
  {
LABEL_5:
    if ( !(_DWORD)v2 )
      return;
  }
  else
  {
    v3 = &LdrpInvertedFunctionTable[6 * v2 + 6];
    while ( a2 != *(_QWORD *)v3 )
    {
      v3 -= 6;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
      if ( v4 )
        goto LABEL_5;
    }
  }
  LdrProtectMrdata(0);
  _InterlockedIncrement(&dword_18018F508);
  v5 = LdrpInvertedFunctionTable[0];
  if ( LdrpInvertedFunctionTable[0] != 2 )
  {
    memmove(
      &LdrpInvertedFunctionTable[4 * v2 + 4 + 2 * v2],
      &LdrpInvertedFunctionTable[4 * (unsigned int)(v2 + 1) + 4 + 2 * (unsigned int)(v2 + 1)],
      24LL * (unsigned int)(LdrpInvertedFunctionTable[0] - v2 - 1));
    v5 = LdrpInvertedFunctionTable[0];
  }
  LdrpInvertedFunctionTable[0] = v5 - 1;
  _InterlockedIncrement(&dword_18018F508);
  LdrProtectMrdata(1);
}
