/*
 * XREFs of AslpPathWildcardAllocMatchNode @ 0x1800A57E8
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1800A42F4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1800A48BC (AslPathWildcardFindNext.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     RtlUShortAdd @ 0x18009F014 (RtlUShortAdd.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A5B10 (AslpPathWildcardFreeMatchNode.c)
 *     RtlUnicodeStringCatString @ 0x1800A5EFC (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCbCatStringN @ 0x1800A5F78 (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x1800A6014 (RtlUnicodeStringCopy.c)
 */

__int64 __fastcall AslpPathWildcardAllocMatchNode(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        _WORD *a3,
        int a4,
        __int64 a5,
        unsigned __int16 a6)
{
  int v8; // ebx
  PVOID Heap; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 v13; // [rsp+90h] [rbp+20h] BYREF

  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  while ( 1 )
  {
    *((_QWORD *)a1 + 2) = a3;
    if ( !*a3 )
      break;
    ++a3;
  }
  *((_QWORD *)a1 + 2) = a3 + 1;
  if ( !a3[1] )
  {
    v8 = a4 != 0 ? -1073741638 : -1073741197;
LABEL_20:
    AslpPathWildcardFreeMatchNode(a1);
    return (unsigned int)v8;
  }
  if ( !a4 )
  {
    v8 = -1073741565;
    goto LABEL_20;
  }
  v13 = *a2;
  v8 = RtlUShortAdd(v13, a6, (__int16 *)&v13);
  if ( v8 < 0 )
    goto LABEL_19;
  v8 = RtlUShortAdd(v13, 4, (__int16 *)&v13);
  if ( v8 < 0 )
    goto LABEL_19;
  a1[1] = v13;
  *a1 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v13);
  *((_QWORD *)a1 + 1) = Heap;
  if ( !Heap )
  {
    v8 = -1073741801;
    goto LABEL_20;
  }
  v8 = RtlUnicodeStringCopy(a1, a2);
  if ( v8 < 0 )
    goto LABEL_19;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2) != 92 )
  {
    v8 = RtlUnicodeStringCatString(a1);
    if ( v8 < 0 )
      goto LABEL_19;
  }
  if ( a5 && a6 && (v8 = RtlUnicodeStringCbCatStringN(a1, a5, a6), v8 < 0)
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 64,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)a1,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v8 = ZwOpenFile((PHANDLE)a1 + 3, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u),
        v8 < 0) )
  {
LABEL_19:
    AslLogCallPrintf(1LL);
    goto LABEL_20;
  }
  return (unsigned int)v8;
}
