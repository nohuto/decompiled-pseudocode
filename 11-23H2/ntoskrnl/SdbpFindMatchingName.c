/*
 * XREFs of SdbpFindMatchingName @ 0x140849F28
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x1407CB31C (SdbFindFirstStringIndexedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x140849EE4 (SdbFindNextStringIndexedTag.c)
 * Callees:
 *     _wcsicmp @ 0x1403D9A50 (_wcsicmp.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140757368 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1407579A4 (SdbFindFirstTag.c)
 *     SdbpGetNextIndexedRecord @ 0x140849FD4 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbpFindMatchingName(__int64 a1, unsigned int a2, const wchar_t **a3)
{
  unsigned int NextIndexedRecord; // ebx
  unsigned int FirstTag; // eax
  __int64 v7; // r8
  const wchar_t *StringTagPtr; // rcx
  bool v9; // zf
  int v11; // eax

  NextIndexedRecord = a2;
  if ( !a2 )
    return NextIndexedRecord;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a1, NextIndexedRecord, *((unsigned __int16 *)a3 + 6));
    if ( !FirstTag )
      break;
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag, v7);
    if ( !StringTagPtr )
      break;
    if ( (*((_DWORD *)a3 + 5) & 1) != 0 )
    {
      v11 = wcsicmp(a3[4], StringTagPtr);
      v9 = v11 == 0;
      if ( v11 < 0 )
        return 0LL;
    }
    else
    {
      v9 = wcsicmp(StringTagPtr, a3[4]) == 0;
    }
    if ( !v9 )
    {
      NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *(unsigned int *)a3, a3);
      if ( NextIndexedRecord )
        continue;
    }
    return NextIndexedRecord;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
