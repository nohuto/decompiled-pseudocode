/*
 * XREFs of AslpFileLargeMapCreate @ 0x1800A6714
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A61E8 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslpFileLargeMapDelete @ 0x1800A6944 (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeMapCreate(_QWORD *a1, __int64 a2)
{
  char *Heap; // rax
  _QWORD *v5; // rbx
  NTSTATUS v6; // edi
  HANDLE *v7; // r14
  unsigned __int64 v8; // rbp
  ULONG_PTR *v9; // r12
  union _LARGE_INTEGER *v10; // r13
  PVOID *v11; // rbx
  NTSTATUS v12; // eax
  HANDLE FileHandle; // [rsp+30h] [rbp-88h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v16; // [rsp+D0h] [rbp+18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
  v16 = Heap;
  v5 = Heap;
  if ( Heap )
  {
    v7 = (HANDLE *)(Heap + 8);
    ObjectAttributes.Length = 48;
    FileHandle = *(HANDLE *)a2;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateSection((PHANDLE)Heap + 1, 0xF0005u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v6 < 0 )
      goto LABEL_4;
    v5[7] = (*(_QWORD *)(a2 + 16) - 4096LL) & 0xFFFFFFFFFFFF0000uLL;
    v6 = ZwMapViewOfSection(
           *v7,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID *)v5 + 5,
           0LL,
           0LL,
           (PLARGE_INTEGER)v5 + 7,
           v5 + 6,
           ViewUnmap,
           0x500000u,
           2u);
    if ( v6 < 0 )
      goto LABEL_4;
    v8 = 0x20000000LL;
    v9 = v5 + 3;
    v10 = (union _LARGE_INTEGER *)(v5 + 4);
    v11 = (PVOID *)(v5 + 2);
    do
    {
      *v9 = v8;
      v10->QuadPart = 0LL;
      v12 = ZwMapViewOfSection(*v7, (HANDLE)0xFFFFFFFFFFFFFFFFLL, v11, 0LL, 0LL, v10, v9, ViewUnmap, 0x500000u, 2u);
      v8 >>= 1;
      v6 = v12;
    }
    while ( v12 == -1073741801 && v8 >= 0x100000 );
    v5 = v16;
    if ( v12 < 0 )
    {
LABEL_4:
      AslLogCallPrintf(1LL);
    }
    else
    {
      *v16 = a2;
      v6 = 0;
      *a1 = v5;
      v5 = 0LL;
      v16 = 0LL;
    }
    if ( v5 )
      AslpFileLargeMapDelete(&v16);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
