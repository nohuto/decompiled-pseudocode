/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x18009B64C
 * Callers:
 *     SdbpCheckMatchingText @ 0x18009A6F0 (SdbpCheckMatchingText.c)
 * Callees:
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180099284 (SdbGetTagDataSize.c)
 *     SdbReadBinaryTag @ 0x18009936C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180099428 (SdbReadDWORDTag.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMatchingTextAttributes(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v7; // ebx
  int v8; // r13d
  void *v11; // rsi
  unsigned int FirstTag; // eax
  const char *v13; // r9
  int v14; // r8d
  _WORD *StringTagPtr; // rax
  _WORD *v16; // r15
  unsigned int v17; // eax
  unsigned int v18; // r14d
  unsigned int TagDataSize; // eax
  unsigned int v20; // ebp
  PVOID Heap; // rax
  int v22; // r8d
  const char *v23; // r9
  unsigned int v24; // eax
  int DWORDTag; // r14d
  unsigned int v26; // eax

  v7 = 0;
  *a3 = 0LL;
  v8 = 0x2000;
  *a4 = 0LL;
  *a5 = 0;
  v11 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
  {
    v13 = "Failed to get MATCHING_TEXT file path";
    v14 = 1577;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMatchingTextAttributes", v14, (_DWORD)v13);
    return v7;
  }
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v16 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
  {
    v22 = 1583;
    v23 = "Failed to read MATCHING_TEXT file path";
LABEL_22:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMatchingTextAttributes", v22, (_DWORD)v23);
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    return v7;
  }
  v17 = SdbFindFirstTag(a1, a2, 36883);
  v18 = v17;
  if ( !v17 )
  {
    v13 = "Failed to read text to match";
    v14 = 1592;
    goto LABEL_3;
  }
  TagDataSize = SdbGetTagDataSize(a1, v17);
  v20 = TagDataSize;
  if ( !TagDataSize )
  {
    v13 = "Failed to get text to match blob";
    v14 = 1598;
    goto LABEL_3;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, TagDataSize + 2LL);
  v11 = Heap;
  if ( !Heap )
  {
    v13 = "Failed to allocate memory for text blob";
    v14 = 1604;
    goto LABEL_3;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, v18, (__int64)Heap, v20) )
  {
    v22 = 1609;
    v23 = "Failed to read matching text blob";
    goto LABEL_22;
  }
  v24 = SdbFindFirstTag(a1, a2, 16467);
  if ( !v24 )
  {
    v22 = 1618;
    v23 = "Failed to read text encoding";
    goto LABEL_22;
  }
  DWORDTag = SdbReadDWORDTag(a1, v24, 0);
  if ( !DWORDTag )
  {
    v22 = 1624;
    v23 = "Failed to read encoding type";
    goto LABEL_22;
  }
  v26 = SdbFindFirstTag(a1, a2, 16385);
  if ( v26 )
    v8 = SdbReadDWORDTag(a1, v26, 0x2000u);
  v7 = 1;
  *a3 = v16;
  *a4 = v11;
  *a5 = v20;
  *a6 = DWORDTag;
  *a7 = v8;
  return v7;
}
