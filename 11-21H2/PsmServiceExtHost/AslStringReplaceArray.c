/*
 * XREFs of AslStringReplaceArray @ 0x18009EBC4
 * Callers:
 *     SdbpExpandSummaryMsg @ 0x180096D70 (SdbpExpandSummaryMsg.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x18009E710 (AslStringDuplicate.c)
 *     AslStringReplace @ 0x18009E99C (AslStringReplace.c)
 */

__int64 __fastcall AslStringReplaceArray(wchar_t **a1, __int64 a2, const wchar_t **a3, __int64 a4)
{
  const wchar_t **v4; // rsi
  unsigned __int64 v7; // r12
  wchar_t *v8; // rdi
  __int64 v9; // r14
  int v10; // ebx
  wchar_t *v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = 0LL;
  *a1 = 0LL;
  v4 = a3;
  if ( a3 && a4 )
  {
    v7 = 0LL;
    v8 = (wchar_t *)a2;
    v9 = a4 - (_QWORD)a3;
    while ( 1 )
    {
      v10 = AslStringReplace(&v12, v8, *v4, *(const wchar_t **)((char *)v4 + v9));
      if ( (wchar_t *)a2 != v8 && v8 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      if ( v10 < 0 )
        goto LABEL_14;
      v8 = v12;
      ++v7;
      ++v4;
      if ( v7 >= 3 )
      {
        *a1 = v12;
        return 0;
      }
    }
  }
  v10 = AslStringDuplicate(a1, a2);
  if ( v10 < 0 )
  {
LABEL_14:
    AslLogCallPrintf(1LL);
    return (unsigned int)v10;
  }
  return 0;
}
