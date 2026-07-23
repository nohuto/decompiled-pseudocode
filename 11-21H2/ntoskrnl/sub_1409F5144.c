/*
 * XREFs of sub_1409F5144 @ 0x1409F5144
 * Callers:
 *     sub_14078F198 @ 0x14078F198 (sub_14078F198.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409F5144(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // edi
  _DWORD *Pool2; // rax

  v3 = 0;
  if ( a3 )
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 8) >> 2;
    if ( v6 <= 8 )
    {
      Pool2 = *(_DWORD **)(a1 + 8);
      if ( !Pool2 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 36LL, 1182233669LL);
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a1 + 8) = Pool2;
      }
      *Pool2 = v6;
      memmove(Pool2 + 1, *(const void **)a2, 4LL * v6);
      return v3;
    }
    return (unsigned int)-1073741811;
  }
  return v3;
}
