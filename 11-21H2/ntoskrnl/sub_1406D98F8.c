/*
 * XREFs of sub_1406D98F8 @ 0x1406D98F8
 * Callers:
 *     sub_1406D97E0 @ 0x1406D97E0 (sub_1406D97E0.c)
 *     sub_14079EC58 @ 0x14079EC58 (sub_14079EC58.c)
 *     sub_1408833DA @ 0x1408833DA (sub_1408833DA.c)
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14041BBC0 (ZwQueryVirtualMemory.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406D98F8(__int64 a1, ULONG_PTR a2, PVOID *a3, __int64 a4, char a5)
{
  unsigned int v5; // r12d
  int v8; // ebp
  unsigned int v9; // esi
  unsigned int v10; // edi
  PVOID *v11; // rbx
  char *v12; // r15
  NTSTATUS VirtualMemory; // eax
  void *Pool2; // rax
  _OWORD v16[3]; // [rsp+30h] [rbp-78h] BYREF

  v5 = a4;
  memset(v16, 0, sizeof(v16));
  if ( a2 == *((_QWORD *)KeGetCurrentThread() + 23) )
  {
    v8 = 0;
  }
  else
  {
    sub_14030D5C0(a2, 0LL, (__int64)v16, a4);
    v8 = 1;
  }
  v9 = 0;
  v10 = 0;
  if ( v5 )
  {
    v11 = (PVOID *)(a1 + 56);
    v12 = (char *)(a1 + 8);
    do
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        *a3,
                        MemoryRegionInformation,
                        v12,
                        0x30uLL,
                        0LL);
      *((_DWORD *)v11 - 14) = VirtualMemory;
      if ( VirtualMemory >= 0 )
      {
        v9 |= 1 << v10;
        if ( a5 )
        {
          Pool2 = (void *)ExAllocatePool2(256LL, 512LL, 1853049172LL);
          *v11 = Pool2;
          if ( !Pool2
            || ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 *a3,
                 MemoryMappedFilenameInformation,
                 Pool2,
                 0x200uLL,
                 0LL) >= 0 )
          {
            goto LABEL_9;
          }
          ExFreePoolWithTag(*v11, 0);
        }
        *v11 = 0LL;
      }
LABEL_9:
      ++v10;
      v12 += 64;
      ++a3;
      v11 += 8;
    }
    while ( v10 < v5 );
  }
  if ( v8 )
    sub_1402D0930((__int64)v16, 0LL);
  return v9;
}
