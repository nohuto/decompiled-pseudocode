/*
 * XREFs of sub_140A1A2F8 @ 0x140A1A2F8
 * Callers:
 *     sub_140A19DE8 @ 0x140A19DE8 (sub_140A19DE8.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x14041BC60 (ZwMapViewOfSection.c)
 *     ZwCreateSection @ 0x14041C0A0 (ZwCreateSection.c)
 *     MmSecureVirtualMemoryEx @ 0x1406A2440 (MmSecureVirtualMemoryEx.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140A1A570 @ 0x140A1A570 (sub_140A1A570.c)
 */

__int64 __fastcall sub_140A1A2F8(HANDLE **a1, HANDLE *a2)
{
  HANDLE *v4; // rax
  HANDLE *v5; // rdi
  NTSTATUS v6; // ebx
  HANDLE *v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  ULONG_PTR *v10; // r14
  PVOID *v11; // r15
  LARGE_INTEGER *v12; // rdi
  NTSTATUS v13; // eax
  __int64 v14; // rax
  HANDLE FileHandle; // [rsp+30h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-68h] BYREF
  HANDLE *v18; // [rsp+D0h] [rbp+18h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4 = (HANDLE *)sub_14075B444((__int64)a1, 0x50uLL);
  v18 = v4;
  v5 = v4;
  if ( !v4 )
    return (unsigned int)-1073741801;
  v7 = v4 + 1;
  ObjectAttributes.Length = 48;
  FileHandle = *a2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateSection(v4 + 1, 0xF0005u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( v6 < 0 )
    goto LABEL_4;
  v5[8] = (HANDLE)(((unsigned __int64)a2[2] - 4096) & 0xFFFFFFFFFFFF0000uLL);
  v6 = ZwMapViewOfSection(
         *v7,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         v5 + 6,
         0LL,
         0LL,
         (PLARGE_INTEGER)v5 + 8,
         (PSIZE_T)v5 + 7,
         ViewUnmap,
         0x500000u,
         2u);
  if ( v6 < 0 )
    goto LABEL_4;
  v8 = MmSecureVirtualMemoryEx((unsigned __int64)v5[6], (__int64)v5[7], 2, 0);
  v5[9] = (HANDLE)v8;
  if ( !v8 )
  {
LABEL_7:
    sub_1406E0C3C(1LL, (__int64)"AslpFileLargeMapCreate");
    v6 = -1073741823;
    goto LABEL_14;
  }
  v9 = 0x20000000LL;
  v10 = (ULONG_PTR *)(v5 + 3);
  v11 = v5 + 2;
  v12 = (LARGE_INTEGER *)(v5 + 4);
  do
  {
    *v10 = v9;
    v12->QuadPart = 0LL;
    v13 = ZwMapViewOfSection(*v7, (HANDLE)0xFFFFFFFFFFFFFFFFLL, v11, 0LL, 0LL, v12, v10, ViewUnmap, 0x500000u, 2u);
    v9 >>= 1;
    v6 = v13;
  }
  while ( v13 == -1073741801 && v9 >= 0x100000 );
  v5 = v18;
  if ( v13 < 0 )
  {
LABEL_4:
    sub_1406E0C3C(1LL, (__int64)"AslpFileLargeMapCreate");
    goto LABEL_14;
  }
  v14 = MmSecureVirtualMemoryEx((unsigned __int64)*v11, *v10, 2, 0);
  v5[5] = (HANDLE)v14;
  if ( !v14 )
    goto LABEL_7;
  *v5 = a2;
  v6 = 0;
  *a1 = v5;
  v5 = 0LL;
  v18 = 0LL;
LABEL_14:
  if ( v5 )
    sub_140A1A570(&v18);
  return (unsigned int)v6;
}
