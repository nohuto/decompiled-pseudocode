/*
 * XREFs of AslpPathWildcardAllocMatchNode @ 0x18009F1C4
 * Callers:
 *     AslPathWildcardFindFirst @ 0x18009DC7C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x18009E24C (AslPathWildcardFindNext.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     RtlUShortAdd @ 0x180099670 (RtlUShortAdd.c)
 *     AslpPathWildcardFreeMatchNode @ 0x18009F4EC (AslpPathWildcardFreeMatchNode.c)
 *     RtlUnicodeStringCatString @ 0x18009F8D8 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCbCatStringN @ 0x18009F954 (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x18009F9F0 (RtlUnicodeStringCopy.c)
 */

__int64 __fastcall AslpPathWildcardAllocMatchNode(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        _WORD *a3,
        int a4,
        __int64 a5,
        unsigned __int16 a6)
{
  unsigned int v8; // ebx
  int v9; // eax
  const char *v10; // r9
  int v11; // r8d
  PVOID Heap; // rax
  __int64 ShareAccess; // [rsp+20h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 v17; // [rsp+90h] [rbp+20h] BYREF

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
LABEL_26:
    AslpPathWildcardFreeMatchNode(a1);
    return v8;
  }
  if ( !a4 )
  {
    v8 = -1073741565;
    goto LABEL_26;
  }
  v17 = *a2;
  v9 = RtlUShortAdd(v17, a6, (__int16 *)&v17);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = "RtlUShortAdd failed [%x]";
    v11 = 2886;
LABEL_25:
    LODWORD(ShareAccess) = v9;
    AslLogCallPrintf(1LL, (unsigned int)"AslpPathWildcardAllocMatchNode", v11, (_DWORD)v10, ShareAccess);
    goto LABEL_26;
  }
  v9 = RtlUShortAdd(v17, 4, (__int16 *)&v17);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = "RtlUShortAdd failed [%x]";
    v11 = 2892;
    goto LABEL_25;
  }
  a1[1] = v17;
  *a1 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v17);
  *((_QWORD *)a1 + 1) = Heap;
  if ( !Heap )
  {
    v8 = -1073741801;
    goto LABEL_26;
  }
  v9 = RtlUnicodeStringCopy(a1, a2);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = "RtlUnicodeStringCopy failed [%x]";
    v11 = 2907;
    goto LABEL_25;
  }
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2) != 92 )
  {
    v9 = RtlUnicodeStringCatString(a1);
    v8 = v9;
    if ( v9 < 0 )
    {
      v10 = "RtlUnicodeStringCatString failed [%x]";
      v11 = 2923;
      goto LABEL_25;
    }
  }
  if ( a5 )
  {
    if ( a6 )
    {
      v9 = RtlUnicodeStringCbCatStringN(a1, a5, a6);
      v8 = v9;
      if ( v9 < 0 )
      {
        v10 = "RtlUnicodeStringCbCatStringN failed [%x]";
        v11 = 2931;
        goto LABEL_25;
      }
    }
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenFile((PHANDLE)a1 + 3, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = "Failed to open dir [%x]";
    v11 = 2945;
    goto LABEL_25;
  }
  return v8;
}
