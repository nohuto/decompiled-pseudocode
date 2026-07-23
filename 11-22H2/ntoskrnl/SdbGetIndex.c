/*
 * XREFs of SdbGetIndex @ 0x1407559D8
 * Callers:
 *     SdbpSearchDB @ 0x140752714 (SdbpSearchDB.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140758F00 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x1407CB8AC (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     RtlRunOnceExecuteOnce @ 0x1407582A0 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall SdbGetIndex(_RTL_RUN_ONCE *Parameter, __int16 a2, __int16 a3, _DWORD *a4)
{
  unsigned int v7; // edi
  int v8; // ecx
  __int64 v9; // r8
  _WORD *v10; // rax
  __int16 v11; // r9
  __int64 v12; // rcx
  PVOID Context; // [rsp+50h] [rbp+8h] BYREF

  Context = 0LL;
  v7 = 0;
  if ( a4 )
    *a4 = 0;
  if ( RtlRunOnceExecuteOnce(Parameter + 327, InitOnceScanIndexes, Parameter, &Context) < 0 )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
    v10 = (char *)Context + 6;
    do
    {
      v11 = *(v10 - 1);
      if ( !v11 )
        break;
      if ( v11 == a2 && *v10 == a3 )
      {
        v12 = 5LL * v8;
        v7 = *((_DWORD *)Context + 2 * v12);
        if ( a4 )
          *a4 = *((_DWORD *)Context + 2 * v12 + 8);
        return v7;
      }
      ++v8;
      ++v9;
      v10 += 20;
    }
    while ( v9 < 64 );
  }
  return v7;
}
