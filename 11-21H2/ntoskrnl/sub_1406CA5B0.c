/*
 * XREFs of sub_1406CA5B0 @ 0x1406CA5B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406CA5B0(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  void *v9; // rcx
  void *Pool2; // rax

  v3 = *a3;
  v5 = *(_DWORD *)(a1 + 24);
  if ( *a3 > v5 )
  {
    v9 = *(void **)(a1 + 16);
    v5 = 0;
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x58706E50u);
      v3 = *a3;
    }
    if ( v3 < 0x1000 )
    {
      *a3 = 4096;
      v3 = 4096;
    }
    Pool2 = (void *)ExAllocatePool2(256LL, v3, 1483763280LL);
    *(_QWORD *)(a1 + 16) = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, *a3);
      v5 = *a3;
    }
    *(_DWORD *)(a1 + 24) = v5;
  }
  *a3 = v5;
  result = *(_QWORD *)(a1 + 16);
  *a2 = result;
  return result;
}
