/*
 * XREFs of MmAllocateContiguousMemoryEx @ 0x140391400
 * Callers:
 *     HalpAllocateCommonBufferDmaThin @ 0x1403910A4 (HalpAllocateCommonBufferDmaThin.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140512920 (HalpAllocateDomainCommonBufferInternal.c)
 *     DifMmAllocateContiguousMemoryExWrapper @ 0x1405E6C80 (DifMmAllocateContiguousMemoryExWrapper.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x1402F8D34 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x1402F9EDC (PsDereferencePartition.c)
 *     MiAllocateContiguousMemory @ 0x1403B9EB4 (MiAllocateContiguousMemory.c)
 *     MiConvertContiguousMemoryParameters @ 0x1403BA618 (MiConvertContiguousMemoryParameters.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 __fastcall MmAllocateContiguousMemoryEx(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        void **BugCheckParameter2,
        int a8,
        int a9,
        __int64 *a10)
{
  void ***v10; // rsi
  int v11; // r12d
  unsigned int v12; // ebx
  void ***v13; // rax
  __int64 ContiguousMemory; // rax
  _BYTE v16[8]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v17; // [rsp+58h] [rbp-40h] BYREF
  __int128 v18; // [rsp+68h] [rbp-30h]

  v10 = 0LL;
  v11 = (int)a1;
  v16[0] = 0;
  v17 = 0LL;
  *a10 = 0LL;
  v18 = 0LL;
  if ( (a9 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741811;
  if ( !a8 || a8 == 1416523587 || a8 == 1953394499 )
  {
    v12 = -1073741811;
  }
  else
  {
    v12 = MiConvertContiguousMemoryParameters(*a1, a2, a3, a4, a6, a5, (__int64)&v17);
    if ( (v12 & 0x80000000) != 0 )
      return v12;
    v13 = MiPartitionObjectToPartition(BugCheckParameter2, 0, v16);
    v10 = v13;
    if ( v13 )
    {
      ContiguousMemory = MiAllocateContiguousMemory(v11, v17, DWORD2(v17), v18, DWORD2(v18), a5, (__int64)v13, a8, a9);
      *a10 = ContiguousMemory;
      v12 = ContiguousMemory == 0 ? 0xC000009A : 0;
    }
  }
  if ( v16[0] )
    PsDereferencePartition((__int64)v10[25]);
  return v12;
}
