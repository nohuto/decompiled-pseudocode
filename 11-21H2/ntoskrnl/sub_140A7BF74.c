/*
 * XREFs of sub_140A7BF74 @ 0x140A7BF74
 * Callers:
 *     sub_140A7C0B8 @ 0x140A7C0B8 (sub_140A7C0B8.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x1402E1F90 (RtlFindNextForwardRunClear.c)
 *     sub_140A7BE54 @ 0x140A7BE54 (sub_140A7BE54.c)
 */

__int64 __fastcall sub_140A7BF74(
        char *BaseOfImage,
        __int64 a2,
        __int64 a3,
        _RTL_BITMAP *a4,
        unsigned int a5,
        __int64 a6)
{
  ULONG v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v12; // r15
  ULONG v13; // eax
  ULONG v14; // ebx
  int v15; // eax
  ULONG StartingRunIndex; // [rsp+60h] [rbp+18h] BYREF
  int v18; // [rsp+64h] [rbp+1Ch]

  v18 = HIDWORD(a3);
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  StartingRunIndex = 0;
  if ( a5 )
  {
    v12 = a6;
    v13 = 0;
    do
    {
      if ( v13 >= a4->SizeOfBitMap || !RtlFindNextForwardRunClear(a4, v6, &StartingRunIndex) )
        break;
      v14 = StartingRunIndex;
      v15 = sub_140A7BE54(BaseOfImage, (const char **)(a2 + 56LL * StartingRunIndex), v12 + 24 * v8);
      if ( v7 || v15 )
        v7 = 1;
      v6 = v14 + 1;
      v8 = (unsigned int)(v8 + 1);
      v13 = v6;
      StartingRunIndex = v6;
    }
    while ( (unsigned int)v8 < a5 );
  }
  return v7;
}
