/*
 * XREFs of sub_1409F1CB0 @ 0x1409F1CB0
 * Callers:
 *     sub_1407E0C78 @ 0x1407E0C78 (sub_1407E0C78.c)
 *     sub_1409EF744 @ 0x1409EF744 (sub_1409EF744.c)
 *     sub_1409F1D50 @ 0x1409F1D50 (sub_1409F1D50.c)
 *     sub_1409F39DC @ 0x1409F39DC (sub_1409F39DC.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1409F1878 @ 0x1409F1878 (sub_1409F1878.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409F1CB0(__int64 a1, char a2)
{
  void *v4; // rcx
  unsigned int v5; // r8d
  int v6; // r8d
  __int64 v7; // rdx

  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 32) )
    {
      do
      {
        sub_1409F1878(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v5 + 8));
        v5 = v6 + 1;
      }
      while ( v5 < *(_DWORD *)(a1 + 32) );
      v4 = *(void **)(a1 + 24);
    }
    ExFreePoolWithTag(v4, 0x56777445u);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
  }
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    sub_1409F1878(*(_QWORD *)a1, v7);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( *(_QWORD *)a1 )
  {
    if ( a2 )
      ObfDereferenceObject(**(PVOID **)a1);
    *(_QWORD *)a1 = 0LL;
  }
}
