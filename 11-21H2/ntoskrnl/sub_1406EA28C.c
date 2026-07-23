/*
 * XREFs of sub_1406EA28C @ 0x1406EA28C
 * Callers:
 *     sub_14078F198 @ 0x14078F198 (sub_14078F198.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406EA28C(__int64 a1, char a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  void *v8; // rcx
  _DWORD *v10; // rdi
  _DWORD *Pool2; // rax

  v4 = 0;
  if ( a4 )
  {
    v8 = *(void **)(a1 + 88);
    if ( !v8 )
      return v4;
    v10 = 0LL;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 8) < 0x18u )
      return (unsigned int)-1073741811;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, *(unsigned int *)(a3 + 8), 1182233669LL);
    v10 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memmove(Pool2, *(const void **)a3, *(unsigned int *)(a3 + 8));
    v10[4] = *(_DWORD *)(a3 + 8);
    *((_QWORD *)v10 + 1) = 1LL << a2;
    v10[5] = 0;
    v8 = *(void **)(a1 + 88);
  }
  *(_QWORD *)(a1 + 88) = v10;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v4;
}
