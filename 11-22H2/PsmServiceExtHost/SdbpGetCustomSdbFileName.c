/*
 * XREFs of SdbpGetCustomSdbFileName @ 0x18009284C
 * Callers:
 *     SdbGetPathCustomSdb @ 0x1800922F8 (SdbGetPathCustomSdb.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x180002328 (RtlStringCopyWorkerW.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslGuidToString @ 0x180098D78 (AslGuidToString.c)
 */

__int64 __fastcall SdbpGetCustomSdbFileName(_WORD *a1)
{
  int v2; // eax
  signed int v3; // ebx
  _WORD *v4; // rax
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-18h]
  signed int v8; // [rsp+20h] [rbp-18h]

  *a1 = 0;
  v2 = AslGuidToString();
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = a1;
    v5 = 43LL;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v5;
    }
    while ( v5 );
    v3 = v5 == 0 ? 0xC000000D : 0;
    if ( v5 )
      v3 = RtlStringCopyWorkerW(
             (_WORD *)((char *)a1 + ((2 * (43 - v5)) & -(__int64)(v5 != 0))),
             ((v5 - 43) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64)) + 43,
             -v5,
             (__int64)L".sdb");
    if ( v3 >= 0 )
    {
      return 0;
    }
    else
    {
      v8 = v3;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetCustomSdbFileName",
        830,
        (unsigned int)"RtlStringCchCatW failed [%x]",
        v8);
    }
  }
  else
  {
    v7 = v2;
    AslLogCallPrintf(1, (unsigned int)"SdbpGetCustomSdbFileName", 824, (unsigned int)"AslGuidToString failed [%x]", v7);
  }
  return (unsigned int)v3;
}
