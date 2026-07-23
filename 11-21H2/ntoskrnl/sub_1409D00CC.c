/*
 * XREFs of sub_1409D00CC @ 0x1409D00CC
 * Callers:
 *     sub_1409D1D04 @ 0x1409D1D04 (sub_1409D1D04.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14067757C @ 0x14067757C (sub_14067757C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409D00CC(
        const void **a1,
        unsigned int *a2,
        unsigned int *a3,
        const void *a4,
        unsigned int Size)
{
  unsigned int v5; // ebx
  const void *v6; // rax
  unsigned int v10; // edi
  unsigned int v11; // ebp
  PVOID v12; // rax
  PVOID v13; // rdi
  void *v14; // r13

  v5 = 0;
  v6 = a4;
  if ( a1 && a2 && a3 )
  {
    v10 = *a3;
    v11 = *a3 + Size;
    if ( v11 < *a3 )
      return 534;
    if ( v11 > *a2 )
    {
      v12 = sub_14067757C(v11);
      v13 = v12;
      if ( !v12 )
        return 8;
      v14 = (void *)*a1;
      memmove(v12, *a1, *a2);
      if ( v14 )
        ExFreePoolWithTag(v14, 0);
      v6 = a4;
      *a1 = v13;
      v10 = *a3;
      *a2 = v11;
    }
    memmove((char *)*a1 + v10, v6, Size);
    *a3 = v10 + Size;
    return v5;
  }
  return 87LL;
}
