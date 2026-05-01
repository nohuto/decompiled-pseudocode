/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x180096524
 * Callers:
 *     SdbpCheckMatchingText @ 0x1800957C0 (SdbpCheckMatchingText.c)
 * Callees:
 *     SdbFindFirstTag @ 0x180093FA4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180094294 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180094344 (SdbGetTagDataSize.c)
 *     SdbReadBinaryTag @ 0x18009442C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1800944E8 (SdbReadDWORDTag.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMatchingTextAttributes(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v7; // ebx
  int v8; // r13d
  unsigned int v9; // r12d
  void *v11; // rsi
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // rax
  __int64 v14; // r9
  _WORD *v15; // r15
  unsigned int v16; // eax
  unsigned int v17; // r14d
  unsigned int TagDataSize; // eax
  unsigned int v19; // ebp
  PVOID Heap; // rax
  __int64 v21; // r9
  unsigned int v22; // eax
  __int64 v23; // r9
  int DWORDTag; // r14d
  unsigned int v25; // eax

  v7 = 0;
  *a3 = 0LL;
  v8 = 0x2000;
  *a4 = 0LL;
  v9 = a2;
  *a5 = 0;
  v11 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  FirstTag = SdbFindFirstTag(a1, a2, 24577LL, (__int64)a4);
  if ( !FirstTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1783,
      (unsigned int)"Failed to get MATCHING_TEXT file path");
    return v7;
  }
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v15 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1789,
      (unsigned int)"Failed to read MATCHING_TEXT file path");
LABEL_22:
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    return v7;
  }
  v16 = SdbFindFirstTag(a1, v9, 36883LL, v14);
  v17 = v16;
  if ( !v16 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1798,
      (unsigned int)"Failed to read text to match");
    return v7;
  }
  TagDataSize = SdbGetTagDataSize(a1, v16);
  v19 = TagDataSize;
  if ( !TagDataSize )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1804,
      (unsigned int)"Failed to get text to match blob");
    return v7;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, TagDataSize + 2LL);
  v11 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1810,
      (unsigned int)"Failed to allocate memory for text blob");
    return v7;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, v17, (__int64)Heap, v19) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1815,
      (unsigned int)"Failed to read matching text blob");
    goto LABEL_22;
  }
  v22 = SdbFindFirstTag(a1, v9, 16467LL, v21);
  if ( !v22 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1824,
      (unsigned int)"Failed to read text encoding");
    goto LABEL_22;
  }
  DWORDTag = SdbReadDWORDTag(a1, v22, 0);
  if ( !DWORDTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1830,
      (unsigned int)"Failed to read encoding type");
    goto LABEL_22;
  }
  v25 = SdbFindFirstTag(a1, v9, 16385LL, v23);
  if ( v25 )
    v8 = SdbReadDWORDTag(a1, v25, 0x2000u);
  v7 = 1;
  *a3 = v15;
  *a4 = v11;
  *a5 = v19;
  *a6 = DWORDTag;
  *a7 = v8;
  return v7;
}
