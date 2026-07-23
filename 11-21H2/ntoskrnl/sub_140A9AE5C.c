/*
 * XREFs of sub_140A9AE5C @ 0x140A9AE5C
 * Callers:
 *     sub_140B53B88 @ 0x140B53B88 (sub_140B53B88.c)
 *     sub_140B53D38 @ 0x140B53D38 (sub_140B53D38.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A9AE5C(unsigned __int16 *a1, ULONG a2)
{
  __int64 Pool2; // rax
  __int64 v4; // rbx
  size_t v5; // r8
  const void *v6; // rdx

  Pool2 = ExAllocatePool2(64LL, a1[1] + 32LL, a2);
  v4 = Pool2;
  if ( Pool2 )
  {
    v5 = *a1;
    *(_WORD *)(Pool2 + 18) = a1[1];
    v6 = (const void *)*((_QWORD *)a1 + 1);
    *(_QWORD *)(Pool2 + 24) = Pool2 + 32;
    *(_WORD *)(Pool2 + 16) = v5;
    memmove((void *)(Pool2 + 32), v6, v5);
  }
  return v4;
}
