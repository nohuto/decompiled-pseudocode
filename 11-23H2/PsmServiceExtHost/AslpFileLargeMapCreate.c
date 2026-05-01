/*
 * XREFs of AslpFileLargeMapCreate @ 0x1800A0E8C
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A08FC (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800982C0 (AslLogCallPrintf.c)
 *     AslpFileLargeMapDelete @ 0x1800A10BC (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeMapCreate(_QWORD *a1, __int64 a2)
{
  char *Heap; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // edi
  HANDLE *v7; // r14
  NTSTATUS v8; // eax
  const char *v9; // r9
  int v10; // r8d
  unsigned __int64 v11; // rbp
  ULONG_PTR *v12; // r12
  union _LARGE_INTEGER *v13; // r13
  PVOID *v14; // rbx
  ULONG SectionPageProtection[2]; // [rsp+20h] [rbp-98h]
  HANDLE FileHandle; // [rsp+30h] [rbp-88h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v19; // [rsp+D0h] [rbp+18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
  v19 = Heap;
  v5 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  v7 = (HANDLE *)(Heap + 8);
  ObjectAttributes.Length = 48;
  FileHandle = *(HANDLE *)a2;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwCreateSection((PHANDLE)Heap + 1, 0xF0005u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = "ZwCreateSection failed [%x]";
    v10 = 346;
LABEL_5:
    SectionPageProtection[0] = v8;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileLargeMapCreate", v10, (_DWORD)v9, *(_QWORD *)SectionPageProtection);
    goto LABEL_14;
  }
  v5[7] = (*(_QWORD *)(a2 + 16) - 4096LL) & 0xFFFFFFFFFFFF0000uLL;
  v8 = ZwMapViewOfSection(
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
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = "ZwMapViewOfSection failed to map the end of the file [%x]";
    v10 = 374;
    goto LABEL_5;
  }
  v11 = 0x20000000LL;
  v12 = v5 + 3;
  v13 = (union _LARGE_INTEGER *)(v5 + 4);
  v14 = (PVOID *)(v5 + 2);
  do
  {
    *v12 = v11;
    v13->QuadPart = 0LL;
    v8 = ZwMapViewOfSection(*v7, (HANDLE)0xFFFFFFFFFFFFFFFFLL, v14, 0LL, 0LL, v13, v12, ViewUnmap, 0x500000u, 2u);
    v11 >>= 1;
    v6 = v8;
  }
  while ( v8 == -1073741801 && v11 >= 0x100000 );
  v5 = v19;
  if ( v8 < 0 )
  {
    v9 = "ZwMapViewOfSection failed to map the start of the file [%x]";
    v10 = 416;
    goto LABEL_5;
  }
  *v19 = a2;
  v6 = 0;
  *a1 = v5;
  v5 = 0LL;
  v19 = 0LL;
LABEL_14:
  if ( v5 )
    AslpFileLargeMapDelete(&v19);
  return v6;
}
