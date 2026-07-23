/*
 * XREFs of sub_1406C1810 @ 0x1406C1810
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407A1CE8 @ 0x1407A1CE8 (sub_1407A1CE8.c)
 *     sub_140966C80 @ 0x140966C80 (sub_140966C80.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void *__fastcall sub_1406C1810(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax
  void *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax

  Pool2 = ExAllocatePool2(256LL, a2, a3);
  v4 = (void *)Pool2;
  if ( !Pool2 )
    return v4;
  v5 = Pool2 + 48;
  memset((void *)(Pool2 + 48), 0, 0x118uLL);
  v6 = sub_1407A1CE8(qword_140D06CC0, v5, 0, 0, 0LL);
  if ( v6 || (v6 = sub_140966C80(v5)) != 0 )
  {
    *(_DWORD *)(v5 + 264) = v6 | 0x80000000;
    return v4;
  }
  ExFreePoolWithTag(v4, 0);
  return 0LL;
}
