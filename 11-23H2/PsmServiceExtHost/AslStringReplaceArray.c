/*
 * XREFs of AslStringReplaceArray @ 0x18009927C
 * Callers:
 *     SdbpExpandSummaryMsg @ 0x180091B48 (SdbpExpandSummaryMsg.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x180098DC8 (AslStringDuplicate.c)
 *     AslStringReplace @ 0x180099054 (AslStringReplace.c)
 */

__int64 __fastcall AslStringReplaceArray(unsigned __int16 **a1, unsigned __int16 *a2, wchar_t **a3, __int64 a4)
{
  wchar_t **v4; // rsi
  unsigned __int64 v7; // r12
  wchar_t *v8; // rdi
  __int64 v9; // r14
  int v10; // ebx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+28h] [rbp-30h]
  unsigned __int16 *v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  *a1 = 0LL;
  v4 = a3;
  if ( a3 && a4 )
  {
    v7 = 0LL;
    v8 = a2;
    v9 = a4 - (_QWORD)a3;
    while ( 1 )
    {
      v10 = AslStringReplace(&v15, v8, *v4, *(wchar_t **)((char *)v4 + v9));
      if ( a2 != v8 && v8 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      if ( v10 < 0 )
        break;
      v8 = v15;
      ++v7;
      ++v4;
      if ( v7 >= 3 )
      {
        *a1 = v15;
        return 0;
      }
    }
    v13 = v10;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslStringReplaceArray",
      1456,
      (unsigned int)"AslStringReplace failed [%x]",
      v13);
  }
  else
  {
    v12 = AslStringDuplicate(a1, a2);
    v10 = v12;
    if ( v12 >= 0 )
    {
      return 0;
    }
    else
    {
      v14 = v12;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslStringReplaceArray",
        1416,
        (unsigned int)"AslStringDuplicate failed with \"%ws\" [%x]",
        a2,
        v14);
    }
  }
  return (unsigned int)v10;
}
