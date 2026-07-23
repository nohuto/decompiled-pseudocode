/*
 * XREFs of sub_14066A17C @ 0x14066A17C
 * Callers:
 *     sub_14021F764 @ 0x14021F764 (sub_14021F764.c)
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 *     sub_14078E3F0 @ 0x14078E3F0 (sub_14078E3F0.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 * Callees:
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     sub_1409B9218 @ 0x1409B9218 (sub_1409B9218.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14066A17C(__int64 a1, unsigned __int8 *a2)
{
  void *v4; // rcx
  ULONG v5; // ebp
  void *Pool2; // rax
  void *v7; // rdi
  void *v8; // rcx

  v4 = *(void **)(a1 + 784);
  if ( v4 && !(unsigned __int8)sub_1409B9218(v4, a2) )
    return 3221225506LL;
  v5 = (4 * a2[1] + 11) & 0xFFFFFFFC;
  Pool2 = (void *)ExAllocatePool2(256LL, v5, 1767073107LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlCopySid(v5, Pool2, a2);
  v8 = *(void **)(a1 + 784);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *(_QWORD *)(a1 + 784) = v7;
  return 0LL;
}
