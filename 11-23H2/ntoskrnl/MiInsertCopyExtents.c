/*
 * XREFs of MiInsertCopyExtents @ 0x14063E36C
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x140A331D4 (MiAllocateEntireImageFileExtents.c)
 *     MiAllocateFileExtents @ 0x140A33318 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     MiFormCopyExtents @ 0x14063DB28 (MiFormCopyExtents.c)
 *     MiInsertExtentList @ 0x14063E418 (MiInsertExtentList.c)
 *     MiLockFileExtentsExclusive @ 0x140A343F0 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x140A34454 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

unsigned int *__fastcall MiInsertCopyExtents(__int64 a1, _DWORD *a2, signed int a3)
{
  __int64 v3; // rdi
  unsigned int *result; // rax
  unsigned int *v6; // rsi
  unsigned __int64 *v7; // rbp
  __int64 i; // rdi
  unsigned __int64 *v9; // rdx

  v3 = a3;
  result = MiFormCopyExtents(a1, a3);
  v6 = result;
  if ( result )
  {
    MiLockFileExtentsExclusive();
    if ( a2 )
    {
      v7 = (unsigned __int64 *)((char *)&unk_140C65898 + 8 * v3);
      for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
      {
        v9 = (unsigned __int64 *)&a2[12 * i + 2];
        if ( v9[4] != 0x8000000000000000uLL )
          RtlAvlRemoveNode(v7, v9);
      }
    }
    MiInsertExtentList(v6);
    MiUnlockFileExtentsExclusive();
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
    return v6;
  }
  return result;
}
