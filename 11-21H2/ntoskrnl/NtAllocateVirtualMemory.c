/*
 * XREFs of NtAllocateVirtualMemory @ 0x1407E69E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 *     sub_1407DE8D0 @ 0x1407DE8D0 (sub_1407DE8D0.c)
 *     sub_1407E6C40 @ 0x1407E6C40 (sub_1407E6C40.c)
 */

NTSTATUS __stdcall NtAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  unsigned __int64 v8; // r14
  char v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rcx
  PVOID v12; // rdi
  ULONG_PTR v13; // rsi
  NTSTATUS v14; // ebx
  char v16; // [rsp+70h] [rbp-138h]
  __int64 v17; // [rsp+78h] [rbp-130h] BYREF
  void *v18; // [rsp+80h] [rbp-128h] BYREF
  PVOID v19; // [rsp+88h] [rbp-120h]
  ULONG_PTR v20; // [rsp+90h] [rbp-118h]
  PVOID Object[3]; // [rsp+98h] [rbp-110h] BYREF
  ULONG_PTR v22[10]; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD v23[16]; // [rsp+100h] [rbp-A8h] BYREF
  int v24; // [rsp+1B0h] [rbp+8h]
  int v25; // [rsp+1C0h] [rbp+18h]

  v25 = ZeroBits;
  v24 = (int)ProcessHandle;
  v8 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v22, 0, 0x48uLL);
  v9 = *((_BYTE *)KeGetCurrentThread() + 562);
  v16 = v9;
  if ( v9 )
  {
    v10 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    v11 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  v12 = *BaseAddress;
  v19 = *BaseAddress;
  v13 = *RegionSize;
  v20 = *RegionSize;
  LODWORD(v22[4]) = AllocationType & 0x7F;
  if ( (AllocationType & 0x44000) != 0 )
    return -1073741811;
  memset(v23, 0, sizeof(v23));
  v18 = 0LL;
  Object[0] = 0LL;
  v17 = 0LL;
  v14 = sub_1407E6C40(
          v24,
          (_DWORD)v12,
          v25,
          v13,
          AllocationType & 0xFFFFFF80,
          Protect,
          (__int64)v22,
          v9,
          0,
          0,
          0LL,
          (__int64)v23,
          (__int64)Object);
  if ( v14 >= 0 )
  {
    if ( v22[3] )
    {
      if ( v22[3] == -3LL )
      {
        v8 = 1LL;
        v17 = 1LL;
      }
      else
      {
        v14 = sub_1407DE8D0(v22[3], 2, v16, 0x61566D4Du, &v17);
        v8 = v17;
        if ( v14 < 0 )
          goto LABEL_13;
      }
    }
    if ( LOBYTE(v22[6]) && (AllocationType & 0x20400000) != 0x400000 )
    {
      v14 = -1073741811;
LABEL_21:
      if ( v23[0] )
        ++dword_140C52B24;
      else
        ++dword_140C52B20;
      goto LABEL_14;
    }
    v14 = sub_1407BE3C0((__int64)v23, (LARGE_INTEGER)v8, (__int64 *)&v18);
    if ( v14 >= 0 )
    {
      v12 = v18;
      v19 = v18;
      v13 = v23[3];
      v20 = v23[3];
    }
  }
LABEL_13:
  if ( v14 < 0 )
    goto LABEL_21;
LABEL_14:
  if ( v8 >= 2 )
    sub_1403606C4(v8);
  if ( Object[0] )
    ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
  if ( v14 >= 0 )
  {
    *BaseAddress = v12;
    *RegionSize = v13;
  }
  return v14;
}
