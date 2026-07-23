/*
 * XREFs of sub_1407DE8D0 @ 0x1407DE8D0
 * Callers:
 *     sub_14063383C @ 0x14063383C (sub_14063383C.c)
 *     sub_1406FD6C0 @ 0x1406FD6C0 (sub_1406FD6C0.c)
 *     sub_1407DE5F0 @ 0x1407DE5F0 (sub_1407DE5F0.c)
 *     sub_1407E6840 @ 0x1407E6840 (sub_1407E6840.c)
 *     NtAllocateVirtualMemory @ 0x1407E69E0 (NtAllocateVirtualMemory.c)
 *     sub_14085BC40 @ 0x14085BC40 (sub_14085BC40.c)
 *     sub_140936BF8 @ 0x140936BF8 (sub_140936BF8.c)
 *     sub_14096E4D8 @ 0x14096E4D8 (sub_14096E4D8.c)
 *     sub_1409B08E8 @ 0x1409B08E8 (sub_1409B08E8.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1403606EC @ 0x1403606EC (sub_1403606EC.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall sub_1407DE8D0(ULONG_PTR a1, int a2, char a3, ULONG Tag, _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  PVOID v9; // r8
  void *v10; // r8
  void *v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v11 = 0LL;
  if ( a1 == -1LL )
  {
    v9 = *(PVOID *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2520LL);
  }
  else if ( a1 == -2LL )
  {
    v9 = qword_140D06C40;
  }
  else
  {
    result = sub_140732D40(a1, a2, (__int64)PsPartitionType, a3, Tag, &v11, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v9 = v11;
  }
  if ( sub_1403606EC((__int64)v9) )
    *a5 = v10;
  else
    v5 = -1073740640;
  if ( a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v10, Tag);
  return v5;
}
